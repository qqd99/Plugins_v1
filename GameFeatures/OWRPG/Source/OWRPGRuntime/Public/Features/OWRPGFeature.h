// Copyright Legion. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Features/IModularFeature.h"

/**
 * Optional feature interface.
 * Implement in other plugins (e.g., OWRPG_Inventory) without OWRPG depending on them.
 *
 * Registration is handled via IModularFeatures under the feature name returned by GetModularFeatureName().
 */
class IOWRPGFeature : public IModularFeature
{
public:
	static FName GetModularFeatureName()
	{
		// All optional OWRPG feature providers should register under this name.
		static const FName Name(TEXT("OWRPGFeature"));
		return Name;
	}

	/** Human-readable feature identifier (e.g., Inventory, Quests). */
	virtual FName GetFeatureName() const = 0;

	/**
	 * Called when OWRPG core wants the feature to initialize for this runtime.
	 * Must be safe to call on server and clients; feature decides authority behavior internally.
	 */
	virtual void InitializeFeature(UObject* WorldContextObject) = 0;

	/**
	 * Called when OWRPG core is tearing down or feature is being deactivated.
	 */
	virtual void DeinitializeFeature(UObject* WorldContextObject) = 0;
};
