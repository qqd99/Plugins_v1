// Copyright Legion. All Rights Reserved.

#include "Subsystems/OWRPGWorldSubsystem.h"
#include "OWRPGLogChannels.h"
#include "Engine/World.h"

void UOWRPGWorldSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UWorld* World = GetWorld();
	UE_LOG(LogOWRPG, Log, TEXT("UOWRPGWorldSubsystem Initialize (World=%s, NetMode=%d)."),
		World ? *World->GetName() : TEXT("null"),
		World ? (int32)World->GetNetMode() : -1);
}

void UOWRPGWorldSubsystem::Deinitialize()
{
	UE_LOG(LogOWRPG, Log, TEXT("UOWRPGWorldSubsystem Deinitialize."));
	Super::Deinitialize();
}
