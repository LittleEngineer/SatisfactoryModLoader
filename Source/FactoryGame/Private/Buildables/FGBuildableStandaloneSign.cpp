// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableStandaloneSign.h"

AFGBuildableStandaloneSign::AFGBuildableStandaloneSign(){ }
void AFGBuildableStandaloneSign::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableStandaloneSign::BeginPlay(){ }
void AFGBuildableStandaloneSign::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGBuildableStandaloneSign::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableStandaloneSign::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableStandaloneSign::OnConstruction(const FTransform& transform){ }
AFGBuildable* AFGBuildableStandaloneSign::GetBuildable_Implementation(){ return nullptr; }
void AFGBuildableStandaloneSign::SetSignData_Implementation(const FSignData& data, bool bUpdate){ }
FSignData AFGBuildableStandaloneSign::GetSignData_Implementation(){ return FSignData(); }
int32 AFGBuildableStandaloneSign::GetAvailableElementID_Implementation(){ return int32(); }
FVector2D AFGBuildableStandaloneSign::GetSignDimensions_Implementation(){ return FVector2D(); }
FVector2D AFGBuildableStandaloneSign::GetGridSquareDimensions_Implementation(){ return FVector2D(); }
void AFGBuildableStandaloneSign::GainedSignificance_Implementation(){ }
void AFGBuildableStandaloneSign::LostSignificance_Implementation(){ }
void AFGBuildableStandaloneSign::UpdateSignElements(){ }
void AFGBuildableStandaloneSign::UpdateBackgroundMaterial(){ }
void AFGBuildableStandaloneSign::UpdateSignText(){ }
float AFGBuildableStandaloneSign::GetCurrentNormalizedTextScale(){ return float(); }
float AFGBuildableStandaloneSign::GetCurrentNormalizedTextOffsetZ(){ return float(); }
float AFGBuildableStandaloneSign::GetTextScaleFromNormalizedValue(float value){ return float(); }
void AFGBuildableStandaloneSign::OnRep_SignData(){ }
