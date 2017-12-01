#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
class UTextBlock;
class UButton;
class UImage;
class UStartScreen_C__pf3208112912;
#include "Options__pf3208112912.generated.h"
UCLASS(Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/RollingBP/Blueprints/Options.Options_C", OverrideNativeName="Options_C"))
class UOptions_C__pf3208112912 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="1080p", Category="Options", OverrideNativeName="1080p"))
	UTextBlock* bpv__1080p__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="1080pButton", Category="Options", OverrideNativeName="1080pButton"))
	UButton* bpv__1080pButton__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="480p", Category="Options", OverrideNativeName="480p"))
	UTextBlock* bpv__480p__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="480pButton", Category="Options", OverrideNativeName="480pButton"))
	UButton* bpv__480pButton__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="720p", Category="Options", OverrideNativeName="720p"))
	UTextBlock* bpv__720p__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="720pButton", Category="Options", OverrideNativeName="720pButton"))
	UButton* bpv__720pButton__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Image_0", Category="Options", OverrideNativeName="Image_0"))
	UImage* bpv__Image_0__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="ReturnButton", Category="Options", OverrideNativeName="ReturnButton"))
	UButton* bpv__ReturnButton__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="returnT", Category="Options", OverrideNativeName="returnT"))
	UTextBlock* bpv__returnT__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="720p Active", Category="Default", OverrideNativeName="720pActive"))
	bool bpv__720pActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="480p Active", Category="Default", OverrideNativeName="480pActive"))
	bool bpv__480pActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="1080p Active", Category="Default", OverrideNativeName="1080pActive"))
	bool bpv__1080pActive__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue"))
	UStartScreen_C__pf3208112912* b0l__CallFunc_Create_ReturnValue__pf;
	UOptions_C__pf3208112912(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	void bpf__ExecuteUbergraph_Options__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options__pf_10(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__1080pButton_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__1080pButton_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__720pButton_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__720pButton_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__480pButton_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__480pButton_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__480pButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__480pButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__720pButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__720pButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__1080pButton_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__1080pButton_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ReturnButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ReturnButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__720pButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__720pButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__1080pButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__1080pButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__480pButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__480pButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__480pButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__480pButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__720pButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__720pButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__1080pButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__1080pButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave() override;
	virtual void CustomNativeInitilize() override;
};
