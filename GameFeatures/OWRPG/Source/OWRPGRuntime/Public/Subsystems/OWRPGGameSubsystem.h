// Copyright Legion. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OWRPGGameSubsystem.generated.h"

UCLASS()
class OWRPGRUNTIME_API UOWRPGGameSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

private:
	void InitializeAllRegisteredFeatures();
	void DeinitializeAllRegisteredFeatures();

	void HandleModularFeatureRegistered(const FName& Type, class IModularFeature* ModularFeature);
	void HandleModularFeatureUnregistered(const FName& Type, class IModularFeature* ModularFeature);

	bool bInitializedFeatures = false;
};
