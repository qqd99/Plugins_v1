// Copyright Legion. All Rights Reserved.

#include "OWRPGGameplayTags.h"
#include "NativeGameplayTags.h"

namespace
{
	// Define native tags ONLY in this .cpp so no other module links against the variables directly.
	UE_DEFINE_GAMEPLAY_TAG(TAG_OWRPG_Root, "OWRPG");

	UE_DEFINE_GAMEPLAY_TAG(TAG_OWRPG_Feature_Inventory, "OWRPG.Feature.Inventory");
	UE_DEFINE_GAMEPLAY_TAG(TAG_OWRPG_Feature_Quests, "OWRPG.Feature.Quests");

	UE_DEFINE_GAMEPLAY_TAG(TAG_OWRPG_Event_Initialized, "OWRPG.Event.Initialized");
	UE_DEFINE_GAMEPLAY_TAG(TAG_OWRPG_Event_Death, "OWRPG.Event.Death");
}

namespace OWRPGGameplayTags
{
	FGameplayTag Root() { return TAG_OWRPG_Root; }
	FGameplayTag Feature_Inventory() { return TAG_OWRPG_Feature_Inventory; }
	FGameplayTag Feature_Quests() { return TAG_OWRPG_Feature_Quests; }
	FGameplayTag Event_Initialized() { return TAG_OWRPG_Event_Initialized; }
	FGameplayTag Event_Death() { return TAG_OWRPG_Event_Death; }
}
