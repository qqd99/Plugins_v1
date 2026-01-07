// Copyright Legion. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OWRPGDeveloperSettings.generated.h"

/**
 * OWRPG settings (soft references only).
 * This avoids any hard coupling to a specific project module and supports "copy plugin to new project" workflows.
 */
UCLASS(Config = Game, DefaultConfig, meta = (DisplayName = "OWRPG"))
class OWRPGRUNTIME_API UOWRPGDeveloperSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	/** Soft reference to the core GameFeatureData asset (e.g., /OWRPG/GFD_OWRPG.GFD_OWRPG). */
	UPROPERTY(Config, EditAnywhere, Category = "Core", meta = (AllowedClasses = "/Script/GameFeatures.GameFeatureData"))
	FSoftObjectPath CoreGameFeatureData;

	/** Soft reference to the core action set, if you use Lyra Experience Action Sets. */
	UPROPERTY(Config, EditAnywhere, Category = "Core")
	FSoftObjectPath CoreActionSet;
};
