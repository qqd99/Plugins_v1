// Copyright Legion. All Rights Reserved.

#include "GameFeatures/GameFeatureAction_Initialize.h"

#include "RPGFeatureMgr.h"
#include "OWRPGLogChannels.h"
#include "OWRPGGameplayTags.h"

#include "Engine/Engine.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"

TMap<TWeakObjectPtr<UGameInstance>, TObjectPtr<URPGFeatureMgr>> UGameFeatureAction_Initialize::Mgrs;

void UGameFeatureAction_Initialize::OnGameFeatureActivating(FGameFeatureActivatingContext& Context)
{
	Super::OnGameFeatureActivating(Context);

	// Touch tags early (optional; also confirms native tags are present)
	UE_LOG(LogOWRPG, Log, TEXT("OWRPG activating. RootTag=%s"),
		*OWRPGGameplayTags::Root().ToString());


	// Init for any worlds that already exist (PIE often has one).
	if (GEngine)
	{
		for (const FWorldContext& WC : GEngine->GetWorldContexts())
		{
			TryInitForWorld(WC.World());
		}
	}

	// Also handle worlds created after activation.
	if (!PostWorldInitHandle.IsValid())
	{
		PostWorldInitHandle = FWorldDelegates::OnPostWorldInitialization.AddUObject(
			this, &UGameFeatureAction_Initialize::HandlePostWorldInit
		);
	}
}

void UGameFeatureAction_Initialize::OnGameFeatureDeactivating(FGameFeatureDeactivatingContext& Context)
{
	// Remove delegate
	if (PostWorldInitHandle.IsValid())
	{
		FWorldDelegates::OnPostWorldInitialization.Remove(PostWorldInitHandle);
		PostWorldInitHandle.Reset();
	}

	// Deinit all managers
	for (auto& KVP : Mgrs)
	{
		if (URPGFeatureMgr* Mgr = KVP.Value.Get())
		{
			Mgr->Deinit();
		}
	}
	Mgrs.Empty();

	UE_LOG(LogOWRPG, Log, TEXT("OWRPG deactivating."));

	Super::OnGameFeatureDeactivating(Context);
}

void UGameFeatureAction_Initialize::HandlePostWorldInit(UWorld* World, const UWorld::InitializationValues IVS)
{
	TryInitForWorld(World);
}

void UGameFeatureAction_Initialize::TryInitForWorld(UWorld* World)
{
	if (!World || !World->IsGameWorld())
	{
		return; // ignore Editor/Preview worlds
	}

	UGameInstance* GI = World->GetGameInstance();
	if (!GI)
	{
		return;
	}

	// Create once per GI
	if (!Mgrs.Contains(GI))
	{
		URPGFeatureMgr* Mgr = NewObject<URPGFeatureMgr>(GI);
		Mgr->Init(GI);
		Mgrs.Add(GI, Mgr);

		UE_LOG(LogOWRPG, Log, TEXT("OWRPG FeatureMgr created for GI (World=%s)."), *World->GetName());
	}
}
