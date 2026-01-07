// Copyright Legion. All Rights Reserved.

#include "RPGInvHooks.h"

#include "Components/RPGPawnComp.h"
#include "RPGInvLog.h"

#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "EngineUtils.h"
#include "Inv/RPGInvPlayerComp.h"
#include "Inv/RPGInvChestComp.h"
#include "Actors/RPGInvDrop.h"

#include "AbilitySystemComponent.h"
#include "GameplayTagContainer.h"
#include "OWRPGGameplayTags.h"
#include "GameFramework/PlayerState.h"


void URPGInvHooks::Init(UWorld* InWorld)
{
	World = InWorld;
	if (!InWorld)
	{
		UE_LOG(LogRPGInv, Warning, TEXT("URPGInvHooks::Init: null World."));
		return;
	}

	// Bind to actor spawns (signature: void(AActor*))
	SpawnedHandle = InWorld->AddOnActorSpawnedHandler(
		FOnActorSpawned::FDelegate::CreateUObject(this, &URPGInvHooks::HandleActorSpawned)
	);

	ScanExistingPawns();

	UE_LOG(LogRPGInv, Log, TEXT("RPGInventory hooks initialized (World=%s)."), *InWorld->GetName());
}

void URPGInvHooks::Deinit()
{
	UWorld* W = World.Get();
	if (W && SpawnedHandle.IsValid())
	{
		W->RemoveOnActorSpawnedHandler(SpawnedHandle);
		SpawnedHandle.Reset();
	}

	World = nullptr;

	UE_LOG(LogRPGInv, Log, TEXT("RPGInventory hooks deinitialized."));
}

void URPGInvHooks::ScanExistingPawns()
{
	UWorld* W = World.Get();
	if (!W)
	{
		return;
	}

	for (TActorIterator<APawn> It(W); It; ++It)
	{
		BindPawn(*It);
	}
}

void URPGInvHooks::HandleActorSpawned(AActor* Actor)
{
	APawn* Pawn = Cast<APawn>(Actor);
	if (Pawn)
	{
		BindPawn(Pawn);
	}
}

void URPGInvHooks::BindPawn(APawn* Pawn)
{
	if (!Pawn)
	{
		return;
	}

	URPGPawnComp* Comp = Pawn->FindComponentByClass<URPGPawnComp>();
	if (!Comp)
	{
		return;
	}

	// Avoid double-binding.
	Comp->OnPawnReady.RemoveDynamic(this, &URPGInvHooks::HandlePawnReady);
	Comp->OnPawnReady.AddDynamic(this, &URPGInvHooks::HandlePawnReady);

	// If already ready, run once immediately.
	if (Comp->IsReady())
	{
		HandlePawnReady(Pawn);
	}
}

void URPGInvHooks::HandlePawnReady(APawn* Pawn)
{
	if (!Pawn)
	{
		return;
	}

	UWorld* W = World.Get();
	UE_LOG(LogRPGInv, Log, TEXT("RPGInventory: PawnReady -> %s (NetMode=%d)"),
		*Pawn->GetName(),
		W ? (int32)W->GetNetMode() : -1);

	// Only server owns authoritative inventory state
	if (!W || !Pawn->HasAuthority())
	{
		return;
	}

	APlayerState* PS = Pawn->GetPlayerState();
	if (!PS)
	{
		return;
	}

	URPGInvPlayerComp* Inv = PS->FindComponentByClass<URPGInvPlayerComp>();
	if (!Inv)
	{
		Inv = NewObject<URPGInvPlayerComp>(PS, TEXT("PlayerInv"));
		Inv->RegisterComponent();
	}

	PlayerInv = Inv;

	// Bind death event on ASC (from OWRPG pawn comp)
	URPGPawnComp* RPGComp = Pawn->FindComponentByClass<URPGPawnComp>();
	if (!RPGComp)
	{
		return;
	}

	UAbilitySystemComponent* InASC = RPGComp->GetASC();
	if (!InASC)
	{
		return;
	}

	ASC = InASC;

	// GAS event callback (server)
	ASC->GenericGameplayEventCallbacks.FindOrAdd(OWRPGGameplayTags::Event_Death())
		.AddUObject(this, &URPGInvHooks::HandleDeathEvent);


	UE_LOG(LogRPGInv, Log, TEXT("RPGInventory bound death event for %s"), *Pawn->GetName());
}

void URPGInvHooks::HandleDeathEvent(const FGameplayEventData* Payload)
{
	UWorld* W = World.Get();
	URPGInvPlayerComp* Inv = PlayerInv.Get();

	if (!W || !Inv)
	{
		return;
	}

	// Server only: authoritative drop + transfer
	AActor* InvOwner = Inv->GetOwner();
	if (!InvOwner || !InvOwner->HasAuthority())
	{
		return;
	}

	// Choose drop location (prefer payload target if provided)
	FVector Loc = InvOwner->GetActorLocation();

	const AActor* TargetActor = Payload ? Payload->Target.Get() : nullptr;
	if (TargetActor)
	{
		Loc = TargetActor->GetActorLocation();
	}

	FActorSpawnParameters SP;
	SP.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	ARPGInvDrop* Drop = W->SpawnActor<ARPGInvDrop>(ARPGInvDrop::StaticClass(), Loc, FRotator::ZeroRotator, SP);
	if (!Drop || !Drop->GetInv())
	{
		return;
	}

	// Move everything into the drop container
	Inv->ServerMoveAllTo(Drop->GetInv());

	UE_LOG(LogRPGInv, Log, TEXT("RPGInventory dropped all items at %s"), *Loc.ToString());
}

