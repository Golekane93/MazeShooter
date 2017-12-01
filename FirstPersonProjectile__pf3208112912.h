#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Classes/Object.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
class UPrimitiveComponent;
class UParticleSystemComponent;
class UProjectileMovementComponent;
class UStaticMeshComponent;
class USphereComponent;
class AActor;
class UPhysicalMaterial;
class ABallCharacter3_C__pf3208112912;
class ABallCharacter_C__pf3208112912;
class ABallCharacter2_C__pf3208112912;
#include "FirstPersonProjectile__pf3208112912.generated.h"
UCLASS(Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/RollingBP/Blueprints/FirstPersonProjectile.FirstPersonProjectile_C", OverrideNativeName="FirstPersonProjectile_C"))
class AFirstPersonProjectile_C__pf3208112912 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="MyProjectile", OverrideNativeName="Projectile"))
	UProjectileMovementComponent* bpv__Projectile__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="MyProjectile", OverrideNativeName="Sphere"))
	UStaticMeshComponent* bpv__Sphere__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="MyProjectile", OverrideNativeName="CollisionComponent"))
	USphereComponent* bpv__CollisionComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_GetActorLocation_ReturnValue"))
	FVector b0l__CallFunc_K2_GetActorLocation_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetVelocity_ReturnValue"))
	FVector b0l__CallFunc_GetVelocity_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Multiply_VectorFloat_ReturnValue"))
	FVector b0l__CallFunc_Multiply_VectorFloat_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SpawnEmitterAtLocation_ReturnValue"))
	UParticleSystemComponent* b0l__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_ImpactResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_ImpactResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_ImpactVelocity"))
	FVector b0l__K2Node_ComponentBoundEvent_ImpactVelocity__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsSimulatingPhysics_ReturnValue"))
	bool b0l__CallFunc_IsSimulatingPhysics_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time"))
	float b0l__CallFunc_BreakHitResult_Time__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location"))
	FVector b0l__CallFunc_BreakHitResult_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal"))
	FVector b0l__CallFunc_BreakHitResult_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem"))
	int32 b0l__CallFunc_BreakHitResult_HitItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetOwner_ReturnValue"))
	AActor* b0l__CallFunc_GetOwner_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBall_Character_3"))
	ABallCharacter3_C__pf3208112912* b0l__K2Node_DynamicCast_AsBall_Character_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBall_Character"))
	ABallCharacter_C__pf3208112912* b0l__K2Node_DynamicCast_AsBall_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Subtract_FloatFloat_ReturnValue"))
	float b0l__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Subtract_FloatFloat_ReturnValue2"))
	float b0l__CallFunc_Subtract_FloatFloat_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Conv_FloatToString_ReturnValue"))
	FString b0l__CallFunc_Conv_FloatToString_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBall_Character_2"))
	ABallCharacter2_C__pf3208112912* b0l__K2Node_DynamicCast_AsBall_Character_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_GetActorLocation_ReturnValue2"))
	FVector b0l__CallFunc_K2_GetActorLocation_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Subtract_FloatFloat_ReturnValue3"))
	float b0l__CallFunc_Subtract_FloatFloat_ReturnValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SpawnEmitterAtLocation_ReturnValue2"))
	UParticleSystemComponent* b0l__CallFunc_SpawnEmitterAtLocation_ReturnValue2__pf;
	AFirstPersonProjectile_C__pf3208112912(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	void bpf__ExecuteUbergraph_FirstPersonProjectile__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FirstPersonProjectile__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Projectile_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__Projectile_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature__pf(/*out*/ FHitResult const& bpp__ImpactResult__pf, /*out*/ FVector const& bpp__ImpactVelocity__pf);
	UFUNCTION(meta=(Category="Collision", DisplayName="Hit", ToolTip="Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.This could happen due to things like Character movement, using Set Location with \'sweep\' enabled, or physics simulation.For events when objects overlap (e.g. walking into a trigger) see the \'Overlap\' event.@note For collisions during physics simulation to generate hit events, \'Simulation Generates Hit Events\' must be enabled.@note When receiving a hit from another object\'s movement (bSelfMoved is false), the directions of \'Hit.Normal\' and \'Hit.ImpactNormal\'will be adjusted to indicate force from the other object against this object.", CppFromBpEvent, OverrideNativeName="ReceiveHit"))
	void bpf__ReceiveHit__pf(UPrimitiveComponent* bpp__MyComp__pf, AActor* bpp__Other__pf, UPrimitiveComponent* bpp__OtherComp__pf, bool bpp__bSelfMoved__pf, FVector bpp__HitLocation__pf, FVector bpp__HitNormal__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
