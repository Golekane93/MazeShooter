#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetAnimation;
#include "checkpoint__pf3208112912.generated.h"
UCLASS(Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/RollingBP/Blueprints/checkpoint.checkpoint_C", OverrideNativeName="checkpoint_C"))
class Ucheckpoint_C__pf3208112912 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Transient, meta=(Category="Animations", OverrideNativeName="Checkpoint"))
	UWidgetAnimation* bpv__Checkpoint__pf;
	Ucheckpoint_C__pf3208112912(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave() override;
	virtual void CustomNativeInitilize() override;
};
