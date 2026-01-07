// Copyright Legion. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RPGInvHooks.generated.h"

class AActor;
class APawn;
class UWorld;
class UAbilitySystemComponent;
struct FGameplayTag;
struct FGameplayEventData;
class URPGInvPlayerComp;


/**
 * Hooks object that binds to OWRPG pawn component events.
 * Lives in the GameInstance as Outer (created by FRPGInvFeature).
 */
UCLASS()
class RPGINVENTORYRUNTIME_API URPGInvHooks : public UObject
{
	GENERATED_BODY()

public:
	void Init(UWorld* InWorld);
	void Deinit();

private:
	void ScanExistingPawns();

	// Signature must match FOnActorSpawned: void(AActor*)
	void HandleActorSpawned(AActor* Actor);

	void BindPawn(APawn* Pawn);

	UFUNCTION()
	void HandlePawnReady(APawn* Pawn);

	void HandleDeathEvent(const FGameplayEventData* Payload);

	TWeakObjectPtr<UAbilitySystemComponent> ASC;
	TWeakObjectPtr<URPGInvPlayerComp> PlayerInv;

private:
	UPROPERTY(Transient)
	TWeakObjectPtr<UWorld> World;

	FDelegateHandle SpawnedHandle;
};
