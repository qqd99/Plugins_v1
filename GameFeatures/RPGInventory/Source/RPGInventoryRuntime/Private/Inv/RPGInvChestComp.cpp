// Copyright Legion. All Rights Reserved.

#include "Inv/RPGInvChestComp.h"
#include "Net/UnrealNetwork.h"

void URPGInvChestComp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Normal replication (relevancy will control who receives it).
	DOREPLIFETIME(URPGInvChestComp, List);
}
