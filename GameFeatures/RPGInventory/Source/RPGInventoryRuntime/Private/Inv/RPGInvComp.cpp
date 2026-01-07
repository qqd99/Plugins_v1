// Copyright Legion. All Rights Reserved.

#include "Inv/RPGInvComp.h"
#include "Net/UnrealNetwork.h"
#include "RPGInvLog.h"

URPGInvComp::URPGInvComp()
{
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicatedByDefault(true);
}

void URPGInvComp::BeginPlay()
{
	Super::BeginPlay();
	List.Owner = this;
}

bool URPGInvComp::HasServerAuth() const
{
	const AActor* OwnerActor = GetOwner();
	return OwnerActor && OwnerActor->HasAuthority();
}

int32 URPGInvComp::FindFirstFreeSlot() const
{
	const int32 Slots = GetSlotCount();
	TBitArray<> Used(false, Slots);

	for (const FRPGInvItem& It : List.Items)
	{
		if (It.Slot >= 0 && It.Slot < Slots)
		{
			Used[It.Slot] = true;
		}
	}

	for (int32 i = 0; i < Slots; ++i)
	{
		if (!Used[i])
		{
			return i;
		}
	}
	return INDEX_NONE;
}

void URPGInvComp::MarkDirty(FRPGInvItem& Item)
{
	List.MarkItemDirty(Item);
}

void URPGInvComp::MarkArrayDirty()
{
	List.MarkArrayDirty();
}

bool URPGInvComp::ServerAddItem(const FRPGInvItemKey& Key, int32 Qty)
{
	if (!HasServerAuth() || !Key.IsValid() || Qty <= 0)
	{
		return false;
	}

	const int32 Slot = FindFirstFreeSlot();
	if (Slot == INDEX_NONE)
	{
		UE_LOG(LogRPGInv, Warning, TEXT("ServerAddItem failed: no free slot."));
		return false;
	}

	FRPGInvItem& NewItem = List.Items.AddDefaulted_GetRef();
	NewItem.Key = Key;
	NewItem.Qty = Qty;
	NewItem.Slot = Slot;
	MarkDirty(NewItem);

	return true;
}

bool URPGInvComp::ServerRemoveAll()
{
	if (!HasServerAuth())
	{
		return false;
	}

	if (List.Items.Num() == 0)
	{
		return true;
	}

	List.Items.Reset();
	MarkArrayDirty();
	return true;
}

bool URPGInvComp::ServerMoveAllTo(URPGInvComp* Other)
{
	if (!Other || Other == this)
	{
		return false;
	}
	if (!HasServerAuth() || !Other->HasServerAuth())
	{
		return false;
	}

	// Move items one by one (v0.2). Later we will support stacking and size rules.
	for (const FRPGInvItem& It : List.Items)
	{
		Other->ServerAddItem(It.Key, It.Qty);
	}

	ServerRemoveAll();
	return true;
}

bool URPGInvComp::ServerSort()
{
	if (!HasServerAuth())
	{
		return false;
	}

	List.Items.Sort([](const FRPGInvItem& A, const FRPGInvItem& B)
		{
			if (A.Key.Id != B.Key.Id)
			{
				return A.Key.Id.LexicalLess(B.Key.Id);
			}
			return A.Qty > B.Qty;
		});

	// Re-pack slots after sort
	for (int32 i = 0; i < List.Items.Num(); ++i)
	{
		List.Items[i].Slot = i; // simple: fill from 0..N-1
		MarkDirty(List.Items[i]);
	}

	MarkArrayDirty();
	return true;
}


void URPGInvComp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Base class does not replicate List directly; derived classes apply conditions:
	// - Player inventory: COND_OwnerOnly
	// - Chest/drop: default replication
}