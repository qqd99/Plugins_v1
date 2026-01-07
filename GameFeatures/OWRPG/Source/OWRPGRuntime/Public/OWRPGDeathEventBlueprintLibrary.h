// Copyright Legion. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "OWRPGDeathEventBlueprintLibrary.generated.h"

class AActor;

UCLASS()
class OWRPGRUNTIME_API UOWRPGDeathEventBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Emits OWRPG.Event.Death as a GAS gameplay event to DeadActor.
	 * Must be called on the server for authoritative gameplay.
	 */
	UFUNCTION(BlueprintCallable, Category = "OWRPG|Death")
	static bool SendDeathEvent(AActor* DeadActor, AActor* InstigatorActor);
};
