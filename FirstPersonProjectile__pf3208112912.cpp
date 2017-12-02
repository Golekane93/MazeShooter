#include "NativizedAssets.h"
#include "FirstPersonProjectile__pf3208112912.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/GameFramework/ProjectileMovementComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
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
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Animation/VertexAnim/VertexAnimBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
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
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
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
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "FirstPersonProjectile__pf3208112912.h"
#include "BallCharacter2__pf3208112912.h"
#include "BallCharacter__pf3208112912.h"
#include "BallCharacter3__pf3208112912.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationSystem.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationPath.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavMeshBoundsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/GameFramework/GameMode.h"
#include "Runtime/Engine/Classes/GameFramework/GameState.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "DmgTypeBP_Environmental__pf2398200284.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "CharCamShake__pf895046141.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Sound/SoundCue.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "EnergyBall__pf3208112912.h"
#include "PhysicsBallBP__pf3208112912.h"
#include "MyGameSave__pf3208112912.h"
#include "checkpoint__pf3208112912.h"
#include "HUDisplay__pf3208112912.h"
#include "PauseScreen__pf3208112912.h"
#include "Options__pf3208112912.h"
#include "StartScreen__pf3208112912.h"
#include "About__pf3208112912.h"
#include "EnemyProjectile__pf3208112912.h"
#include "Victory__pf3208112912.h"
void AFirstPersonProjectile_C__pf3208112912::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->UsedAssets.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	// List of all referenced converted classes
	extern UClass* Z_Construct_UClass_ABallCharacter2_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ABallCharacter2_C__pf3208112912());
	extern UClass* Z_Construct_UClass_AEnergyBall_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AEnergyBall_C__pf3208112912());
	extern UClass* Z_Construct_UClass_APhysicsBallBP_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_APhysicsBallBP_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UMyGameSave_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UMyGameSave_C__pf3208112912());
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
	extern UClass* Z_Construct_UClass_UCharCamShake_C__pf895046141();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UCharCamShake_C__pf895046141());
	extern UClass* Z_Construct_UClass_ABallCharacter_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ABallCharacter_C__pf3208112912());
	extern UClass* Z_Construct_UClass_AEnemyProjectile_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AEnemyProjectile_C__pf3208112912());
	extern UClass* Z_Construct_UClass_ABallCharacter3_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ABallCharacter3_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UVictory_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UVictory_C__pf3208112912());
	// List of all referenced assets
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/Rolling/Meshes/BallMesh.BallMesh")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/Fire/M_JaggedRockFire_MeshEmit_Lit.M_JaggedRockFire_MeshEmit_Lit")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Engine/BasicShapes/Sphere.Sphere")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Materials/M_Metal_Rust.M_Metal_Rust")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/Lightning/M_JaggedRockLightning_MeshEmit_Lit_INST.M_JaggedRockLightning_MeshEmit_Lit_INST")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/Fonts/Atmosphere/Atmosphere-Light.Atmosphere-Light")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/Fonts/Atmosphere/Atmosphere-Regular.Atmosphere-Regular")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Engine/EngineFonts/Roboto.Roboto")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Moving.Moving")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Check_Point.Check_Point")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Audio/Explosion_Cue.Explosion_Cue")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Energy_Critical.Energy_Critical")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Ability/Heal/P_Heal_Pickup.P_Heal_Pickup")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Gobble.Gobble")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Scrap.Scrap")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/ICE/M_JaggedRockIce_MeshEmit.M_JaggedRockIce_MeshEmit")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/ICE/M_JaggedRockIce_MeshEmit_Blue.M_JaggedRockIce_MeshEmit_Blue")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Particles/P_Explosion.P_Explosion")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Engine/BasicShapes/Cone.Cone")));
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 1);
	__Local__0->ComponentDelegateBindings[0].ComponentPropertyName = FName(TEXT("Projectile"));
	__Local__0->ComponentDelegateBindings[0].DelegatePropertyName = FName(TEXT("OnProjectileBounce"));
	__Local__0->ComponentDelegateBindings[0].FunctionNameToBind = FName(TEXT("BndEvt__Projectile_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature"));
}
AFirstPersonProjectile_C__pf3208112912::AFirstPersonProjectile_C__pf3208112912(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AFirstPersonProjectile_C__pf3208112912::StaticClass() == GetClass()))
	{
		AFirstPersonProjectile_C__pf3208112912::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__CollisionComponent__pf = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
	bpv__Sphere__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	RootComponent = bpv__CollisionComponent__pf;
	bpv__Projectile__pf = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile"));
	bpv__CollisionComponent__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakObjectPtr<UProperty> __Local__2{};
	const UProperty* __Local__1 = __Local__2.Get();
	if (nullptr == __Local__1)
	{
		__Local__1 = (USphereComponent::StaticClass())->FindPropertyByName(FName(TEXT("SphereRadius")));
		check(__Local__1);
		__Local__2 = __Local__1;
	}
	auto& __Local__3 = (*(__Local__1->ContainerPtrToValuePtr<float >((bpv__CollisionComponent__pf), 0)));
	__Local__3 = 20.000000f;
	bpv__CollisionComponent__pf->BodyInstance.ResponseToChannels_DEPRECATED.WorldStatic = ECollisionResponse::ECR_Block;
	bpv__CollisionComponent__pf->BodyInstance.ResponseToChannels_DEPRECATED.WorldDynamic = ECollisionResponse::ECR_Block;
	bpv__CollisionComponent__pf->BodyInstance.ResponseToChannels_DEPRECATED.Pawn = ECollisionResponse::ECR_Block;
	bpv__CollisionComponent__pf->BodyInstance.ResponseToChannels_DEPRECATED.Visibility = ECollisionResponse::ECR_Block;
	bpv__CollisionComponent__pf->BodyInstance.ResponseToChannels_DEPRECATED.Camera = ECollisionResponse::ECR_Block;
	bpv__CollisionComponent__pf->BodyInstance.ResponseToChannels_DEPRECATED.PhysicsBody = ECollisionResponse::ECR_Block;
	bpv__CollisionComponent__pf->BodyInstance.ResponseToChannels_DEPRECATED.Vehicle = ECollisionResponse::ECR_Block;
	bpv__CollisionComponent__pf->BodyInstance.ResponseToChannels_DEPRECATED.Destructible = ECollisionResponse::ECR_Block;
	static TWeakObjectPtr<UProperty> __Local__5{};
	const UProperty* __Local__4 = __Local__5.Get();
	if (nullptr == __Local__4)
	{
		__Local__4 = (FBodyInstance::StaticStruct())->FindPropertyByName(FName(TEXT("CollisionProfileName")));
		check(__Local__4);
		__Local__5 = __Local__4;
	}
	auto& __Local__6 = (*(__Local__4->ContainerPtrToValuePtr<FName >(&(bpv__CollisionComponent__pf->BodyInstance), 0)));
	__Local__6 = FName(TEXT("Destructible"));
	static TWeakObjectPtr<UProperty> __Local__8{};
	const UProperty* __Local__7 = __Local__8.Get();
	if (nullptr == __Local__7)
	{
		__Local__7 = (FBodyInstance::StaticStruct())->FindPropertyByName(FName(TEXT("CollisionResponses")));
		check(__Local__7);
		__Local__8 = __Local__7;
	}
	auto& __Local__9 = (*(__Local__7->ContainerPtrToValuePtr<FCollisionResponse >(&(bpv__CollisionComponent__pf->BodyInstance), 0)));
	static TWeakObjectPtr<UProperty> __Local__11{};
	const UProperty* __Local__10 = __Local__11.Get();
	if (nullptr == __Local__10)
	{
		__Local__10 = (FCollisionResponse::StaticStruct())->FindPropertyByName(FName(TEXT("ResponseArray")));
		check(__Local__10);
		__Local__11 = __Local__10;
	}
	auto& __Local__12 = (*(__Local__10->ContainerPtrToValuePtr<TArray<FResponseChannel> >(&(__Local__9), 0)));
	__Local__12 = TArray<FResponseChannel> ();
	bpv__CollisionComponent__pf->BodyInstance.bNotifyRigidBodyCollision = true;
	static TWeakObjectPtr<UProperty> __Local__14{};
	const UProperty* __Local__13 = __Local__14.Get();
	if (nullptr == __Local__13)
	{
		__Local__13 = (FBodyInstance::StaticStruct())->FindPropertyByName(FName(TEXT("bOverrideWalkableSlopeOnInstance")));
		check(__Local__13);
		__Local__14 = __Local__13;
	}
	(((UBoolProperty*)__Local__13)->SetPropertyValue_InContainer(&(bpv__CollisionComponent__pf->BodyInstance), true, 0));
	static TWeakObjectPtr<UProperty> __Local__16{};
	const UProperty* __Local__15 = __Local__16.Get();
	if (nullptr == __Local__15)
	{
		__Local__15 = (FBodyInstance::StaticStruct())->FindPropertyByName(FName(TEXT("MassInKgOverride")));
		check(__Local__15);
		__Local__16 = __Local__15;
	}
	auto& __Local__17 = (*(__Local__15->ContainerPtrToValuePtr<float >(&(bpv__CollisionComponent__pf->BodyInstance), 0)));
	__Local__17 = 13.927586f;
	static TWeakObjectPtr<UProperty> __Local__19{};
	const UProperty* __Local__18 = __Local__19.Get();
	if (nullptr == __Local__18)
	{
		__Local__18 = (FBodyInstance::StaticStruct())->FindPropertyByName(FName(TEXT("WalkableSlopeOverride")));
		check(__Local__18);
		__Local__19 = __Local__18;
	}
	auto& __Local__20 = (*(__Local__18->ContainerPtrToValuePtr<FWalkableSlopeOverride >(&(bpv__CollisionComponent__pf->BodyInstance), 0)));
	__Local__20.WalkableSlopeBehavior = EWalkableSlopeBehavior::WalkableSlope_Unwalkable;
	static TWeakObjectPtr<UProperty> __Local__22{};
	const UProperty* __Local__21 = __Local__22.Get();
	if (nullptr == __Local__21)
	{
		__Local__21 = (FBodyInstance::StaticStruct())->FindPropertyByName(FName(TEXT("CollisionEnabled")));
		check(__Local__21);
		__Local__22 = __Local__21;
	}
	auto& __Local__23 = (*(__Local__21->ContainerPtrToValuePtr<TEnumAsByte<ECollisionEnabled::Type> >(&(bpv__CollisionComponent__pf->BodyInstance), 0)));
	__Local__23 = ECollisionEnabled::QueryAndPhysics;
	static TWeakObjectPtr<UProperty> __Local__25{};
	const UProperty* __Local__24 = __Local__25.Get();
	if (nullptr == __Local__24)
	{
		__Local__24 = (FBodyInstance::StaticStruct())->FindPropertyByName(FName(TEXT("ObjectType")));
		check(__Local__24);
		__Local__25 = __Local__24;
	}
	auto& __Local__26 = (*(__Local__24->ContainerPtrToValuePtr<TEnumAsByte<ECollisionChannel> >(&(bpv__CollisionComponent__pf->BodyInstance), 0)));
	__Local__26 = ECollisionChannel::ECC_Destructible;
	if(!bpv__CollisionComponent__pf->IsTemplate())
	{
		bpv__CollisionComponent__pf->BodyInstance.FixupData(bpv__CollisionComponent__pf);
	}
	bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere__pf->AttachToComponent(bpv__CollisionComponent__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Sphere__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AFirstPersonProjectile_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Sphere__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Sphere__pf->OverrideMaterials.Reserve(1);
	bpv__Sphere__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AFirstPersonProjectile_C__pf3208112912::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__Sphere__pf->BodyInstance.ResponseToChannels_DEPRECATED.Visibility = ECollisionResponse::ECR_Ignore;
	bpv__Sphere__pf->BodyInstance.ResponseToChannels_DEPRECATED.Camera = ECollisionResponse::ECR_Ignore;
	auto& __Local__27 = (*(__Local__4->ContainerPtrToValuePtr<FName >(&(bpv__Sphere__pf->BodyInstance), 0)));
	__Local__27 = FName(TEXT("NoCollision"));
	auto& __Local__28 = (*(__Local__7->ContainerPtrToValuePtr<FCollisionResponse >(&(bpv__Sphere__pf->BodyInstance), 0)));
	auto& __Local__29 = (*(__Local__10->ContainerPtrToValuePtr<TArray<FResponseChannel> >(&(__Local__28), 0)));
	__Local__29 = TArray<FResponseChannel> ();
	__Local__29.AddUninitialized(2);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__29.GetData(), 2);
	__Local__29[0].Channel = FName(TEXT("Visibility"));
	__Local__29[0].Response = ECollisionResponse::ECR_Ignore;
	__Local__29[1].Channel = FName(TEXT("Camera"));
	__Local__29[1].Response = ECollisionResponse::ECR_Ignore;
	bpv__Sphere__pf->BodyInstance.bAutoWeld = false;
	auto& __Local__30 = (*(__Local__15->ContainerPtrToValuePtr<float >(&(bpv__Sphere__pf->BodyInstance), 0)));
	__Local__30 = 1499.092041f;
	auto& __Local__31 = (*(__Local__21->ContainerPtrToValuePtr<TEnumAsByte<ECollisionEnabled::Type> >(&(bpv__Sphere__pf->BodyInstance), 0)));
	__Local__31 = ECollisionEnabled::NoCollision;
	auto& __Local__32 = (*(__Local__24->ContainerPtrToValuePtr<TEnumAsByte<ECollisionChannel> >(&(bpv__Sphere__pf->BodyInstance), 0)));
	__Local__32 = ECollisionChannel::ECC_WorldStatic;
	bpv__Sphere__pf->RelativeLocation = FVector(0.000000, 0.000000, 0.893873);
	bpv__Sphere__pf->RelativeScale3D = FVector(0.244141, 0.244141, 0.244141);
	if(!bpv__Sphere__pf->IsTemplate())
	{
		bpv__Sphere__pf->BodyInstance.FixupData(bpv__Sphere__pf);
	}
	bpv__Projectile__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Projectile__pf->InitialSpeed = 15000.000000f;
	bpv__Projectile__pf->MaxSpeed = 15000.000000f;
	bpv__Projectile__pf->bShouldBounce = true;
	bpv__Projectile__pf->Velocity = FVector(3000.000000, 0.000000, 0.000000);
	InitialLifeSpan = 3.000000f;
}
void AFirstPersonProjectile_C__pf3208112912::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__CollisionComponent__pf)
	{
		bpv__CollisionComponent__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Sphere__pf)
	{
		bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Projectile__pf)
	{
		bpv__Projectile__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void AFirstPersonProjectile_C__pf3208112912::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	AssetsToLoad.Add({FName(TEXT("/Game/Rolling/Meshes/BallMesh")), FName(TEXT("BallMesh")), FName(TEXT("/Script/Engine")), FName(TEXT("StaticMesh"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/Fire/M_JaggedRockFire_MeshEmit_Lit")), FName(TEXT("M_JaggedRockFire_MeshEmit_Lit")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Engine/BasicShapes/Sphere")), FName(TEXT("Sphere")), FName(TEXT("/Script/Engine")), FName(TEXT("StaticMesh"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Materials/M_Metal_Rust")), FName(TEXT("M_Metal_Rust")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/Lightning/M_JaggedRockLightning_MeshEmit_Lit_INST")), FName(TEXT("M_JaggedRockLightning_MeshEmit_Lit_INST")), FName(TEXT("/Script/Engine")), FName(TEXT("MaterialInstanceConstant"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Materials/M_Metal_Burnished_Steel")), FName(TEXT("M_Metal_Burnished_Steel")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/Fonts/Atmosphere/Atmosphere-Light")), FName(TEXT("Atmosphere-Light")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Game/Fonts/Atmosphere/Atmosphere-Regular")), FName(TEXT("Atmosphere-Regular")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Engine/EngineFonts/Roboto")), FName(TEXT("Roboto")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Moving")), FName(TEXT("Moving")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Check_Point")), FName(TEXT("Check_Point")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Audio/Explosion_Cue")), FName(TEXT("Explosion_Cue")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundCue"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Energy_Critical")), FName(TEXT("Energy_Critical")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Ability/Heal/P_Heal_Pickup")), FName(TEXT("P_Heal_Pickup")), FName(TEXT("/Script/Engine")), FName(TEXT("ParticleSystem"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Gobble")), FName(TEXT("Gobble")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Scrap")), FName(TEXT("Scrap")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Materials/M_Metal_Steel")), FName(TEXT("M_Metal_Steel")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/ICE/M_JaggedRockIce_MeshEmit")), FName(TEXT("M_JaggedRockIce_MeshEmit")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/ICE/M_JaggedRockIce_MeshEmit_Blue")), FName(TEXT("M_JaggedRockIce_MeshEmit_Blue")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Particles/P_Explosion")), FName(TEXT("P_Explosion")), FName(TEXT("/Script/Engine")), FName(TEXT("ParticleSystem"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Materials/M_Metal_Gold")), FName(TEXT("M_Metal_Gold")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Engine/BasicShapes/Cone")), FName(TEXT("Cone")), FName(TEXT("/Script/Engine")), FName(TEXT("StaticMesh"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/BallCharacter2")), FName(TEXT("BallCharacter2_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/EnergyBall")), FName(TEXT("EnergyBall_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/PhysicsBallBP")), FName(TEXT("PhysicsBallBP_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/MyGameSave")), FName(TEXT("MyGameSave_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/checkpoint")), FName(TEXT("checkpoint_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/HUDisplay")), FName(TEXT("HUDisplay_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/PauseScreen")), FName(TEXT("PauseScreen_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/Options")), FName(TEXT("Options_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/StartScreen")), FName(TEXT("StartScreen_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/About")), FName(TEXT("About_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/CharCamShake")), FName(TEXT("CharCamShake_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/BallCharacter")), FName(TEXT("BallCharacter_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/EnemyProjectile")), FName(TEXT("EnemyProjectile_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/BallCharacter3")), FName(TEXT("BallCharacter3_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/Victory")), FName(TEXT("Victory_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
}
struct FRegisterHelper__AFirstPersonProjectile_C__pf3208112912
{
	FRegisterHelper__AFirstPersonProjectile_C__pf3208112912()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/RollingBP/Blueprints/FirstPersonProjectile"), &AFirstPersonProjectile_C__pf3208112912::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AFirstPersonProjectile_C__pf3208112912 Instance;
};
FRegisterHelper__AFirstPersonProjectile_C__pf3208112912 FRegisterHelper__AFirstPersonProjectile_C__pf3208112912::Instance;
void AFirstPersonProjectile_C__pf3208112912::bpf__ExecuteUbergraph_FirstPersonProjectile__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				b0l__CallFunc_K2_GetActorLocation_ReturnValue2__pf = K2_GetActorLocation();
				b0l__CallFunc_SpawnEmitterAtLocation_ReturnValue2__pf = UGameplayStatics::SpawnEmitterAtLocation(this, CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(AFirstPersonProjectile_C__pf3208112912::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed), b0l__CallFunc_K2_GetActorLocation_ReturnValue2__pf, FRotator(0.000000,0.000000,0.000000), true);
			}
		case 2:
			{
				b0l__CallFunc_K2_GetActorLocation_ReturnValue2__pf = K2_GetActorLocation();
				UGameplayStatics::PlayWorldCameraShake(this, UCharCamShake_C__pf895046141::StaticClass(), b0l__CallFunc_K2_GetActorLocation_ReturnValue2__pf, 0.000000, 0.000000, 1.000000, true);
			}
		case 3:
			{
				K2_DestroyActor();
				CurrentState = -1;
				break;
			}
		case 4:
			{
				float __Local__33 = 0.000000;
				b0l__CallFunc_Subtract_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Subtract_FloatFloat(((IsValid(b0l__K2Node_DynamicCast_AsBall_Character_2__pf)) ? (b0l__K2Node_DynamicCast_AsBall_Character_2__pf->bpv__EnemyEnergy__pf) : (__Local__33)), 50.000000);
				if(IsValid(b0l__K2Node_DynamicCast_AsBall_Character_2__pf))
				{
					b0l__K2Node_DynamicCast_AsBall_Character_2__pf->bpv__EnemyEnergy__pf = b0l__CallFunc_Subtract_FloatFloat_ReturnValue3__pf;
				}
			}
		case 5:
			{
				b0l__CallFunc_K2_GetActorLocation_ReturnValue2__pf = K2_GetActorLocation();
				UGameplayStatics::PlaySoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AFirstPersonProjectile_C__pf3208112912::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed), b0l__CallFunc_K2_GetActorLocation_ReturnValue2__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, nullptr, nullptr);
				CurrentState = 1;
				break;
			}
		case 6:
			{
				UGameplayStatics::BreakHitResult(/*out*/ b0l__K2Node_ComponentBoundEvent_ImpactResult__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				if(IsValid(b0l__CallFunc_BreakHitResult_HitComponent__pf))
				{
					b0l__CallFunc_GetOwner_ReturnValue__pf = b0l__CallFunc_BreakHitResult_HitComponent__pf->GetOwner();
				}
				b0l__K2Node_DynamicCast_AsBall_Character_2__pf = Cast<ABallCharacter2_C__pf3208112912>(b0l__CallFunc_GetOwner_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsBall_Character_2__pf != nullptr);
				if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
				{
					CurrentState = 7;
					break;
				}
				CurrentState = 4;
				break;
			}
		case 7:
			{
				UGameplayStatics::BreakHitResult(/*out*/ b0l__K2Node_ComponentBoundEvent_ImpactResult__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				if(IsValid(b0l__CallFunc_BreakHitResult_HitComponent__pf))
				{
					b0l__CallFunc_GetOwner_ReturnValue__pf = b0l__CallFunc_BreakHitResult_HitComponent__pf->GetOwner();
				}
				b0l__K2Node_DynamicCast_AsBall_Character_3__pf = Cast<ABallCharacter3_C__pf3208112912>(b0l__CallFunc_GetOwner_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBall_Character_3__pf != nullptr);
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 8:
			{
				float __Local__34 = 0.000000;
				b0l__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(((IsValid(b0l__K2Node_DynamicCast_AsBall_Character_3__pf)) ? (b0l__K2Node_DynamicCast_AsBall_Character_3__pf->bpv__EnemyEnergy__pf) : (__Local__34)), 200.000000);
				b0l__CallFunc_Conv_FloatToString_ReturnValue__pf = UKismetStringLibrary::Conv_FloatToString(b0l__CallFunc_Subtract_FloatFloat_ReturnValue__pf);
				UKismetSystemLibrary::PrintString(this, b0l__CallFunc_Conv_FloatToString_ReturnValue__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 9:
			{
				float __Local__35 = 0.000000;
				b0l__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(((IsValid(b0l__K2Node_DynamicCast_AsBall_Character_3__pf)) ? (b0l__K2Node_DynamicCast_AsBall_Character_3__pf->bpv__EnemyEnergy__pf) : (__Local__35)), 200.000000);
				if(IsValid(b0l__K2Node_DynamicCast_AsBall_Character_3__pf))
				{
					b0l__K2Node_DynamicCast_AsBall_Character_3__pf->bpv__EnemyEnergy__pf = b0l__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
				}
				CurrentState = 5;
				break;
			}
		case 10:
			{
				float __Local__36 = 0.000000;
				b0l__CallFunc_Subtract_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Subtract_FloatFloat(((IsValid(b0l__K2Node_DynamicCast_AsBall_Character__pf)) ? (b0l__K2Node_DynamicCast_AsBall_Character__pf->bpv__EnemyEnergy__pf) : (__Local__36)), 40.000000);
				if(IsValid(b0l__K2Node_DynamicCast_AsBall_Character__pf))
				{
					b0l__K2Node_DynamicCast_AsBall_Character__pf->bpv__EnemyEnergy__pf = b0l__CallFunc_Subtract_FloatFloat_ReturnValue2__pf;
				}
				CurrentState = 5;
				break;
			}
		case 11:
			{
				UGameplayStatics::BreakHitResult(/*out*/ b0l__K2Node_ComponentBoundEvent_ImpactResult__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				if(IsValid(b0l__CallFunc_BreakHitResult_HitComponent__pf))
				{
					b0l__CallFunc_GetOwner_ReturnValue__pf = b0l__CallFunc_BreakHitResult_HitComponent__pf->GetOwner();
				}
				b0l__K2Node_DynamicCast_AsBall_Character__pf = Cast<ABallCharacter_C__pf3208112912>(b0l__CallFunc_GetOwner_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsBall_Character__pf != nullptr);
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					CurrentState = 6;
					break;
				}
				CurrentState = 10;
				break;
			}
		case 17:
			{
				CurrentState = 11;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AFirstPersonProjectile_C__pf3208112912::bpf__ExecuteUbergraph_FirstPersonProjectile__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 18);
	// optimized KCST_UnconditionalGoto
	if(IsValid(b0l__K2Node_Event_OtherComp__pf))
	{
		b0l__CallFunc_IsSimulatingPhysics_ReturnValue__pf = b0l__K2Node_Event_OtherComp__pf->IsSimulatingPhysics(FName(TEXT("None")));
	}
	if (!b0l__CallFunc_IsSimulatingPhysics_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_K2_GetActorLocation_ReturnValue__pf = K2_GetActorLocation();
	b0l__CallFunc_GetVelocity_ReturnValue__pf = GetVelocity();
	b0l__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(b0l__CallFunc_GetVelocity_ReturnValue__pf, 100.000000);
	if(IsValid(b0l__K2Node_Event_OtherComp__pf))
	{
		b0l__K2Node_Event_OtherComp__pf->AddImpulseAtLocation(b0l__CallFunc_Multiply_VectorFloat_ReturnValue__pf, b0l__CallFunc_K2_GetActorLocation_ReturnValue__pf, FName(TEXT("None")));
	}
	b0l__CallFunc_K2_GetActorLocation_ReturnValue__pf = K2_GetActorLocation();
	UGameplayStatics::PlaySoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AFirstPersonProjectile_C__pf3208112912::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed), b0l__CallFunc_K2_GetActorLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, nullptr, nullptr);
	b0l__CallFunc_K2_GetActorLocation_ReturnValue__pf = K2_GetActorLocation();
	b0l__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf = UGameplayStatics::SpawnEmitterAtLocation(this, CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(AFirstPersonProjectile_C__pf3208112912::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed), b0l__CallFunc_K2_GetActorLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), true);
	K2_DestroyActor();
	return; // KCST_GotoReturn
}
void AFirstPersonProjectile_C__pf3208112912::bpf__BndEvt__Projectile_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature__pf(/*out*/ FHitResult const& bpp__ImpactResult__pf, /*out*/ FVector const& bpp__ImpactVelocity__pf)
{
	b0l__K2Node_ComponentBoundEvent_ImpactResult__pf = bpp__ImpactResult__pf;
	b0l__K2Node_ComponentBoundEvent_ImpactVelocity__pf = bpp__ImpactVelocity__pf;
	bpf__ExecuteUbergraph_FirstPersonProjectile__pf_0(17);
}
void AFirstPersonProjectile_C__pf3208112912::bpf__ReceiveHit__pf(UPrimitiveComponent* bpp__MyComp__pf, AActor* bpp__Other__pf, UPrimitiveComponent* bpp__OtherComp__pf, bool bpp__bSelfMoved__pf, FVector bpp__HitLocation__pf, FVector bpp__HitNormal__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf)
{
	b0l__K2Node_Event_MyComp__pf = bpp__MyComp__pf;
	b0l__K2Node_Event_Other__pf = bpp__Other__pf;
	b0l__K2Node_Event_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_Event_bSelfMoved__pf = bpp__bSelfMoved__pf;
	b0l__K2Node_Event_HitLocation__pf = bpp__HitLocation__pf;
	b0l__K2Node_Event_HitNormal__pf = bpp__HitNormal__pf;
	b0l__K2Node_Event_NormalImpulse__pf = bpp__NormalImpulse__pf;
	b0l__K2Node_Event_Hit__pf = bpp__Hit__pf;
	bpf__ExecuteUbergraph_FirstPersonProjectile__pf_1(18);
}
void AFirstPersonProjectile_C__pf3208112912::bpf__UserConstructionScript__pf()
{
}
