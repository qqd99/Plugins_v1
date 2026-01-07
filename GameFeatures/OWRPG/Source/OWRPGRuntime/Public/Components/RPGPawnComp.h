// Copyright Legion. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RPGPawnComp.generated.h"

class UAbilitySystemComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRPGPawnReadySig, APawn*, Pawn);

/**
 * Core pawn component attached by OWRPG Game Feature.
 * Multiplayer-safe: no local-player assumptions; works on dedicated server.
 *
 * Purpose:
 * - Provide a stable “pawn ready” signal once PlayerState + ASC are available.
 * - Give optional plugins a safe place to hook without OWRPG depending on them.
 */
UCLASS(ClassGroup = (RPG), meta = (BlueprintSpawnableComponent))
class OWRPGRUNTIME_API URPGPawnComp : public UActorComponent
{
	GENERATED_BODY()

public:
	URPGPawnComp();

	/** Fired once when the pawn is considered ready (may fire on server and clients). */
	UPROPERTY(BlueprintAssignable, Category = "RPG")
	FRPGPawnReadySig OnPawnReady;

	/** Returns true once readiness has been reached. */
	UFUNCTION(BlueprintCallable, Category = "RPG")
	bool IsReady() const { return bReady; }

	/** Best-effort access to ASC once ready (may still be null for non-GAS pawns). */
	UFUNCTION(BlueprintCallable, Category = "RPG")
	UAbilitySystemComponent* GetASC() const { return CachedASC.Get(); }

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
	void StartPolling();
	void StopPolling();
	void PollReady();

	bool CheckReady(APawn* Pawn, UAbilitySystemComponent*& OutASC) const;

	UPROPERTY(Transient)
	bool bReady = false;

	UPROPERTY(Transient)
	TWeakObjectPtr<UAbilitySystemComponent> CachedASC;

	FTimerHandle PollTimer;
};
