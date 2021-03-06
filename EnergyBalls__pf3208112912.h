#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
#include "EnergyBalls__pf3208112912.generated.h"
UCLASS(Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/RollingBP/Blueprints/EnergyBalls.EnergyBalls_C", OverrideNativeName="EnergyBalls_C"))
class UEnergyBalls_C__pf3208112912 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Image_0", Category="EnergyBalls", OverrideNativeName="Image_0"))
	UImage* bpv__Image_0__pf;
	UEnergyBalls_C__pf3208112912(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave() override;
	virtual void CustomNativeInitilize() override;
};
