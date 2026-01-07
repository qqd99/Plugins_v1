// Copyright Legion. All Rights Reserved.

#include "Actors/RPGInvDrop.h"
#include "Inv/RPGInvChestComp.h"
#include "Components/SceneComponent.h"

ARPGInvDrop::ARPGInvDrop()
{
	bReplicates = true;
	SetReplicateMovement(true);
	bAlwaysRelevant = true;   // temporary for early testing
	NetDormancy = DORM_Awake; // optional

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	// ActorComponent: no attachment required
	Inv = CreateDefaultSubobject<URPGInvChestComp>(TEXT("Inv"));
}
