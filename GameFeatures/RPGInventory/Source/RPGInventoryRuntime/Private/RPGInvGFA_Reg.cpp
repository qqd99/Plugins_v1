// Copyright Legion. All Rights Reserved.

#include "RPGInvGFA_Reg.h"
#include "RPGInvFeature.h"

#include "Features/IModularFeatures.h"
#include "RPGInvLog.h"
#include <atomic>

namespace RPGInvReg
{
	// Refcount handles multiple activations in-editor (PIE, multi-world).
	static std::atomic<int32> RefCount{ 0 };
	static TUniquePtr<FRPGInvFeature> Provider;
}

void URPGInvGFA_Reg::OnGameFeatureActivating(FGameFeatureActivatingContext& Context)
{
	Super::OnGameFeatureActivating(Context);

	const int32 NewCount = ++RPGInvReg::RefCount;
	if (NewCount == 1)
	{
		RPGInvReg::Provider = MakeUnique<FRPGInvFeature>();
		IModularFeatures::Get().RegisterModularFeature(IOWRPGFeature::GetModularFeatureName(), RPGInvReg::Provider.Get());
		UE_LOG(LogRPGInv, Log, TEXT("RPGInventory registered modular feature provider."));
	}
}

void URPGInvGFA_Reg::OnGameFeatureDeactivating(FGameFeatureDeactivatingContext& Context)
{
	const int32 NewCount = --RPGInvReg::RefCount;
	if (NewCount == 0)
	{
		if (RPGInvReg::Provider)
		{
			IModularFeatures::Get().UnregisterModularFeature(IOWRPGFeature::GetModularFeatureName(), RPGInvReg::Provider.Get());
			RPGInvReg::Provider.Reset();
			UE_LOG(LogRPGInv, Log, TEXT("RPGInventory unregistered modular feature provider."));
		}
	}

	Super::OnGameFeatureDeactivating(Context);
}
