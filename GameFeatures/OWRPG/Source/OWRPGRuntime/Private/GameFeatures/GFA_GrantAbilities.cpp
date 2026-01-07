// Copyright Legion. All Rights Reserved.

#include "GameFeatures/GFA_GrantAbilities.h"

#include "Engine/Engine.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "GameFramework/Pawn.h"

#include "AbilitySystemComponent.h"
#include "GameplayAbilitySpec.h"

#include "OWRPGLogChannels.h"

// Your existing "ASC ready" seam:
#include "Components/RPGPawnComp.h"

void UGFA_GrantAbilities::OnGameFeatureActivating(FGameFeatureActivatingContext& Context)
{
	Super::OnGameFeatureActivating(Context);

	// Existing worlds
	if (GEngine)
	{
		for (const FWorldContext& WC : GEngine->GetWorldContexts())
		{
			EnsureHookForWorld(WC.World());
		}
	}

	// Future worlds
	if (!PostWorldInitHandle.IsValid())
	{
		PostWorldInitHandle = FWorldDelegates::OnPostWorldInitialization.AddUObject(
			this, &UGFA_GrantAbilities::HandlePostWorldInit);
	}
}

void UGFA_GrantAbilities::OnGameFeatureDeactivating(FGameFeatureDeactivatingContext& Context)
{
	// Remove world init delegate
	if (PostWorldInitHandle.IsValid())
	{
		FWorldDelegates::OnPostWorldInitialization.Remove(PostWorldInitHandle);
		PostWorldInitHandle.Reset();
	}

	// Remove spawn handlers
	for (auto& KVP : WorldSpawnHandles)
	{
		if (UWorld* W = KVP.Key.Get())
		{
			W->RemoveOnActorSpawnedHandler(KVP.Value);
		}
	}
	WorldSpawnHandles.Empty();

	// Remove granted abilities (server-side safe cleanup)
	RemoveGranted();

	Super::OnGameFeatureDeactivating(Context);
}

void UGFA_GrantAbilities::HandlePostWorldInit(UWorld* World, const UWorld::InitializationValues IVS)
{
	EnsureHookForWorld(World);
}

void UGFA_GrantAbilities::EnsureHookForWorld(UWorld* World)
{
	if (!World || !World->IsGameWorld())
	{
		return;
	}

	if (WorldSpawnHandles.Contains(World))
	{
		return;
	}

	// Hook future spawns
	FDelegateHandle H = World->AddOnActorSpawnedHandler(
		FOnActorSpawned::FDelegate::CreateUObject(this, &UGFA_GrantAbilities::HandleActorSpawned));
	WorldSpawnHandles.Add(World, H);

	// Handle existing pawns
	for (TActorIterator<APawn> It(World); It; ++It)
	{
		TryBindPawn(*It);
	}
}

void UGFA_GrantAbilities::HandleActorSpawned(AActor* Actor)
{
	if (APawn* Pawn = Cast<APawn>(Actor))
	{
		TryBindPawn(Pawn);
	}
}

void UGFA_GrantAbilities::TryBindPawn(APawn* Pawn)
{
	if (!Pawn)
	{
		return;
	}

	// Optional filter to prevent binding to irrelevant pawns
	URPGPawnComp* PawnComp = Pawn->FindComponentByClass<URPGPawnComp>();
	if (bRequireRPGPawnComp && !PawnComp)
	{
		return;
	}

	if (!PawnComp)
	{
		// If not required, but missing, we cannot know ASC readiness; skip.
		return;
	}

	// Bind to your existing ready delegate; safe even if bound multiple times in PIE.
	PawnComp->OnPawnReady.AddUniqueDynamic(this, &UGFA_GrantAbilities::HandlePawnReady);

	// Fast path: if ready already, grant now.
	if (PawnComp->IsReady())
	{
		HandlePawnReady(Pawn);
	}
}

void UGFA_GrantAbilities::HandlePawnReady(APawn* Pawn)
{
	if (!Pawn || !Pawn->HasAuthority())
	{
		return;
	}

	URPGPawnComp* PawnComp = Pawn->FindComponentByClass<URPGPawnComp>();
	if (!PawnComp || !PawnComp->IsReady())
	{
		return;
	}

	UAbilitySystemComponent* ASC = PawnComp->GetASC();
	if (!ASC)
	{
		return;
	}

	GrantToASC(Pawn, ASC);
}

void UGFA_GrantAbilities::GrantToASC(APawn* Pawn, UAbilitySystemComponent* ASC)
{
	if (!ASC || Abilities.Num() == 0)
	{
		return;
	}

	// Authority only
	if (!Pawn || !Pawn->HasAuthority())
	{
		return;
	}

	TArray<FGameplayAbilitySpecHandle>& Handles = Granted.FindOrAdd(ASC);

	for (const FOWRPGGrantAbilityEntry& Entry : Abilities)
	{
		UClass* AbilityClass = Entry.Ability.LoadSynchronous();
		if (!AbilityClass)
		{
			UE_LOG(LogOWRPG, Warning, TEXT("GFA_GrantAbilities: Failed to load ability class."));
			continue;
		}

		// Avoid duplicates
		if (ASC->FindAbilitySpecFromClass(AbilityClass) != nullptr)
		{
			continue;
		}

		FGameplayAbilitySpec Spec(AbilityClass, Entry.Level, INDEX_NONE, this);
		const FGameplayAbilitySpecHandle Handle = ASC->GiveAbility(Spec);
		Handles.Add(Handle);

		UE_LOG(LogOWRPG, Log, TEXT("GFA_GrantAbilities: Granted %s to %s"),
			*AbilityClass->GetName(), *Pawn->GetName());
	}
}

void UGFA_GrantAbilities::RemoveGranted()
{
	for (auto& Pair : Granted)
	{
		UAbilitySystemComponent* ASC = Pair.Key.Get();
		if (!ASC)
		{
			continue;
		}

		// Only the server should clear abilities
		const AActor* OwnerActor = ASC->GetOwner();
		if (!OwnerActor || !OwnerActor->HasAuthority())
		{
			continue;
		}

		for (const FGameplayAbilitySpecHandle& H : Pair.Value)
		{
			if (H.IsValid())
			{
				ASC->ClearAbility(H);
			}
		}
	}

	Granted.Empty();
}
