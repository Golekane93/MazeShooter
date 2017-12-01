#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UButton;
#include "Victory__pf3208112912.generated.h"
UCLASS(Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/RollingBP/Blueprints/Victory.Victory_C", OverrideNativeName="Victory_C"))
class UVictory_C__pf3208112912 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="exit", Category="Victory", OverrideNativeName="exit"))
	UButton* bpv__exit__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Image_0", Category="Victory", OverrideNativeName="Image_0"))
	UImage* bpv__Image_0__pf;
	UVictory_C__pf3208112912(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	void bpf__ExecuteUbergraph_Victory__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Victory__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Victory__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__exit_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__exit_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__exit_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__exit_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__exit_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__exit_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave() override;
	virtual void CustomNativeInitilize() override;
};
