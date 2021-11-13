// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGJumpPadLauncherHologram.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "FGInstancedSplineMeshComponent.h"

AFGJumpPadLauncherHologram::AFGJumpPadLauncherHologram() : Super() {
	this->mBuildStep = EJumpPadHologramBuildStep::JPHBS_PlacementAndRotation;
	this->mLaunchAngle = 45;
	this->mLauncherMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LauncherMeshComponent"));
	this->mSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
	this->mInstancedSplineMeshComponent = CreateDefaultSubobject<UFGInstancedSplineMeshComponent>(TEXT("InstancedSplineMeshComponent"));
	this->mTrajectoryMeshScale.X = 0.0;
	this->mTrajectoryMeshScale.Y = 0.0;
	this->mTrajectoryMeshScale.Z = 0.0;
	this->mDestinationMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DestinationMeshComponent"));
	this->mDestinationMeshHeightOffset = 400.0;
	this->mTrajectoryMeshSeparationDistance = 200.0;
	this->mDestinationMeshRotation.Pitch = 0.0;
	this->mDestinationMeshRotation.Yaw = 0.0;
	this->mDestinationMeshRotation.Roll = 0.0;
	this->mNumArrows = 5;
	this->mLauncherMeshComponent->SetupAttachment(RootComponent);
	this->mSplineComponent->SetupAttachment(RootComponent);
	this->mInstancedSplineMeshComponent->SetupAttachment(RootComponent);
	this->mDestinationMeshComponent->SetupAttachment(RootComponent);
}
void AFGJumpPadLauncherHologram::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGJumpPadLauncherHologram::BeginPlay(){ }
bool AFGJumpPadLauncherHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGJumpPadLauncherHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
void AFGJumpPadLauncherHologram::ScrollRotate(int32 delta, int32 step){ }
bool AFGJumpPadLauncherHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
bool AFGJumpPadLauncherHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
void AFGJumpPadLauncherHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
int32 AFGJumpPadLauncherHologram::GetRotationStep() const{ return int32(); }
void AFGJumpPadLauncherHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGJumpPadLauncherHologram::SimulateTrajectory(){ }
void AFGJumpPadLauncherHologram::OnRep_LaunchAngle(){ }
