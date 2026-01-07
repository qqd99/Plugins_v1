// Copyright Legion. All Rights Reserved.

#include "Components/RPGPawnComp.h"
#include "OWRPGLogChannels.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/PlayerState.h"
#include "TimerManager.h"
#include "Engine/World.h"

URPGPawnComp::URPGPawnComp()
{
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicatedByDefault(false); // orchestration only; replicate gameplay state elsewhere
}

void URPGPawnComp::BeginPlay()
{
	Super::BeginPlay();
	StartPolling();
}

void URPGPawnComp::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	StopPolling();
	Super::EndPlay(EndPlayReason);
}

void URPGPawnComp::StartPolling()
{
	if (!GetWorld())
	{
		return;
	}

	// Poll quickly at startup; readiness usually happens within a few frames as PlayerState/ASC replicate.
	GetWorld()->GetTimerManager().SetTimer(PollTimer, this, &URPGPawnComp::PollReady, 0.1f, true);
	PollReady();
}

void URPGPawnComp::StopPolling()
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(PollTimer);
	}
}

void URPGPawnComp::PollReady()
{
	if (bReady)
	{
		StopPolling();
		return;
	}

	APawn* Pawn = Cast<APawn>(GetOwner());
	if (!Pawn)
	{
		return;
	}

	UAbilitySystemComponent* ASC = nullptr;
	if (CheckReady(Pawn, ASC))
	{
		bReady = true;
		CachedASC = ASC;

		UE_LOG(LogOWRPG, Log, TEXT("RPGPawnComp Ready: Pawn=%s NetMode=%d ASC=%s"),
			*Pawn->GetName(),
			GetWorld() ? (int32)GetWorld()->GetNetMode() : -1,
			ASC ? *ASC->GetName() : TEXT("null"));

		OnPawnReady.Broadcast(Pawn);

		StopPolling();
	}
}

bool URPGPawnComp::CheckReady(APawn* Pawn, UAbilitySystemComponent*& OutASC) const
{
	OutASC = nullptr;

	// 1) If this pawn is player-controlled, wait for PlayerState.
	//    Dedicated server: PlayerState should exist quickly; clients may receive it later via replication.
	const AController* Controller = Pawn->GetController();
	const APlayerController* PC = Cast<APlayerController>(Controller);
	if (PC != nullptr)
	{
		if (Pawn->GetPlayerState() == nullptr)
		{
			return false;
		}
	}

	// 2) Wait for an AbilitySystemComponent if available (GAS-driven project).
	//    Use interface when possible; fall back to searching for component.
	if (Pawn->GetClass()->ImplementsInterface(UAbilitySystemInterface::StaticClass()))
	{
		const IAbilitySystemInterface* ASI = Cast<IAbilitySystemInterface>(Pawn);
		if (ASI)
		{
			OutASC = ASI->GetAbilitySystemComponent();
		}
	}

	if (!OutASC)
	{
		OutASC = Pawn->FindComponentByClass<UAbilitySystemComponent>();
	}

	// In a GAS-driven project, ASC presence is our final “ready” gate for player pawns.
	// If you later want non-GAS pawns to be considered ready, we can relax this rule.
	return (OutASC != nullptr);
}
