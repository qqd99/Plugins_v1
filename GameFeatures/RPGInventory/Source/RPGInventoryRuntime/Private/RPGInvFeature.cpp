// Copyright Legion. All Rights Reserved.

#include "RPGInvFeature.h"
#include "RPGInvHooks.h"

#include "RPGInvLog.h"

#include "Engine/GameInstance.h"
#include "Engine/World.h"

void FRPGInvFeature::InitializeFeature(UObject* WorldContextObject)
{
	UGameInstance* GI = Cast<UGameInstance>(WorldContextObject);
	if (!GI)
	{
		UE_LOG(LogRPGInv, Warning, TEXT("RPGInventory InitializeFeature: WorldContextObject is not a GameInstance."));
		return;
	}

	UWorld* World = GI->GetWorld();
	if (!World)
	{
		UE_LOG(LogRPGInv, Warning, TEXT("RPGInventory InitializeFeature: no World on GameInstance."));
		return;
	}

	URPGInvHooks* NewHooks = NewObject<URPGInvHooks>(GI);
	NewHooks->Init(World);
	Hooks = NewHooks;

	UE_LOG(LogRPGInv, Log, TEXT("RPGInventory feature initialized (World=%s)."), *World->GetName());
}

void FRPGInvFeature::DeinitializeFeature(UObject* WorldContextObject)
{
	URPGInvHooks* H = Hooks.Get();
	if (H)
	{
		H->Deinit();
	}

	Hooks = nullptr;

	UE_LOG(LogRPGInv, Log, TEXT("RPGInventory feature deinitialized."));
}
