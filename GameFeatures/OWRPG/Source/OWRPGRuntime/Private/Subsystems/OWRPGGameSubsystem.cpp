// Copyright Legion. All Rights Reserved.

#include "Subsystems/OWRPGGameSubsystem.h"
#include "OWRPGLogChannels.h"
#include "Features/OWRPGFeature.h"
#include "Features/IModularFeatures.h"


void UOWRPGGameSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UE_LOG(LogOWRPG, Log, TEXT("UOWRPGGameSubsystem Initialize (NetMode=%d)."), GetWorld() ? (int32)GetWorld()->GetNetMode() : -1);

	IModularFeatures& ModularFeatures = IModularFeatures::Get();
	ModularFeatures.OnModularFeatureRegistered().AddUObject(this, &UOWRPGGameSubsystem::HandleModularFeatureRegistered);
	ModularFeatures.OnModularFeatureUnregistered().AddUObject(this, &UOWRPGGameSubsystem::HandleModularFeatureUnregistered);

	InitializeAllRegisteredFeatures();
}

void UOWRPGGameSubsystem::Deinitialize()
{
	DeinitializeAllRegisteredFeatures();

	IModularFeatures& ModularFeatures = IModularFeatures::Get();
	ModularFeatures.OnModularFeatureRegistered().RemoveAll(this);
	ModularFeatures.OnModularFeatureUnregistered().RemoveAll(this);

	UE_LOG(LogOWRPG, Log, TEXT("UOWRPGGameSubsystem Deinitialize."));
	Super::Deinitialize();
}

void UOWRPGGameSubsystem::InitializeAllRegisteredFeatures()
{
	if (bInitializedFeatures)
	{
		return;
	}
	bInitializedFeatures = true;

	UObject* WorldContext = GetGameInstance();
	if (!WorldContext)
	{
		UE_LOG(LogOWRPG, Warning, TEXT("InitializeAllRegisteredFeatures: no GameInstance."));
		return;
	}

	IModularFeatures& ModularFeatures = IModularFeatures::Get();

	// UE 5.7: this is a template API; you must specify the feature interface type.
	const TArray<IOWRPGFeature*> Features =
		ModularFeatures.GetModularFeatureImplementations<IOWRPGFeature>(IOWRPGFeature::GetModularFeatureName());

	for (IOWRPGFeature* Feature : Features)
	{
		if (Feature)
		{
			UE_LOG(LogOWRPG, Log, TEXT("Initializing feature provider: %s"), *Feature->GetFeatureName().ToString());
			Feature->InitializeFeature(WorldContext);
		}
	}
}

void UOWRPGGameSubsystem::DeinitializeAllRegisteredFeatures()
{
	if (!bInitializedFeatures)
	{
		return;
	}
	bInitializedFeatures = false;

	UObject* WorldContext = GetGameInstance();
	if (!WorldContext)
	{
		return;
	}

	IModularFeatures& ModularFeatures = IModularFeatures::Get();

	const TArray<IOWRPGFeature*> Features =
		ModularFeatures.GetModularFeatureImplementations<IOWRPGFeature>(IOWRPGFeature::GetModularFeatureName());

	for (IOWRPGFeature* Feature : Features)
	{
		if (Feature)
		{
			UE_LOG(LogOWRPG, Log, TEXT("Deinitializing feature provider: %s"), *Feature->GetFeatureName().ToString());
			Feature->DeinitializeFeature(WorldContext);
		}
	}
}

void UOWRPGGameSubsystem::HandleModularFeatureRegistered(const FName& Type, IModularFeature* ModularFeature)
{
	if (Type != IOWRPGFeature::GetModularFeatureName())
	{
		return;
	}

	// If we are already initialized, initialize the newly-registered feature.
	if (bInitializedFeatures && ModularFeature)
	{
		if (IOWRPGFeature* OWRPGFeature = static_cast<IOWRPGFeature*>(ModularFeature))
		{
			UE_LOG(LogOWRPG, Log, TEXT("Feature registered at runtime: %s"), *OWRPGFeature->GetFeatureName().ToString());
			OWRPGFeature->InitializeFeature(GetGameInstance());
		}
	}
}

void UOWRPGGameSubsystem::HandleModularFeatureUnregistered(const FName& Type, IModularFeature* ModularFeature)
{
	if (Type != IOWRPGFeature::GetModularFeatureName())
	{
		return;
	}

	if (bInitializedFeatures && ModularFeature)
	{
		if (IOWRPGFeature* OWRPGFeature = static_cast<IOWRPGFeature*>(ModularFeature))
		{
			UE_LOG(LogOWRPG, Log, TEXT("Feature unregistered at runtime: %s"), *OWRPGFeature->GetFeatureName().ToString());
			OWRPGFeature->DeinitializeFeature(GetGameInstance());
		}
	}
}
