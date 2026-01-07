// Copyright Legion. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Features/OWRPGFeature.h"

class URPGInvHooks;

/**
 * Modular feature provider for Inventory.
 * NOTE: Not a UObject. Lifetime is controlled by the Game Feature Action (register/unregister).
 */
class FRPGInvFeature final : public IOWRPGFeature
{
public:
	virtual FName GetFeatureName() const override { return FName(TEXT("Inventory")); }

	virtual void InitializeFeature(UObject* WorldContextObject) override;
	virtual void DeinitializeFeature(UObject* WorldContextObject) override;

private:
	// UObject helper that binds to dynamic delegates safely.
	TWeakObjectPtr<URPGInvHooks> Hooks;
};
