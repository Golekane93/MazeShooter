#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/CoreUObject/Classes/Object.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
class UPrimitiveComponent;
class AActor;
class UPauseScreen_C__pf3208112912;
class USphereComponent;
class UStaticMeshComponent;
class UCameraComponent;
class USpringArmComponent;
class USaveGame;
class UBoxComponent;
class UHUDisplay_C__pf3208112912;
class UMyGameSave_C__pf3208112912;
class Ucheckpoint_C__pf3208112912;
class AFirstPersonProjectile_C__pf3208112912;
class APlayerController;
class UClass;
#include "PhysicsBallBP__pf3208112912.generated.h"
UCLASS(Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/RollingBP/Blueprints/PhysicsBallBP.PhysicsBallBP_C", OverrideNativeName="PhysicsBallBP_C"))
class APhysicsBallBP_C__pf3208112912 : public APawn
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sphere2"))
	USphereComponent* bpv__Sphere2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sphere"))
	UStaticMeshComponent* bpv__Sphere__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sphere1"))
	USphereComponent* bpv__Sphere1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Camera"))
	UCameraComponent* bpv__Camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SpringArm"))
	USpringArmComponent* bpv__SpringArm__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Ball"))
	UStaticMeshComponent* bpv__Ball__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Jump Impulse", Category="Default", Tooltip="Vertical impulse to apply when pressing jump", OverrideNativeName="JumpImpulse"))
	float bpv__JumpImpulse__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Jump", Category="Default", Tooltip=" Indicates whether we can currently jump, use to prevent double jumping", OverrideNativeName="CanJump"))
	bool bpv__CanJump__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Roll Torque", Category="Default", Tooltip="Torque to apply when trying to roll ball", OverrideNativeName="RollTorque"))
	float bpv__RollTorque__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Using Motion", Category="Default", OverrideNativeName="Using Motion"))
	bool bpv__UsingxMotion__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Gun Offset", Category="Default", OverrideNativeName="GunOffset"))
	FVector bpv__GunOffset__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Using Mot Controllers", Category="Default", OverrideNativeName="UsingMotControllers"))
	bool bpv__UsingMotControllers__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hold", Category="Default", OverrideNativeName="Hold"))
	bool bpv__Hold__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Gun Offset 2", Category="Default", OverrideNativeName="GunOffset2"))
	FVector bpv__GunOffset2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Energy", Category="Default", OverrideNativeName="Energy"))
	float bpv__Energy__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Shield", Category="Default", OverrideNativeName="Shield"))
	float bpv__Shield__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Energy", Category="Default", OverrideNativeName="MaxEnergy"))
	float bpv__MaxEnergy__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Shield", Category="Default", OverrideNativeName="MaxShield"))
	float bpv__MaxShield__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="E Perc", Category="Default", OverrideNativeName="E_Perc"))
	float bpv__E_Perc__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Paused", Category="Default", OverrideNativeName="paused"))
	bool bpv__paused__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="P", Category="Default", OverrideNativeName="p"))
	bool bpv__p__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Save Sub", Category="Default", OverrideNativeName="SaveSub"))
	USaveGame* bpv__SaveSub__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", OverrideNativeName="NewVar_0"))
	UBoxComponent* bpv__NewVar_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 1", Category="Default", OverrideNativeName="NewVar_1"))
	UBoxComponent* bpv__NewVar_1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 2", Category="Default", OverrideNativeName="NewVar_2"))
	bool bpv__NewVar_2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="C 1Reached", Category="Default", OverrideNativeName="c1Reached"))
	bool bpv__c1Reached__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="C 2Reached", Category="Default", OverrideNativeName="c2Reached"))
	bool bpv__c2Reached__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="C 3Reached", Category="Default", OverrideNativeName="c3Reached"))
	bool bpv__c3Reached__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="C 4Reached", Category="Default", OverrideNativeName="c4Reached"))
	bool bpv__c4Reached__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="C 5Reached", Category="Default", OverrideNativeName="c5Reached"))
	bool bpv__c5Reached__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Checkpoint Location", Category="Default", OverrideNativeName="checkpointLocation"))
	FVector bpv__checkpointLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Energy", Category="Default", OverrideNativeName="currentEnergy"))
	float bpv__currentEnergy__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Ball Level", Category="Default", OverrideNativeName="BallLevel"))
	int32 bpv__BallLevel__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key3"))
	FKey b0l__K2Node_InputKeyEvent_Key3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable2"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key4"))
	FKey b0l__K2Node_InputKeyEvent_Key4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable2"))
	FKey b0l__Temp_struct_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key5"))
	FKey b0l__K2Node_InputKeyEvent_Key5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key6"))
	FKey b0l__K2Node_InputKeyEvent_Key6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key2"))
	FKey b0l__K2Node_InputKeyEvent_Key2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable3"))
	FKey b0l__Temp_struct_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key7"))
	FKey b0l__K2Node_InputKeyEvent_Key7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key8"))
	FKey b0l__K2Node_InputKeyEvent_Key8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue"))
	UPauseScreen_C__pf3208112912* b0l__CallFunc_Create_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable4"))
	FTransform b0l__Temp_struct_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable2"))
	bool b0l__Temp_bool_IsClosed_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable3"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable3"))
	bool b0l__Temp_bool_IsClosed_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable4"))
	bool b0l__Temp_bool_IsClosed_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable4"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue2"))
	float b0l__K2Node_InputAxisEvent_AxisValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyComp"))
	UPrimitiveComponent* b0l__K2Node_Event_MyComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Other"))
	AActor* b0l__K2Node_Event_Other__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_Event_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_bSelfMoved"))
	bool b0l__K2Node_Event_bSelfMoved__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_HitLocation"))
	FVector b0l__K2Node_Event_HitLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_HitNormal"))
	FVector b0l__K2Node_Event_HitNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NormalImpulse"))
	FVector b0l__K2Node_Event_NormalImpulse__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Hit"))
	FHitResult b0l__K2Node_Event_Hit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_MakeVector_ReturnValue"))
	FVector b0l__CallFunc_MakeVector_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Multiply_FloatFloat_ReturnValue"))
	float b0l__CallFunc_Multiply_FloatFloat_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_MakeVector_ReturnValue2"))
	FVector b0l__CallFunc_MakeVector_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue2"))
	UHUDisplay_C__pf3208112912* b0l__CallFunc_Create_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Save"))
	UMyGameSave_C__pf3208112912* b0l__K2Node_DynamicCast_AsMy_Game_Save__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_ReturnValue"))
	bool b0l__CallFunc_K2_SetActorLocation_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue3"))
	Ucheckpoint_C__pf3208112912* b0l__CallFunc_Create_ReturnValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b0l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Multiply_FloatFloat_ReturnValue2"))
	float b0l__CallFunc_Multiply_FloatFloat_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_MakeVector_ReturnValue3"))
	FVector b0l__CallFunc_MakeVector_ReturnValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisKeyEvent_AxisValue2"))
	float b0l__K2Node_InputAxisKeyEvent_AxisValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisKeyEvent_AxisValue"))
	float b0l__K2Node_InputAxisKeyEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Multiply_FloatFloat_ReturnValue3"))
	float b0l__CallFunc_Multiply_FloatFloat_ReturnValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetRightVector_ReturnValue"))
	FVector b0l__CallFunc_GetRightVector_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Conv_VectorToRotator_ReturnValue"))
	FRotator b0l__CallFunc_Conv_VectorToRotator_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Save2"))
	UMyGameSave_C__pf3208112912* b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GreaterGreater_VectorRotator_ReturnValue"))
	FVector b0l__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Conv_VectorToRotator_ReturnValue2"))
	FRotator b0l__CallFunc_Conv_VectorToRotator_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GreaterGreater_VectorRotator_ReturnValue2"))
	FVector b0l__CallFunc_GreaterGreater_VectorRotator_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable5"))
	FTransform b0l__Temp_struct_Variable5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable2"))
	bool b0l__Temp_bool_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_GetActorLocation_ReturnValue"))
	FVector b0l__CallFunc_K2_GetActorLocation_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Save3"))
	UMyGameSave_C__pf3208112912* b0l__K2Node_DynamicCast_AsMy_Game_Save3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_GetComponentRotation_ReturnValue"))
	FRotator b0l__CallFunc_K2_GetComponentRotation_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GreaterGreater_VectorRotator_ReturnValue3"))
	FVector b0l__CallFunc_GreaterGreater_VectorRotator_ReturnValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_GetComponentLocation_ReturnValue"))
	FVector b0l__CallFunc_K2_GetComponentLocation_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Add_VectorVector_ReturnValue"))
	FVector b0l__CallFunc_Add_VectorVector_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable6"))
	FKey b0l__Temp_struct_Variable6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_MakeTransform_ReturnValue"))
	FTransform b0l__CallFunc_MakeTransform_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	FTransform b0l__K2Node_Select_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue"))
	AActor* b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FinishSpawningActor_ReturnValue"))
	AFirstPersonProjectile_C__pf3208112912* b0l__CallFunc_FinishSpawningActor_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_GetComponentLocation_ReturnValue2"))
	FVector b0l__CallFunc_K2_GetComponentLocation_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key2"))
	FKey b0l__K2Node_InputActionEvent_Key2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable7"))
	FKey b0l__Temp_struct_Variable7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GreaterGreater_VectorRotator_ReturnValue4"))
	FVector b0l__CallFunc_GreaterGreater_VectorRotator_ReturnValue4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Add_VectorVector_ReturnValue2"))
	FVector b0l__CallFunc_Add_VectorVector_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_MakeTransform_ReturnValue2"))
	FTransform b0l__CallFunc_MakeTransform_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select2_Default"))
	FTransform b0l__K2Node_Select2_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetPlayerController_ReturnValue"))
	APlayerController* b0l__CallFunc_GetPlayerController_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2"))
	AActor* b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FinishSpawningActor_ReturnValue2"))
	AFirstPersonProjectile_C__pf3208112912* b0l__CallFunc_FinishSpawningActor_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key3"))
	FKey b0l__K2Node_InputActionEvent_Key3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SetGamePaused_ReturnValue"))
	bool b0l__CallFunc_SetGamePaused_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetPlayerController_ReturnValue2"))
	APlayerController* b0l__CallFunc_GetPlayerController_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LessEqual_FloatFloat_ReturnValue"))
	bool b0l__CallFunc_LessEqual_FloatFloat_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LessEqual_FloatFloat_ReturnValue2"))
	bool b0l__CallFunc_LessEqual_FloatFloat_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Divide_FloatFloat_ReturnValue"))
	float b0l__CallFunc_Divide_FloatFloat_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Subtract_FloatFloat_ReturnValue"))
	float b0l__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FClamp_ReturnValue"))
	float b0l__CallFunc_FClamp_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputTouchEvent_FingerIndex"))
	TEnumAsByte<ETouchIndex::Type> b0l__K2Node_InputTouchEvent_FingerIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputTouchEvent_Location"))
	FVector b0l__K2Node_InputTouchEvent_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_EqualEqual_ByteByte_ReturnValue"))
	bool b0l__CallFunc_EqualEqual_ByteByte_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Subtract_FloatFloat_ReturnValue2"))
	float b0l__CallFunc_Subtract_FloatFloat_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable8"))
	FKey b0l__Temp_struct_Variable8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetPlayerController_ReturnValue3"))
	APlayerController* b0l__CallFunc_GetPlayerController_ReturnValue3__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_MakeVector_ReturnValue4"))
	FVector b0l__CallFunc_MakeVector_ReturnValue4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key4"))
	FKey b0l__K2Node_InputActionEvent_Key4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b0l__K2Node_Event_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetObjectClass_ReturnValue"))
	UClass* b0l__CallFunc_GetObjectClass_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ClassIsChildOf_ReturnValue"))
	bool b0l__CallFunc_ClassIsChildOf_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key5"))
	FKey b0l__K2Node_InputActionEvent_Key5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_DoesSaveGameExist_ReturnValue2"))
	bool b0l__CallFunc_DoesSaveGameExist_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LoadGameFromSlot_ReturnValue2"))
	USaveGame* b0l__CallFunc_LoadGameFromSlot_ReturnValue2__pf;
	APhysicsBallBP_C__pf3208112912(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	void bpf__ExecuteUbergraph_PhysicsBallBP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PhysicsBallBP__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_PhysicsBallBP_2"))
	void bpf__ExecuteUbergraph_PhysicsBallBP__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_PhysicsBallBP_3"))
	void bpf__ExecuteUbergraph_PhysicsBallBP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PhysicsBallBP__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_PhysicsBallBP_5"))
	void bpf__ExecuteUbergraph_PhysicsBallBP__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PhysicsBallBP__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PhysicsBallBP__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PhysicsBallBP__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PhysicsBallBP__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PhysicsBallBP__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PhysicsBallBP__pf_11(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Category="Collision", DisplayName="ActorBeginOverlap", ToolTip="Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.", CppFromBpEvent, OverrideNativeName="ReceiveActorBeginOverlap"))
	void bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_13"))
	virtual void bpf__InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_13__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0"))
	virtual void bpf__InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveForward_K2Node_InputAxisEvent_112"))
	virtual void bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_112__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(Category="Collision", DisplayName="Hit", ToolTip="Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.This could happen due to things like Character movement, using Set Location with \'sweep\' enabled, or physics simulation.For events when objects overlap (e.g. walking into a trigger) see the \'Overlap\' event.@note For collisions during physics simulation to generate hit events, \'Simulation Generates Hit Events\' must be enabled.@note When receiving a hit from another object\'s movement (bSelfMoved is false), the directions of \'Hit.Normal\' and \'Hit.ImpactNormal\'will be adjusted to indicate force from the other object against this object.", CppFromBpEvent, OverrideNativeName="ReceiveHit"))
	void bpf__ReceiveHit__pf(UPrimitiveComponent* bpp__MyComp__pf, AActor* bpp__Other__pf, UPrimitiveComponent* bpp__OtherComp__pf, bool bpp__bSelfMoved__pf, FVector bpp__HitLocation__pf, FVector bpp__HitNormal__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveRight_K2Node_InputAxisEvent_29"))
	virtual void bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_29__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_D_K2Node_InputKeyEvent_8"))
	virtual void bpf__InpActEvt_D_K2Node_InputKeyEvent_8__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_D_K2Node_InputKeyEvent_9"))
	virtual void bpf__InpActEvt_D_K2Node_InputKeyEvent_9__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_S_K2Node_InputKeyEvent_10"))
	virtual void bpf__InpActEvt_S_K2Node_InputKeyEvent_10__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_S_K2Node_InputKeyEvent_11"))
	virtual void bpf__InpActEvt_S_K2Node_InputKeyEvent_11__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_A_K2Node_InputKeyEvent_12"))
	virtual void bpf__InpActEvt_A_K2Node_InputKeyEvent_12__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_A_K2Node_InputKeyEvent_13"))
	virtual void bpf__InpActEvt_A_K2Node_InputKeyEvent_13__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_W_K2Node_InputKeyEvent_14"))
	virtual void bpf__InpActEvt_W_K2Node_InputKeyEvent_14__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_W_K2Node_InputKeyEvent_15"))
	virtual void bpf__InpActEvt_W_K2Node_InputKeyEvent_15__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Pause_K2Node_InputActionEvent_5"))
	virtual void bpf__InpActEvt_Pause_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Fire_K2Node_InputActionEvent_6"))
	virtual void bpf__InpActEvt_Fire_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Fire_K2Node_InputActionEvent_7"))
	virtual void bpf__InpActEvt_Fire_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpTchEvt_K2Node_InputTouchEvent_1"))
	virtual void bpf__InpTchEvt_K2Node_InputTouchEvent_1__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Jump_K2Node_InputActionEvent_8"))
	virtual void bpf__InpActEvt_Jump_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Jump_K2Node_InputActionEvent_9"))
	virtual void bpf__InpActEvt_Jump_K2Node_InputActionEvent_9__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
