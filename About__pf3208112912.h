#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
#include "About__pf3208112912.generated.h"
UCLASS(Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/RollingBP/Blueprints/About.About_C", OverrideNativeName="About_C"))
class UAbout_C__pf3208112912 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Image_0", Category="About", OverrideNativeName="Image_0"))
	UImage* bpv__Image_0__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Return", Category="About", OverrideNativeName="Return"))
	UButton* bpv__Return__pf;
	UAbout_C__pf3208112912(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	void bpf__ExecuteUbergraph_About__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_About__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_About__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Return_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Return_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Return_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Return_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Return_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Return_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Return_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Return_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave() override;
	virtual void CustomNativeInitilize() override;
};
