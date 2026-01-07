// Copyright Legion. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RPGInvDrop.generated.h"

class URPGInvChestComp;

UCLASS()
class RPGINVENTORYRUNTIME_API ARPGInvDrop : public AActor
{
	GENERATED_BODY()

public:
	ARPGInvDrop();

	UFUNCTION(BlueprintCallable, Category = "RPGInv")
	URPGInvChestComp* GetInv() const { return Inv; }

protected:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<URPGInvChestComp> Inv;
};
