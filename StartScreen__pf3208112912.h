#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
class USaveGame;
class UHorizontalBox;
class UButton;
class UImage;
class APlayerController;
class UMyGameSave_C__pf3208112912;
class UAbout_C__pf3208112912;
class UOptions_C__pf3208112912;
#include "StartScreen__pf3208112912.generated.h"
UCLASS(Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/RollingBP/Blueprints/StartScreen.StartScreen_C", OverrideNativeName="StartScreen_C"))
class UStartScreen_C__pf3208112912 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="About", Category="StartScreen", OverrideNativeName="About"))
	UButton* bpv__About__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Image_0", Category="StartScreen", OverrideNativeName="Image_0"))
	UImage* bpv__Image_0__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="OptionsButtons", Category="StartScreen", OverrideNativeName="OptionsButtons"))
	UButton* bpv__OptionsButtons__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="QuitButton", Category="StartScreen", OverrideNativeName="QuitButton"))
	UButton* bpv__QuitButton__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="StartButton", Category="StartScreen", OverrideNativeName="StartButton"))
	UButton* bpv__StartButton__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Title", Category="StartScreen", OverrideNativeName="Title"))
	UHorizontalBox* bpv__Title__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Save Sub", Category="Default", OverrideNativeName="SaveSub"))
	USaveGame* bpv__SaveSub__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetPlayerController_ReturnValue"))
	APlayerController* b0l__CallFunc_GetPlayerController_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Save"))
	UMyGameSave_C__pf3208112912* b0l__K2Node_DynamicCast_AsMy_Game_Save__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue"))
	UAbout_C__pf3208112912* b0l__CallFunc_Create_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Save2"))
	UMyGameSave_C__pf3208112912* b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_DoesSaveGameExist_ReturnValue"))
	bool b0l__CallFunc_DoesSaveGameExist_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LoadGameFromSlot_ReturnValue"))
	USaveGame* b0l__CallFunc_LoadGameFromSlot_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateSaveGameObject_ReturnValue"))
	USaveGame* b0l__CallFunc_CreateSaveGameObject_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SaveGameToSlot_ReturnValue"))
	bool b0l__CallFunc_SaveGameToSlot_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SaveGameToSlot_ReturnValue2"))
	bool b0l__CallFunc_SaveGameToSlot_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue2"))
	UOptions_C__pf3208112912* b0l__CallFunc_Create_ReturnValue2__pf;
	UStartScreen_C__pf3208112912(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	void bpf__ExecuteUbergraph_StartScreen__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StartScreen__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StartScreen__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StartScreen__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StartScreen__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StartScreen__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StartScreen__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StartScreen__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StartScreen__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StartScreen__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StartScreen__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StartScreen__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_StartScreen__pf_12(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__About_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__About_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__About_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__About_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__About_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__About_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__About_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__About_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__QuitButton_K2Node_ComponentBoundEvent_35_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__QuitButton_K2Node_ComponentBoundEvent_35_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__StartButton_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__StartButton_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__StartButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__StartButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__QuitButton_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__QuitButton_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__OptionsButtons_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__OptionsButtons_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__StartButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__StartButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__QuitButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__QuitButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__OptionsButtons_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__OptionsButtons_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__OptionsButtons_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__OptionsButtons_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__QuitButton_K2Node_ComponentBoundEvent_151_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__QuitButton_K2Node_ComponentBoundEvent_151_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__StartButton_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__StartButton_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave() override;
	virtual void CustomNativeInitilize() override;
};
