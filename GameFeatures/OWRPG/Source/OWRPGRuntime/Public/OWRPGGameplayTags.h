// Copyright Legion. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

namespace OWRPGGameplayTags
{
	// Core
	OWRPGRUNTIME_API FGameplayTag Root();

	// Feature flags
	OWRPGRUNTIME_API FGameplayTag Feature_Inventory();
	OWRPGRUNTIME_API FGameplayTag Feature_Quests();

	// Events
	OWRPGRUNTIME_API FGameplayTag Event_Initialized();
	OWRPGRUNTIME_API FGameplayTag Event_Death();
}
