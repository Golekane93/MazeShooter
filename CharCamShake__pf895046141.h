#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "CharCamShake__pf895046141.generated.h"
UCLASS(Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/RollingBP/CharCamShake.CharCamShake_C", OverrideNativeName="CharCamShake_C"))
class UCharCamShake_C__pf895046141 : public UCameraShake
{
public:
	GENERATED_BODY()
	UCharCamShake_C__pf895046141(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
public:
};
