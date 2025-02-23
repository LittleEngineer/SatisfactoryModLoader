// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGConveyorItemSubSystem.h"
#include "Components/SceneComponent.h"

void FInstanceLODs::UpdateVisibility(int32 NumInstances){ }
void FInstanceLODs::AddBucketComponents(int32 Num, AActor* Outer){ }
void FInstanceLODs::AddInstance_Internal(AActor* Outer){ }
#if WITH_PIE_SUPPORT
#endif 
AFGConveyorItemSubsystem::AFGConveyorItemSubsystem() : Super() {
	this->mInitialPreAllocatedNumberOfItemTypes = 0;
	this->mInitialPreAllocatedNumberOfItemsInstances = 512;
	this->mItemInstanceIncrementSize = 32;
	this->mItemInstanceUpdateThreshold = 64;
	this->mItemTypeIncrementSize = 0;
	this->mLiftMesh = nullptr;
	this->mMaxParallelTasks = 10;
	this->mInstanceVertsSplit = 32768;
	this->mMinInstancesPerBucket = 16;
	this->mMaxInstancesPerBucket = 128;
	this->mNumberOfChecksBeforeUsingCachedData = 0;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_LastDemotable;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = false;
	this->PrimaryActorTick.TickInterval = 0.0166667;
	this->SetHidden(false);
	this->bAllowTickBeforeBeginPlay = false;
	this->bReplicates = false;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}
AFGConveyorItemSubsystem* AFGConveyorItemSubsystem::Get(UWorld* world){ return nullptr; }
void AFGConveyorItemSubsystem::Tick(float DeltaSeconds){ }
void AFGConveyorItemSubsystem::BeginPlay(){ }
void AFGConveyorItemSubsystem::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGConveyorItemSubsystem::ResolveNewTypes(){ }
void AFGConveyorItemSubsystem::GatherTransformData(const TArray<bool> DistancesToUpdate, FConveyorActorContainer< AFGBuildableConveyorBelt* >* Belt, FConveyorActorContainer< AFGBuildableConveyorLift* >* Lifts){ }
void AFGConveyorItemSubsystem::GatherTransformData_ISPC(const TArray<bool> DistancesToUpdate, FConveyorActorContainer< AFGBuildableConveyorBelt* >* Belt, FConveyorActorContainer< AFGBuildableConveyorLift* >* Lifts){ }
void AFGConveyorItemSubsystem::UpdateGPUData(const TArray<bool> DistancesToUpdate){ }
void AFGConveyorItemSubsystem::UpdateBuckets(){ }
void AFGConveyorItemSubsystem::Cleanup(TArray< bool > LodsToUpdate){ }
TArray< bool > AFGConveyorItemSubsystem::UpdateTimers(float DeltaTime){ return TArray<bool>(); }
bool AFGConveyorItemSubsystem::mIsConveyorRendererActive = bool();
