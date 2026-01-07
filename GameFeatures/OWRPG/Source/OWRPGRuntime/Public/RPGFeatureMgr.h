// Copyright Legion. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RPGFeatureMgr.generated.h"

class UGameInstance;
class IModularFeature;

/**
 * World/GameInstance-scoped manager that initializes optional OWRPG feature providers
 * registered via IModularFeatures under IOWRPGFeature::GetModularFeatureName().
 */
UCLASS()
class OWRPGRUNTIME_API URPGFeatureMgr : public UObject
{
	GENERATED_BODY()

public:
	void Init(UGameInstance* InGI);
	void Deinit();

private:
	void InitAllProviders();
	void DeinitAllProviders();

	void HandleReg(const FName& Type, IModularFeature* Feature);
	void HandleUnreg(const FName& Type, IModularFeature* Feature);

	UPROPERTY(Transient)
	TWeakObjectPtr<UGameInstance> GI;

	bool bProvidersInit = false;
};
