// Copyright Legion. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Inv/RPGInvComp.h"
#include "RPGInvPlayerComp.generated.h"

UCLASS(BlueprintType, ClassGroup = (RPG), meta = (BlueprintSpawnableComponent))
class RPGINVENTORYRUNTIME_API URPGInvPlayerComp : public URPGInvComp
{
	GENERATED_BODY()

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
