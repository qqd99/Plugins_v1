// Copyright Legion. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Inv/RPGInvTypes.h"
#include "RPGInvComp.generated.h"

UCLASS(Abstract, BlueprintType)
class RPGINVENTORYRUNTIME_API URPGInvComp : public UActorComponent
{
	GENERATED_BODY()

public:
	URPGInvComp();

	UFUNCTION(BlueprintCallable, Category = "RPGInv")
	int32 GetWidth() const { return Width; }

	UFUNCTION(BlueprintCallable, Category = "RPGInv")
	int32 GetHeight() const { return Height; }

	UFUNCTION(BlueprintCallable, Category = "RPGInv")
	int32 GetSlotCount() const { return Width * Height; }

	UFUNCTION(BlueprintCallable, Category = "RPGInv")
	const TArray<FRPGInvItem>& GetItems() const { return List.Items; }

	// Server-authoritative API (v0.2). Clients do not mutate inventory directly.
	bool ServerAddItem(const FRPGInvItemKey& Key, int32 Qty);
	bool ServerRemoveAll();
	bool ServerMoveAllTo(URPGInvComp* Other);

	// Simple sort (server). Sort by Id then qty descending; stable and deterministic.
	bool ServerSort();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
	UPROPERTY(EditDefaultsOnly, Category = "RPGInv")
	int32 Width = 9;

	UPROPERTY(EditDefaultsOnly, Category = "RPGInv")
	int32 Height = 4;

	UPROPERTY(Replicated)
	FRPGInvList List;

	virtual void BeginPlay() override;

	bool HasServerAuth() const;

	// Helpers
	int32 FindFirstFreeSlot() const;
	void MarkDirty(FRPGInvItem& Item);
	void MarkArrayDirty();
};
