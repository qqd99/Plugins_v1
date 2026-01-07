// Copyright Legion. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFeatureAction.h"
#include "UObject/SoftObjectPtr.h"
#include "GameplayAbilitySpec.h"  
#include "GameFramework/Pawn.h" 

#include "GFA_GrantAbilities.generated.h"

class UGameplayAbility;
class UAbilitySystemComponent;
class APawn;
class UWorld;

USTRUCT(BlueprintType)
struct FOWRPGGrantAbilityEntry
{
	GENERATED_BODY()

	// Ability class to grant (soft so we don't hard-reference from outside OWRPG)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftClassPtr<UGameplayAbility> Ability;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Level = 1;
};

UCLASS(MinimalAPI, meta = (DisplayName = "GFA_GrantAbilities"))
class UGFA_GrantAbilities : public UGameFeatureAction
{
	GENERATED_BODY()

public:
	virtual void OnGameFeatureActivating(FGameFeatureActivatingContext& Context) override;
	virtual void OnGameFeatureDeactivating(FGameFeatureDeactivatingContext& Context) override;

protected:
	// Abilities granted to pawns (server authoritative)
	UPROPERTY(EditAnywhere, Category = "Grant")
	TArray<FOWRPGGrantAbilityEntry> Abilities;

	// If true, only grant to pawns that have your URPGPawnComp (recommended).
	UPROPERTY(EditAnywhere, Category = "Grant")
	bool bRequireRPGPawnComp = true;

private:
	void HandlePostWorldInit(UWorld* World, const UWorld::InitializationValues IVS);
	void EnsureHookForWorld(UWorld* World);

	void HandleActorSpawned(AActor* Actor);
	void TryBindPawn(APawn* Pawn);

	UFUNCTION()
	void HandlePawnReady(APawn* Pawn);

	void GrantToASC(APawn* Pawn, UAbilitySystemComponent* ASC);

	void RemoveGranted();

private:
	FDelegateHandle PostWorldInitHandle;

	// We only store world pointers to remove spawn handlers on deactivate
	TMap<TWeakObjectPtr<UWorld>, FDelegateHandle> WorldSpawnHandles;

	// Track granted handles so disabling OWRPG won't crash/leak abilities
	TMap<TWeakObjectPtr<UAbilitySystemComponent>, TArray<struct FGameplayAbilitySpecHandle>> Granted;
};
