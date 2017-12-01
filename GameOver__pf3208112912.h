#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
#include "GameOver__pf3208112912.generated.h"
UCLASS(Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/RollingBP/Blueprints/GameOver.GameOver_C", OverrideNativeName="GameOver_C"))
class UGameOver_C__pf3208112912 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Exit", Category="GameOver", OverrideNativeName="Exit"))
	UButton* bpv__Exit__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Image_0", Category="GameOver", OverrideNativeName="Image_0"))
	UImage* bpv__Image_0__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="RetryM", Category="GameOver", OverrideNativeName="RetryM"))
	UButton* bpv__RetryM__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Retry", Category="Default", OverrideNativeName="retry"))
	bool bpv__retry__pf;
	UGameOver_C__pf3208112912(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	void bpf__ExecuteUbergraph_GameOver__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GameOver__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GameOver__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GameOver__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GameOver__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GameOver__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__RetryM_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__RetryM_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__RetryM_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__RetryM_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Exit_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Exit_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Exit_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Exit_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__RetryM_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__RetryM_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Exit_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Exit_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__RetryM_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__RetryM_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Exit_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Exit_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave() override;
	virtual void CustomNativeInitilize() override;
};
