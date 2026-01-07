// Copyright Legion. All Rights Reserved.

#include "OWRPGDeathEventBlueprintLibrary.h"

#include "OWRPGGameplayTags.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "GameFramework/Actor.h"

bool UOWRPGDeathEventBlueprintLibrary::SendDeathEvent(AActor* DeadActor, AActor* InstigatorActor)
{
	if (!DeadActor)
	{
		return false;
	}

	// Enforce server authority (death consequences should never be client-authoritative).
	if (!DeadActor->HasAuthority())
	{
		return false;
	}

	FGameplayEventData Data;
	Data.Instigator = InstigatorActor;
	Data.Target = DeadActor;

	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
		DeadActor,
		OWRPGGameplayTags::Event_Death(),
		Data);

	return true;
}
