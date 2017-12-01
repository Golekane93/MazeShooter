#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/CoreUObject/Classes/Object.h"
class AEnergyBall_C__pf3208112912;
class AActor;
class USphereComponent;
class UPawnSensingComponent;
class UStaticMeshComponent;
class APawn;
class APhysicsBallBP_C__pf3208112912;
class UAIAsyncTaskBlueprintProxy;
class AFirstPersonProjectile_C__pf3208112912;
#include "BallCharacter2__pf3208112912.generated.h"
UCLASS(Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/RollingBP/Blueprints/BallCharacter2.BallCharacter2_C", OverrideNativeName="BallCharacter2_C"))
class ABallCharacter2_C__pf3208112912 : public ACharacter
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OAISimpleDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OAISimpleDelegate__DelegateSignature__SC, EPathFollowingResult::Type , MovementResult);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sphere1"))
	USphereComponent* bpv__Sphere1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PawnSensing"))
	UPawnSensingComponent* bpv__PawnSensing__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sphere"))
	UStaticMeshComponent* bpv__Sphere__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enemy Energy", Category="Default", OverrideNativeName="EnemyEnergy"))
	float bpv__EnemyEnergy__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Distance from Enemy", Category="Default", OverrideNativeName="DistanceFromEnemy"))
	float bpv__DistanceFromEnemy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_GetComponentToWorld_ReturnValue"))
	FTransform b0l__CallFunc_K2_GetComponentToWorld_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OAISimpleDelegate__DelegateSignature__SC b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue"))
	AActor* b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult2"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FinishSpawningActor_ReturnValue"))
	AEnergyBall_C__pf3208112912* b0l__CallFunc_FinishSpawningActor_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate2"))
	F__OAISimpleDelegate__DelegateSignature__SC b0l__K2Node_CreateDelegate_OutputDelegate2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Pawn"))
	APawn* b0l__K2Node_ComponentBoundEvent_Pawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPhysics_Ball_BP"))
	APhysicsBallBP_C__pf3208112912* b0l__K2Node_DynamicCast_AsPhysics_Ball_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b0l__K2Node_Event_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsFirst_Person_Projectile"))
	AFirstPersonProjectile_C__pf3208112912* b0l__K2Node_DynamicCast_AsFirst_Person_Projectile__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPhysics_Ball_BP2"))
	APhysicsBallBP_C__pf3208112912* b0l__K2Node_DynamicCast_AsPhysics_Ball_BP2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetDistanceTo_ReturnValue"))
	float b0l__CallFunc_GetDistanceTo_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Subtract_FloatFloat_ReturnValue"))
	float b0l__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Less_FloatFloat_ReturnValue"))
	bool b0l__CallFunc_Less_FloatFloat_ReturnValue__pf;
	ABallCharacter2_C__pf3208112912(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	void bpf__ExecuteUbergraph_BallCharacter2__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BallCharacter2__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BallCharacter2__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BallCharacter2__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BallCharacter2__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Category="Collision", DisplayName="ActorBeginOverlap", ToolTip="Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.", CppFromBpEvent, OverrideNativeName="ReceiveActorBeginOverlap"))
	void bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature__pf(APawn* bpp__Pawn__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_4E1B9C9A4FB07D9802425581DCBA71F5"))
	virtual void bpf__OnSuccess_4E1B9C9A4FB07D9802425581DCBA71F5__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_4E1B9C9A4FB07D9802425581DCBA71F5"))
	virtual void bpf__OnFail_4E1B9C9A4FB07D9802425581DCBA71F5__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
