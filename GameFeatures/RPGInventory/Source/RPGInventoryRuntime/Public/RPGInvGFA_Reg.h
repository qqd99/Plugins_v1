// Copyright Legion. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFeatureAction.h"
#include "RPGInvGFA_Reg.generated.h"

/**
 * Registers the Inventory modular feature provider while this Game Feature is active.
 */
UCLASS(MinimalAPI, meta = (DisplayName = "RPGInventory: Register"))
class URPGInvGFA_Reg : public UGameFeatureAction
{
	GENERATED_BODY()

public:
	virtual void OnGameFeatureActivating(FGameFeatureActivatingContext& Context) override;
	virtual void OnGameFeatureDeactivating(FGameFeatureDeactivatingContext& Context) override;
};
