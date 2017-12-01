#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
class UOptions_C__pf3208112912;
#include "PauseScreen__pf3208112912.generated.h"
UCLASS(Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/RollingBP/Blueprints/PauseScreen.PauseScreen_C", OverrideNativeName="PauseScreen_C"))
class UPauseScreen_C__pf3208112912 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="ExitButton", Category="PauseScreen", OverrideNativeName="ExitButton"))
	UButton* bpv__ExitButton__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Image_0", Category="PauseScreen", OverrideNativeName="Image_0"))
	UImage* bpv__Image_0__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="OptionsButton", Category="PauseScreen", OverrideNativeName="OptionsButton"))
	UButton* bpv__OptionsButton__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Retry", Category="PauseScreen", OverrideNativeName="Retry"))
	UButton* bpv__Retry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SetGamePaused_ReturnValue"))
	bool b0l__CallFunc_SetGamePaused_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue"))
	UOptions_C__pf3208112912* b0l__CallFunc_Create_ReturnValue__pf;
	UPauseScreen_C__pf3208112912(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	void bpf__ExecuteUbergraph_PauseScreen__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseScreen__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseScreen__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseScreen__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseScreen__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseScreen__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseScreen__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseScreen__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseScreen__pf_8(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ExitButton_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ExitButton_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__OptionsButton_K2Node_ComponentBoundEvent_37_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__OptionsButton_K2Node_ComponentBoundEvent_37_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ExitButton_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ExitButton_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__OptionsButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__OptionsButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__OptionsButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__OptionsButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__OptionsButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__OptionsButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ExitButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ExitButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ExitButton_K2Node_ComponentBoundEvent_83_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ExitButton_K2Node_ComponentBoundEvent_83_OnButtonHoverEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave() override;
	virtual void CustomNativeInitilize() override;
};
