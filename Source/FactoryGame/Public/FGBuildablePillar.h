// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FactoryGame.h"
#include "CoreMinimal.h"
#include "Buildables/FGBuildableFactoryBuilding.h"
#include "FGBuildablePillar.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYGAME_API AFGBuildablePillar : public AFGBuildableFactoryBuilding
{
	GENERATED_BODY()
public:
	AFGBuildablePillar();

	const FVector& GetSize() const { return mSize; }

	bool IsSupport() const { return mIsSupport; }

	// Begin IFGSaveInterface
	virtual void PostLoadGame_Implementation( int32 saveVersion, int32 gameVersion ) override;
	// End IFSaveInterface
	
protected:
	UPROPERTY( EditDefaultsOnly, Category = "Pillar" )
	FVector mSize;

	UPROPERTY( EditDefaultsOnly, Category = "Pillar" )
	bool mIsSupport;

	UPROPERTY( EditDefaultsOnly, Category = "Pillar|legacy" )
	TSubclassOf< class UFGFactoryCustomizationDescriptor_Swatch > mLegacySwatch;
};
