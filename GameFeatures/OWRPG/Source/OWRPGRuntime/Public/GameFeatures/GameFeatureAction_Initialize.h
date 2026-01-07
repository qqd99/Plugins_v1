// Copyright Legion. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFeatureAction.h"
#include "GameFeatureAction_Initialize.generated.h"

class URPGFeatureMgr;
class UGameInstance;
class UWorld;

UCLASS(MinimalAPI, meta = (DisplayName = "OWRPG: Init Core"))
class UGameFeatureAction_Initialize : public UGameFeatureAction
{
	GENERATED_BODY()

public:
	virtual void OnGameFeatureActivating(FGameFeatureActivatingContext& Context) override;
	virtual void OnGameFeatureDeactivating(FGameFeatureDeactivatingContext& Context) override;

private:
	void TryInitForWorld(UWorld* World);
	void HandlePostWorldInit(UWorld* World, const UWorld::InitializationValues IVS);

private:
	// One manager per GameInstance (PIE-safe enough for now).
	static TMap<TWeakObjectPtr<UGameInstance>, TObjectPtr<URPGFeatureMgr>> Mgrs;

	FDelegateHandle PostWorldInitHandle;
};
