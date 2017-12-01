#include "NativizedAssets.h"
#include "BallCharacter__pf3208112912.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/AIModule/Classes/Perception/PawnSensingComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "BallCharacter__pf3208112912.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Animation/VertexAnim/VertexAnimBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/HapticFeedbackEffect.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "EnergyBall__pf3208112912.h"
#include "EnemyProjectile__pf3208112912.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "PhysicsBallBP__pf3208112912.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "MyGameSave__pf3208112912.h"
#include "FirstPersonProjectile__pf3208112912.h"
#include "BallCharacter2__pf3208112912.h"
#include "BallCharacter3__pf3208112912.h"
#include "CharCamShake__pf895046141.h"
#include "Victory__pf3208112912.h"
#include "checkpoint__pf3208112912.h"
#include "HUDisplay__pf3208112912.h"
#include "PauseScreen__pf3208112912.h"
#include "Options__pf3208112912.h"
#include "StartScreen__pf3208112912.h"
#include "About__pf3208112912.h"
#include "GameOver__pf3208112912.h"
void ABallCharacter_C__pf3208112912::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->UsedAssets.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	// List of all referenced converted classes
	extern UClass* Z_Construct_UClass_AEnergyBall_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AEnergyBall_C__pf3208112912());
	extern UClass* Z_Construct_UClass_APhysicsBallBP_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_APhysicsBallBP_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UMyGameSave_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UMyGameSave_C__pf3208112912());
	extern UClass* Z_Construct_UClass_AFirstPersonProjectile_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AFirstPersonProjectile_C__pf3208112912());
	extern UClass* Z_Construct_UClass_ABallCharacter2_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ABallCharacter2_C__pf3208112912());
	extern UClass* Z_Construct_UClass_ABallCharacter3_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ABallCharacter3_C__pf3208112912());
	extern UClass* Z_Construct_UClass_AEnemyProjectile_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AEnemyProjectile_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UCharCamShake_C__pf895046141();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UCharCamShake_C__pf895046141());
	extern UClass* Z_Construct_UClass_UVictory_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UVictory_C__pf3208112912());
	extern UClass* Z_Construct_UClass_Ucheckpoint_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_Ucheckpoint_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UHUDisplay_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UHUDisplay_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UPauseScreen_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UPauseScreen_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UOptions_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UOptions_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UStartScreen_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UStartScreen_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UAbout_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UAbout_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UGameOver_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UGameOver_C__pf3208112912());
	// List of all referenced assets
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Engine/BasicShapes/Sphere.Sphere")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/ICE/M_JaggedRockIce_MeshEmit.M_JaggedRockIce_MeshEmit")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/Lightning/M_JaggedRockLightning_MeshEmit_Lit_INST.M_JaggedRockLightning_MeshEmit_Lit_INST")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/Rolling/Meshes/BallMesh.BallMesh")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/Fire/M_JaggedRockFire_MeshEmit_Lit.M_JaggedRockFire_MeshEmit_Lit")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Materials/M_Metal_Rust.M_Metal_Rust")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Scrap.Scrap")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Engine/BasicShapes/Cone.Cone")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/ICE/M_JaggedRockIce_MeshEmit_Blue.M_JaggedRockIce_MeshEmit_Blue")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Audio/Explosion_Cue.Explosion_Cue")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Particles/P_Explosion.P_Explosion")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/Fonts/Atmosphere/Atmosphere-Regular.Atmosphere-Regular")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/Fonts/Atmosphere/Atmosphere-Light.Atmosphere-Light")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Engine/EngineFonts/Roboto.Roboto")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Moving.Moving")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Energy_Critical.Energy_Critical")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Level_Cleared_________________Advance_Stage.Level_Cleared_________________Advance_Stage")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Check_Point.Check_Point")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Ability/Heal/P_Heal_Pickup.P_Heal_Pickup")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Gobble.Gobble")));
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 1);
	__Local__0->ComponentDelegateBindings[0].ComponentPropertyName = FName(TEXT("PawnSensing"));
	__Local__0->ComponentDelegateBindings[0].DelegatePropertyName = FName(TEXT("OnSeePawn"));
	__Local__0->ComponentDelegateBindings[0].FunctionNameToBind = FName(TEXT("BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature"));
}
ABallCharacter_C__pf3208112912::ABallCharacter_C__pf3208112912(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABallCharacter_C__pf3208112912::StaticClass() == GetClass()))
	{
		ABallCharacter_C__pf3208112912::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__1 = CastChecked<UCapsuleComponent>(GetDefaultSubobjectByName(TEXT("CollisionCylinder")));
	auto __Local__2 = CastChecked<UCharacterMovementComponent>(GetDefaultSubobjectByName(TEXT("CharMoveComp")));
	auto __Local__3 = CastChecked<USkeletalMeshComponent>(GetDefaultSubobjectByName(TEXT("CharacterMesh0")));
	bpv__Sphere__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	bpv__PawnSensing__pf = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
	bpv__Sphere1__pf = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere1"));
	bpv__Sphere2__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere2"));
	bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere__pf->AttachToComponent(__Local__1, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Sphere__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABallCharacter_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Sphere__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Sphere__pf->OverrideMaterials.Reserve(1);
	bpv__Sphere__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABallCharacter_C__pf3208112912::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	static TWeakObjectPtr<UProperty> __Local__5{};
	const UProperty* __Local__4 = __Local__5.Get();
	if (nullptr == __Local__4)
	{
		__Local__4 = (FBodyInstance::StaticStruct())->FindPropertyByName(FName(TEXT("CollisionProfileName")));
		check(__Local__4);
		__Local__5 = __Local__4;
	}
	auto& __Local__6 = (*(__Local__4->ContainerPtrToValuePtr<FName >(&(bpv__Sphere__pf->BodyInstance), 0)));
	__Local__6 = FName(TEXT("PhysicsActor"));
	bpv__Sphere__pf->BodyInstance.bSimulatePhysics = true;
	static TWeakObjectPtr<UProperty> __Local__8{};
	const UProperty* __Local__7 = __Local__8.Get();
	if (nullptr == __Local__7)
	{
		__Local__7 = (FBodyInstance::StaticStruct())->FindPropertyByName(FName(TEXT("ObjectType")));
		check(__Local__7);
		__Local__8 = __Local__7;
	}
	auto& __Local__9 = (*(__Local__7->ContainerPtrToValuePtr<TEnumAsByte<ECollisionChannel> >(&(bpv__Sphere__pf->BodyInstance), 0)));
	__Local__9 = ECollisionChannel::ECC_PhysicsBody;
	bpv__Sphere__pf->RelativeLocation = FVector(0.000000, 0.000000, -30.000000);
	if(!bpv__Sphere__pf->IsTemplate())
	{
		bpv__Sphere__pf->BodyInstance.FixupData(bpv__Sphere__pf);
	}
	bpv__PawnSensing__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakObjectPtr<UProperty> __Local__11{};
	const UProperty* __Local__10 = __Local__11.Get();
	if (nullptr == __Local__10)
	{
		__Local__10 = (UPawnSensingComponent::StaticClass())->FindPropertyByName(FName(TEXT("PeripheralVisionAngle")));
		check(__Local__10);
		__Local__11 = __Local__10;
	}
	auto& __Local__12 = (*(__Local__10->ContainerPtrToValuePtr<float >((bpv__PawnSensing__pf), 0)));
	__Local__12 = 180.000000f;
	bpv__Sphere1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere1__pf->AttachToComponent(__Local__1, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Sphere1__pf->RelativeLocation = FVector(0.000000, 60.000000, 10.000000);
	bpv__Sphere1__pf->RelativeScale3D = FVector(0.560000, 0.560000, 0.560000);
	if(!bpv__Sphere1__pf->IsTemplate())
	{
		bpv__Sphere1__pf->BodyInstance.FixupData(bpv__Sphere1__pf);
	}
	bpv__Sphere2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere2__pf->AttachToComponent(bpv__Sphere1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Sphere2__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABallCharacter_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Sphere2__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Sphere2__pf->OverrideMaterials.Reserve(1);
	bpv__Sphere2__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABallCharacter_C__pf3208112912::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__Sphere2__pf->RelativeLocation = FVector(0.000000, 0.000002, 0.000000);
	bpv__Sphere2__pf->RelativeScale3D = FVector(0.527344, 0.527344, 0.527344);
	if(!bpv__Sphere2__pf->IsTemplate())
	{
		bpv__Sphere2__pf->BodyInstance.FixupData(bpv__Sphere2__pf);
	}
	bpv__EnemyEnergy__pf = 120.000000f;
	bpv__DistanceFromEnemy__pf = 0.000000f;
	bUseControllerRotationPitch = true;
	bUseControllerRotationRoll = true;
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}
void ABallCharacter_C__pf3208112912::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Sphere__pf)
	{
		bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PawnSensing__pf)
	{
		bpv__PawnSensing__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Sphere1__pf)
	{
		bpv__Sphere1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Sphere2__pf)
	{
		bpv__Sphere2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ABallCharacter_C__pf3208112912::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	AssetsToLoad.Add({FName(TEXT("/Engine/BasicShapes/Sphere")), FName(TEXT("Sphere")), FName(TEXT("/Script/Engine")), FName(TEXT("StaticMesh"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Materials/M_Metal_Steel")), FName(TEXT("M_Metal_Steel")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/ICE/M_JaggedRockIce_MeshEmit")), FName(TEXT("M_JaggedRockIce_MeshEmit")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/Lightning/M_JaggedRockLightning_MeshEmit_Lit_INST")), FName(TEXT("M_JaggedRockLightning_MeshEmit_Lit_INST")), FName(TEXT("/Script/Engine")), FName(TEXT("MaterialInstanceConstant"))});
	AssetsToLoad.Add({FName(TEXT("/Game/Rolling/Meshes/BallMesh")), FName(TEXT("BallMesh")), FName(TEXT("/Script/Engine")), FName(TEXT("StaticMesh"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Materials/M_Metal_Burnished_Steel")), FName(TEXT("M_Metal_Burnished_Steel")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/Fire/M_JaggedRockFire_MeshEmit_Lit")), FName(TEXT("M_JaggedRockFire_MeshEmit_Lit")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Materials/M_Metal_Rust")), FName(TEXT("M_Metal_Rust")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Scrap")), FName(TEXT("Scrap")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Materials/M_Metal_Gold")), FName(TEXT("M_Metal_Gold")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Engine/BasicShapes/Cone")), FName(TEXT("Cone")), FName(TEXT("/Script/Engine")), FName(TEXT("StaticMesh"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/ICE/M_JaggedRockIce_MeshEmit_Blue")), FName(TEXT("M_JaggedRockIce_MeshEmit_Blue")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Audio/Explosion_Cue")), FName(TEXT("Explosion_Cue")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundCue"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Particles/P_Explosion")), FName(TEXT("P_Explosion")), FName(TEXT("/Script/Engine")), FName(TEXT("ParticleSystem"))});
	AssetsToLoad.Add({FName(TEXT("/Game/Fonts/Atmosphere/Atmosphere-Regular")), FName(TEXT("Atmosphere-Regular")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Game/Fonts/Atmosphere/Atmosphere-Light")), FName(TEXT("Atmosphere-Light")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Engine/EngineFonts/Roboto")), FName(TEXT("Roboto")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Moving")), FName(TEXT("Moving")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Energy_Critical")), FName(TEXT("Energy_Critical")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Level_Cleared_________________Advance_Stage")), FName(TEXT("Level_Cleared_________________Advance_Stage")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Check_Point")), FName(TEXT("Check_Point")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Ability/Heal/P_Heal_Pickup")), FName(TEXT("P_Heal_Pickup")), FName(TEXT("/Script/Engine")), FName(TEXT("ParticleSystem"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Gobble")), FName(TEXT("Gobble")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/EnergyBall")), FName(TEXT("EnergyBall_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/PhysicsBallBP")), FName(TEXT("PhysicsBallBP_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/MyGameSave")), FName(TEXT("MyGameSave_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/FirstPersonProjectile")), FName(TEXT("FirstPersonProjectile_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/BallCharacter2")), FName(TEXT("BallCharacter2_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/BallCharacter3")), FName(TEXT("BallCharacter3_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/EnemyProjectile")), FName(TEXT("EnemyProjectile_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/CharCamShake")), FName(TEXT("CharCamShake_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/Victory")), FName(TEXT("Victory_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/checkpoint")), FName(TEXT("checkpoint_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/HUDisplay")), FName(TEXT("HUDisplay_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/PauseScreen")), FName(TEXT("PauseScreen_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/Options")), FName(TEXT("Options_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/StartScreen")), FName(TEXT("StartScreen_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/About")), FName(TEXT("About_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/GameOver")), FName(TEXT("GameOver_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
}
struct FRegisterHelper__ABallCharacter_C__pf3208112912
{
	FRegisterHelper__ABallCharacter_C__pf3208112912()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/RollingBP/Blueprints/BallCharacter"), &ABallCharacter_C__pf3208112912::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABallCharacter_C__pf3208112912 Instance;
};
FRegisterHelper__ABallCharacter_C__pf3208112912 FRegisterHelper__ABallCharacter_C__pf3208112912::Instance;
void ABallCharacter_C__pf3208112912::bpf__ExecuteUbergraph_BallCharacter__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 17);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__EnemyEnergy__pf, 0.000000);
	if (!b0l__CallFunc_Less_FloatFloat_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	// optimized KCST_UnconditionalGoto
	static TWeakObjectPtr<UProperty> __Local__14{};
	const UProperty* __Local__13 = __Local__14.Get();
	if (nullptr == __Local__13)
	{
		__Local__13 = (ACharacter::StaticClass())->FindPropertyByName(FName(TEXT("Mesh")));
		check(__Local__13);
		__Local__14 = __Local__13;
	}
	if(IsValid((*(__Local__13->ContainerPtrToValuePtr<USkeletalMeshComponent* >((this), 0)))))
	{
		static TWeakObjectPtr<UProperty> __Local__16{};
		const UProperty* __Local__15 = __Local__16.Get();
		if (nullptr == __Local__15)
		{
			__Local__15 = (ACharacter::StaticClass())->FindPropertyByName(FName(TEXT("Mesh")));
			check(__Local__15);
			__Local__16 = __Local__15;
		}
		b0l__CallFunc_K2_GetComponentToWorld_ReturnValue2__pf = (*(__Local__15->ContainerPtrToValuePtr<USkeletalMeshComponent* >((this), 0)))->K2_GetComponentToWorld();
	}
	b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AEnergyBall_C__pf3208112912::StaticClass(), /*out*/ b0l__CallFunc_K2_GetComponentToWorld_ReturnValue2__pf, ESpawnActorCollisionHandlingMethod::Undefined, nullptr);
	// optimized KCST_UnconditionalGoto
	static TWeakObjectPtr<UProperty> __Local__18{};
	const UProperty* __Local__17 = __Local__18.Get();
	if (nullptr == __Local__17)
	{
		__Local__17 = (ACharacter::StaticClass())->FindPropertyByName(FName(TEXT("Mesh")));
		check(__Local__17);
		__Local__18 = __Local__17;
	}
	if(IsValid((*(__Local__17->ContainerPtrToValuePtr<USkeletalMeshComponent* >((this), 0)))))
	{
		static TWeakObjectPtr<UProperty> __Local__20{};
		const UProperty* __Local__19 = __Local__20.Get();
		if (nullptr == __Local__19)
		{
			__Local__19 = (ACharacter::StaticClass())->FindPropertyByName(FName(TEXT("Mesh")));
			check(__Local__19);
			__Local__20 = __Local__19;
		}
		b0l__CallFunc_K2_GetComponentToWorld_ReturnValue2__pf = (*(__Local__19->ContainerPtrToValuePtr<USkeletalMeshComponent* >((this), 0)))->K2_GetComponentToWorld();
	}
	b0l__CallFunc_FinishSpawningActor_ReturnValue2__pf = CastChecked<AEnergyBall_C__pf3208112912>(UGameplayStatics::FinishSpawningActor(b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf, /*out*/ b0l__CallFunc_K2_GetComponentToWorld_ReturnValue2__pf), ECastCheckedType::NullAllowed);
	K2_DestroyActor();
	return; // KCST_GotoReturn
}
void ABallCharacter_C__pf3208112912::bpf__ExecuteUbergraph_BallCharacter__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 4:
			{
				if(IsValid(bpv__Sphere1__pf))
				{
					b0l__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__Sphere1__pf->K2_GetComponentToWorld();
				}
				b0l__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<AEnemyProjectile_C__pf3208112912>(UGameplayStatics::FinishSpawningActor(b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, /*out*/ b0l__CallFunc_K2_GetComponentToWorld_ReturnValue__pf), ECastCheckedType::NullAllowed);
				CurrentState = -1;
				break;
			}
		case 5:
			{
				if(IsValid(bpv__Sphere1__pf))
				{
					b0l__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__Sphere1__pf->K2_GetComponentToWorld();
				}
				b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AEnemyProjectile_C__pf3208112912::StaticClass(), /*out*/ b0l__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding, nullptr);
				CurrentState = 4;
				break;
			}
		case 6:
			{
				b0l__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpv__DistanceFromEnemy__pf, 15.000000);
				if (!b0l__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = 5;
				break;
			}
		case 7:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate2__pf.BindUFunction(this,FName(TEXT("OnFail_532655CE45AF1C7A41A6F8B8FB1362E7")));
				if(IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf->OnFail.Add(b0l__K2Node_CreateDelegate_OutputDelegate2__pf);
				}
			}
		case 8:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsPhysics_Ball_BP__pf))
				{
					b0l__CallFunc_GetDistanceTo_ReturnValue__pf = b0l__K2Node_DynamicCast_AsPhysics_Ball_BP__pf->GetDistanceTo(this);
				}
				bpv__DistanceFromEnemy__pf = b0l__CallFunc_GetDistanceTo_ReturnValue__pf;
				CurrentState = 6;
				break;
			}
		case 9:
			{
				b0l__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue__pf)
				{
					CurrentState = 8;
					break;
				}
			}
		case 10:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("OnSuccess_532655CE45AF1C7A41A6F8B8FB1362E7")));
				if(IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf->OnSuccess.Add(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
				}
				CurrentState = 7;
				break;
			}
		case 11:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, this, FVector(0.000000,0.000000,0.000000), b0l__K2Node_DynamicCast_AsPhysics_Ball_BP__pf, 5.000000, false);
				CurrentState = 9;
				break;
			}
		case 14:
			{
				b0l__K2Node_DynamicCast_AsPhysics_Ball_BP__pf = Cast<APhysicsBallBP_C__pf3208112912>(b0l__K2Node_ComponentBoundEvent_Pawn__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsPhysics_Ball_BP__pf != nullptr);
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = 11;
				break;
			}
		case 16:
			{
				CurrentState = 14;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void ABallCharacter_C__pf3208112912::bpf__ExecuteUbergraph_BallCharacter__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 12);
	return; // KCST_GotoReturn
}
void ABallCharacter_C__pf3208112912::bpf__ExecuteUbergraph_BallCharacter__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 15);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_byte_Variable__pf = b0l__K2Node_CustomEvent_MovementResult2__pf;
	return; // KCST_GotoReturn
}
void ABallCharacter_C__pf3208112912::bpf__ExecuteUbergraph_BallCharacter__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 20);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_byte_Variable__pf = b0l__K2Node_CustomEvent_MovementResult__pf;
	return; // KCST_GotoReturn
}
void ABallCharacter_C__pf3208112912::bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf)
{
	b0l__K2Node_Event_OtherActor__pf = bpp__OtherActor__pf;
	bpf__ExecuteUbergraph_BallCharacter__pf_2(12);
}
void ABallCharacter_C__pf3208112912::bpf__BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature__pf(APawn* bpp__Pawn__pf)
{
	b0l__K2Node_ComponentBoundEvent_Pawn__pf = bpp__Pawn__pf;
	bpf__ExecuteUbergraph_BallCharacter__pf_1(16);
}
void ABallCharacter_C__pf3208112912::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BallCharacter__pf_0(17);
}
void ABallCharacter_C__pf3208112912::bpf__OnSuccess_532655CE45AF1C7A41A6F8B8FB1362E7__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BallCharacter__pf_4(20);
}
void ABallCharacter_C__pf3208112912::bpf__OnFail_532655CE45AF1C7A41A6F8B8FB1362E7__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult2__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BallCharacter__pf_3(15);
}
void ABallCharacter_C__pf3208112912::bpf__UserConstructionScript__pf()
{
}
