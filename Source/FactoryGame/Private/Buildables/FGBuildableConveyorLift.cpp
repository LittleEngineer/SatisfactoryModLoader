// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableConveyorLift.h"

AFGBuildableConveyorLift::AFGBuildableConveyorLift(){ }
void AFGBuildableConveyorLift::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildableConveyorLift::BeginPlay(){ }
int32 AFGBuildableConveyorLift::GetDismantleRefundReturnsMultiplier() const{ return int32(); }
void AFGBuildableConveyorLift::Upgrade_Implementation(AActor* newActor){ }
void AFGBuildableConveyorLift::TickItemTransforms(float dt){ }
FBoxCenterAndExtent AFGBuildableConveyorLift::FitClearance(float transformZ,
		float stepHeight,
		const FVector2D& extend2D,
		const FVector& extentBias){ return FBoxCenterAndExtent(); }
void AFGBuildableConveyorLift::OnRep_TopTransform(){ }
const FVector2D AFGBuildableConveyorLift::CLEARANCE_EXTENT_2D = FVector2D();
