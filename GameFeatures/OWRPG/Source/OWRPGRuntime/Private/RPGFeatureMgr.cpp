// Copyright Legion. All Rights Reserved.

#include "RPGFeatureMgr.h"

#include "Features/IModularFeatures.h"
#include "Features/OWRPGFeature.h"
#include "OWRPGLogChannels.h"
#include "Engine/GameInstance.h"

void URPGFeatureMgr::Init(UGameInstance* InGI)
{
	GI = InGI;
	if (!GI.IsValid())
	{
		UE_LOG(LogOWRPG, Warning, TEXT("RPGFeatureMgr::Init: null GI"));
		return;
	}

	IModularFeatures& MF = IModularFeatures::Get();
	MF.OnModularFeatureRegistered().AddUObject(this, &URPGFeatureMgr::HandleReg);
	MF.OnModularFeatureUnregistered().AddUObject(this, &URPGFeatureMgr::HandleUnreg);

	InitAllProviders();

	UE_LOG(LogOWRPG, Log, TEXT("RPGFeatureMgr initialized."));
}

void URPGFeatureMgr::Deinit()
{
	DeinitAllProviders();

	IModularFeatures& MF = IModularFeatures::Get();
	MF.OnModularFeatureRegistered().RemoveAll(this);
	MF.OnModularFeatureUnregistered().RemoveAll(this);

	GI = nullptr;

	UE_LOG(LogOWRPG, Log, TEXT("RPGFeatureMgr deinitialized."));
}

void URPGFeatureMgr::InitAllProviders()
{
	if (bProvidersInit)
	{
		return;
	}
	bProvidersInit = true;

	UGameInstance* WorldCtx = GI.Get();
	if (!WorldCtx)
	{
		return;
	}

	const TArray<IOWRPGFeature*> Providers =
		IModularFeatures::Get().GetModularFeatureImplementations<IOWRPGFeature>(IOWRPGFeature::GetModularFeatureName());

	for (IOWRPGFeature* P : Providers)
	{
		if (P)
		{
			UE_LOG(LogOWRPG, Log, TEXT("Init provider: %s"), *P->GetFeatureName().ToString());
			P->InitializeFeature(WorldCtx);
		}
	}
}

void URPGFeatureMgr::DeinitAllProviders()
{
	if (!bProvidersInit)
	{
		return;
	}
	bProvidersInit = false;

	UGameInstance* WorldCtx = GI.Get();
	if (!WorldCtx)
	{
		return;
	}

	const TArray<IOWRPGFeature*> Providers =
		IModularFeatures::Get().GetModularFeatureImplementations<IOWRPGFeature>(IOWRPGFeature::GetModularFeatureName());

	for (IOWRPGFeature* P : Providers)
	{
		if (P)
		{
			UE_LOG(LogOWRPG, Log, TEXT("Deinit provider: %s"), *P->GetFeatureName().ToString());
			P->DeinitializeFeature(WorldCtx);
		}
	}
}

void URPGFeatureMgr::HandleReg(const FName& Type, IModularFeature* Feature)
{
	if (Type != IOWRPGFeature::GetModularFeatureName() || !bProvidersInit || !GI.IsValid() || !Feature)
	{
		return;
	}

	if (IOWRPGFeature* P = static_cast<IOWRPGFeature*>(Feature))
	{
		UE_LOG(LogOWRPG, Log, TEXT("Provider registered: %s"), *P->GetFeatureName().ToString());
		P->InitializeFeature(GI.Get());
	}
}

void URPGFeatureMgr::HandleUnreg(const FName& Type, IModularFeature* Feature)
{
	if (Type != IOWRPGFeature::GetModularFeatureName() || !bProvidersInit || !GI.IsValid() || !Feature)
	{
		return;
	}

	if (IOWRPGFeature* P = static_cast<IOWRPGFeature*>(Feature))
	{
		UE_LOG(LogOWRPG, Log, TEXT("Provider unregistered: %s"), *P->GetFeatureName().ToString());
		P->DeinitializeFeature(GI.Get());
	}
}
