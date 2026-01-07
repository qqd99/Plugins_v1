// Copyright Legion. All Rights Reserved.

#include "Inv/RPGInvPlayerComp.h"
#include "Net/UnrealNetwork.h"

void URPGInvPlayerComp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Owner-only: other players cannot see contents.
	DOREPLIFETIME_CONDITION(URPGInvPlayerComp, List, COND_OwnerOnly);
}
