// Copyright Legion. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Inv/RPGInvComp.h"
#include "RPGInvChestComp.generated.h"

UCLASS(BlueprintType, ClassGroup = (RPG), meta = (BlueprintSpawnableComponent))
class RPGINVENTORYRUNTIME_API URPGInvChestComp : public URPGInvComp
{
	GENERATED_BODY()

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
