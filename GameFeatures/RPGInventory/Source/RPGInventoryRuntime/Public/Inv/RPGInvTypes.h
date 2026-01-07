// Copyright Legion. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "RPGInvTypes.generated.h"

/**
 * Minimal item key for v0.2.
 * Later we will replace/extend this with an Item Definition asset + fragments (Minecraft-like is still compatible).
 */
USTRUCT(BlueprintType)
struct FRPGInvItemKey
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Id;

	bool IsValid() const { return !Id.IsNone(); }
};

USTRUCT(BlueprintType)
struct FRPGInvItem : public FFastArraySerializerItem
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRPGInvItemKey Key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Qty = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Slot = INDEX_NONE; // 0..(W*H-1)
};

USTRUCT()
struct FRPGInvList : public FFastArraySerializer
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<FRPGInvItem> Items;

	// Optional: owner component pointer for callbacks later
	UPROPERTY(NotReplicated)
	TObjectPtr<class URPGInvComp> Owner = nullptr;

	bool NetDeltaSerialize(FNetDeltaSerializeInfo& Params)
	{
		return FFastArraySerializer::FastArrayDeltaSerialize<FRPGInvItem, FRPGInvList>(Items, Params, *this);
	}
};

template<>
struct TStructOpsTypeTraits<FRPGInvList> : public TStructOpsTypeTraitsBase2<FRPGInvList>
{
	enum { WithNetDeltaSerializer = true };
};
