#include "NativizedAssets.h"
#include "BallCharacter3__pf3208112912.h"
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
#include "Runtime/Engine/Classes/Components/SpotLightComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "BallCharacter3__pf3208112912.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
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
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "EnemyProjectile__pf3208112912.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "PhysicsBallBP__pf3208112912.h"
#include "Victory__pf3208112912.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
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
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/GameFramework/GameMode.h"
#include "Runtime/Engine/Classes/GameFramework/GameState.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "DmgTypeBP_Environmental__pf2398200284.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "FirstPersonProjectile__pf3208112912.h"
#include "BallCharacter2__pf3208112912.h"
#include "EnergyBall__pf3208112912.h"
#include "BallCharacter__pf3208112912.h"
#include "CharCamShake__pf895046141.h"
#include "MyGameSave__pf3208112912.h"
#include "checkpoint__pf3208112912.h"
#include "HUDisplay__pf3208112912.h"
#include "PauseScreen__pf3208112912.h"
#include "Options__pf3208112912.h"
#include "StartScreen__pf3208112912.h"
#include "About__pf3208112912.h"
void ABallCharacter3_C__pf3208112912::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->UsedAssets.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	// List of all referenced converted classes
	extern UClass* Z_Construct_UClass_AEnemyProjectile_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AEnemyProjectile_C__pf3208112912());
	extern UClass* Z_Construct_UClass_APhysicsBallBP_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_APhysicsBallBP_C__pf3208112912());
	extern UClass* Z_Construct_UClass_AFirstPersonProjectile_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AFirstPersonProjectile_C__pf3208112912());
	extern UClass* Z_Construct_UClass_ABallCharacter2_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ABallCharacter2_C__pf3208112912());
	extern UClass* Z_Construct_UClass_AEnergyBall_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AEnergyBall_C__pf3208112912());
	extern UClass* Z_Construct_UClass_ABallCharacter_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ABallCharacter_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UCharCamShake_C__pf895046141();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UCharCamShake_C__pf895046141());
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
	extern UClass* Z_Construct_UClass_UVictory_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UVictory_C__pf3208112912());
	// List of all referenced assets
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Engine/BasicShapes/Sphere.Sphere")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/ICE/M_JaggedRockIce_MeshEmit.M_JaggedRockIce_MeshEmit")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Engine/BasicShapes/Cone.Cone")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/Rolling/Meshes/BallMesh.BallMesh")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/ICE/M_JaggedRockIce_MeshEmit_Blue.M_JaggedRockIce_MeshEmit_Blue")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/Fire/M_JaggedRockFire_MeshEmit_Lit.M_JaggedRockFire_MeshEmit_Lit")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Materials/M_Metal_Rust.M_Metal_Rust")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/Lightning/M_JaggedRockLightning_MeshEmit_Lit_INST.M_JaggedRockLightning_MeshEmit_Lit_INST")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Ability/Heal/P_Heal_Pickup.P_Heal_Pickup")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Gobble.Gobble")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Scrap.Scrap")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Particles/P_Explosion.P_Explosion")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Audio/Explosion_Cue.Explosion_Cue")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/Fonts/Atmosphere/Atmosphere-Light.Atmosphere-Light")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/Fonts/Atmosphere/Atmosphere-Regular.Atmosphere-Regular")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Engine/EngineFonts/Roboto.Roboto")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Moving.Moving")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Check_Point.Check_Point")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Energy_Critical.Energy_Critical")));
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 1);
	__Local__0->ComponentDelegateBindings[0].ComponentPropertyName = FName(TEXT("PawnSensing"));
	__Local__0->ComponentDelegateBindings[0].DelegatePropertyName = FName(TEXT("OnSeePawn"));
	__Local__0->ComponentDelegateBindings[0].FunctionNameToBind = FName(TEXT("BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature"));
}
ABallCharacter3_C__pf3208112912::ABallCharacter3_C__pf3208112912(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABallCharacter3_C__pf3208112912::StaticClass() == GetClass()))
	{
		ABallCharacter3_C__pf3208112912::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__1 = CastChecked<UCapsuleComponent>(GetDefaultSubobjectByName(TEXT("CollisionCylinder")));
	auto __Local__2 = CastChecked<UCharacterMovementComponent>(GetDefaultSubobjectByName(TEXT("CharMoveComp")));
	auto __Local__3 = CastChecked<USkeletalMeshComponent>(GetDefaultSubobjectByName(TEXT("CharacterMesh0")));
	bpv__Sphere__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	bpv__PawnSensing__pf = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
	bpv__Sphere1__pf = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere1"));
	bpv__Sphere2__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere2"));
	bpv__Sphere4__pf = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere4"));
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	bpv__Sphere5__pf = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere5"));
	bpv__StaticMesh2__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh2"));
	bpv__Cone__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cone"));
	bpv__SpotLight__pf = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight"));
	bpv__SpotLight1__pf = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight1"));
	bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere__pf->AttachToComponent(__Local__1, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Sphere__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABallCharacter3_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Sphere__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Sphere__pf->OverrideMaterials.Reserve(1);
	bpv__Sphere__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABallCharacter3_C__pf3208112912::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__Sphere__pf->RelativeLocation = FVector(0.000000, 0.000000, 220.000000);
	bpv__Sphere__pf->RelativeScale3D = FVector(5.181560, 5.181560, 5.181560);
	if(!bpv__Sphere__pf->IsTemplate())
	{
		bpv__Sphere__pf->BodyInstance.FixupData(bpv__Sphere__pf);
	}
	bpv__PawnSensing__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakObjectPtr<UProperty> __Local__5{};
	const UProperty* __Local__4 = __Local__5.Get();
	if (nullptr == __Local__4)
	{
		__Local__4 = (UPawnSensingComponent::StaticClass())->FindPropertyByName(FName(TEXT("PeripheralVisionAngle")));
		check(__Local__4);
		__Local__5 = __Local__4;
	}
	auto& __Local__6 = (*(__Local__4->ContainerPtrToValuePtr<float >((bpv__PawnSensing__pf), 0)));
	__Local__6 = 180.000000f;
	bpv__Sphere1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere1__pf->AttachToComponent(__Local__1, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Sphere1__pf->RelativeLocation = FVector(70.000000, 360.000000, 260.000000);
	bpv__Sphere1__pf->RelativeScale3D = FVector(3.667083, 3.667083, 3.667083);
	if(!bpv__Sphere1__pf->IsTemplate())
	{
		bpv__Sphere1__pf->BodyInstance.FixupData(bpv__Sphere1__pf);
	}
	bpv__Sphere2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere2__pf->AttachToComponent(bpv__Sphere1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Sphere2__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABallCharacter3_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Sphere2__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Sphere2__pf->OverrideMaterials.Reserve(1);
	bpv__Sphere2__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABallCharacter3_C__pf3208112912::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__Sphere2__pf->RelativeScale3D = FVector(0.496592, 0.496592, 0.496592);
	if(!bpv__Sphere2__pf->IsTemplate())
	{
		bpv__Sphere2__pf->BodyInstance.FixupData(bpv__Sphere2__pf);
	}
	bpv__Sphere4__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere4__pf->AttachToComponent(__Local__1, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Sphere4__pf->RelativeLocation = FVector(0.000000, 0.000000, 640.000000);
	bpv__Sphere4__pf->RelativeScale3D = FVector(2.002716, 2.002716, 2.002716);
	if(!bpv__Sphere4__pf->IsTemplate())
	{
		bpv__Sphere4__pf->BodyInstance.FixupData(bpv__Sphere4__pf);
	}
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->AttachToComponent(bpv__Sphere4__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABallCharacter3_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABallCharacter3_C__pf3208112912::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__StaticMesh__pf->RelativeScale3D = FVector(0.527344, 0.527344, 0.527344);
	if(!bpv__StaticMesh__pf->IsTemplate())
	{
		bpv__StaticMesh__pf->BodyInstance.FixupData(bpv__StaticMesh__pf);
	}
	bpv__Sphere5__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere5__pf->AttachToComponent(__Local__1, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Sphere5__pf->RelativeLocation = FVector(70.000000, -360.000000, 260.000000);
	bpv__Sphere5__pf->RelativeScale3D = FVector(2.933666, 2.933666, 2.933666);
	if(!bpv__Sphere5__pf->IsTemplate())
	{
		bpv__Sphere5__pf->BodyInstance.FixupData(bpv__Sphere5__pf);
	}
	bpv__StaticMesh2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh2__pf->AttachToComponent(bpv__Sphere5__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh2__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABallCharacter3_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh2__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh2__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh2__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABallCharacter3_C__pf3208112912::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__StaticMesh2__pf->RelativeScale3D = FVector(0.527344, 0.527344, 0.527344);
	if(!bpv__StaticMesh2__pf->IsTemplate())
	{
		bpv__StaticMesh2__pf->BodyInstance.FixupData(bpv__StaticMesh2__pf);
	}
	bpv__Cone__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Cone__pf->AttachToComponent(__Local__1, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Cone__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABallCharacter3_C__pf3208112912::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__Cone__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Cone__pf->OverrideMaterials.Reserve(1);
	bpv__Cone__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABallCharacter3_C__pf3208112912::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__Cone__pf->RelativeLocation = FVector(0.001588, -0.000257, 560.000000);
	bpv__Cone__pf->RelativeRotation = FRotator(0.000253, -179.999893, -179.999954);
	bpv__Cone__pf->RelativeScale3D = FVector(0.825176, 1.289338, 0.328158);
	if(!bpv__Cone__pf->IsTemplate())
	{
		bpv__Cone__pf->BodyInstance.FixupData(bpv__Cone__pf);
	}
	bpv__SpotLight__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SpotLight__pf->AttachToComponent(__Local__1, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SpotLight__pf->OuterConeAngle = 30.715597f;
	bpv__SpotLight__pf->AttenuationRadius = 1068.136353f;
	bpv__SpotLight__pf->SourceRadius = 703.635803f;
	bpv__SpotLight__pf->LightGuid = FGuid(0xB8DF6F70, 0x4B4B7CA3, 0x4D7E67A6, 0x55413AF2);
	bpv__SpotLight__pf->Intensity = 100000.000000f;
	bpv__SpotLight__pf->LightColor = FColor(35, 255, 0, 255);
	bpv__SpotLight__pf->bPrecomputedLightingIsValid = false;
	bpv__SpotLight__pf->RelativeLocation = FVector(470.000000, 0.000000, 710.000000);
	bpv__SpotLight__pf->RelativeRotation = FRotator(-40.000511, 179.999939, 179.999954);
	bpv__SpotLight1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SpotLight1__pf->AttachToComponent(__Local__1, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SpotLight1__pf->InnerConeAngle = 15.495413f;
	bpv__SpotLight1__pf->OuterConeAngle = 29.990812f;
	bpv__SpotLight1__pf->AttenuationRadius = 1068.136353f;
	bpv__SpotLight1__pf->SourceRadius = 804.050293f;
	bpv__SpotLight1__pf->SourceLength = 0.366612f;
	bpv__SpotLight1__pf->Temperature = 12000.000000f;
	bpv__SpotLight1__pf->bUseTemperature = true;
	bpv__SpotLight1__pf->LightGuid = FGuid(0x1DBE11C6, 0x42879CD6, 0xADF4028F, 0xD436BF97);
	bpv__SpotLight1__pf->Intensity = 100000.000000f;
	bpv__SpotLight1__pf->LightColor = FColor(35, 255, 0, 255);
	bpv__SpotLight1__pf->bPrecomputedLightingIsValid = false;
	bpv__SpotLight1__pf->RelativeLocation = FVector(470.000000, 0.000000, 710.000000);
	bpv__SpotLight1__pf->RelativeRotation = FRotator(-40.000511, 179.999939, 179.999954);
	bpv__EnemyEnergy__pf = 12000.000000f;
	bpv__DistanceFromEnemy__pf = 0.000000f;
	bpv__SaveSub__pf = nullptr;
	bUseControllerRotationPitch = true;
	bUseControllerRotationRoll = true;
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}
void ABallCharacter3_C__pf3208112912::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
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
	if(bpv__Sphere4__pf)
	{
		bpv__Sphere4__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh__pf)
	{
		bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Sphere5__pf)
	{
		bpv__Sphere5__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh2__pf)
	{
		bpv__StaticMesh2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Cone__pf)
	{
		bpv__Cone__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SpotLight__pf)
	{
		bpv__SpotLight__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SpotLight1__pf)
	{
		bpv__SpotLight1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ABallCharacter3_C__pf3208112912::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	AssetsToLoad.Add({FName(TEXT("/Engine/BasicShapes/Sphere")), FName(TEXT("Sphere")), FName(TEXT("/Script/Engine")), FName(TEXT("StaticMesh"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Materials/M_Metal_Gold")), FName(TEXT("M_Metal_Gold")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/ICE/M_JaggedRockIce_MeshEmit")), FName(TEXT("M_JaggedRockIce_MeshEmit")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Engine/BasicShapes/Cone")), FName(TEXT("Cone")), FName(TEXT("/Script/Engine")), FName(TEXT("StaticMesh"))});
	AssetsToLoad.Add({FName(TEXT("/Game/Rolling/Meshes/BallMesh")), FName(TEXT("BallMesh")), FName(TEXT("/Script/Engine")), FName(TEXT("StaticMesh"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/ICE/M_JaggedRockIce_MeshEmit_Blue")), FName(TEXT("M_JaggedRockIce_MeshEmit_Blue")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Materials/M_Metal_Burnished_Steel")), FName(TEXT("M_Metal_Burnished_Steel")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/Fire/M_JaggedRockFire_MeshEmit_Lit")), FName(TEXT("M_JaggedRockFire_MeshEmit_Lit")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Materials/M_Metal_Rust")), FName(TEXT("M_Metal_Rust")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/Lightning/M_JaggedRockLightning_MeshEmit_Lit_INST")), FName(TEXT("M_JaggedRockLightning_MeshEmit_Lit_INST")), FName(TEXT("/Script/Engine")), FName(TEXT("MaterialInstanceConstant"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Ability/Heal/P_Heal_Pickup")), FName(TEXT("P_Heal_Pickup")), FName(TEXT("/Script/Engine")), FName(TEXT("ParticleSystem"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Gobble")), FName(TEXT("Gobble")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Scrap")), FName(TEXT("Scrap")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Materials/M_Metal_Steel")), FName(TEXT("M_Metal_Steel")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Particles/P_Explosion")), FName(TEXT("P_Explosion")), FName(TEXT("/Script/Engine")), FName(TEXT("ParticleSystem"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Audio/Explosion_Cue")), FName(TEXT("Explosion_Cue")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundCue"))});
	AssetsToLoad.Add({FName(TEXT("/Game/Fonts/Atmosphere/Atmosphere-Light")), FName(TEXT("Atmosphere-Light")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Game/Fonts/Atmosphere/Atmosphere-Regular")), FName(TEXT("Atmosphere-Regular")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Engine/EngineFonts/Roboto")), FName(TEXT("Roboto")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Moving")), FName(TEXT("Moving")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Check_Point")), FName(TEXT("Check_Point")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Energy_Critical")), FName(TEXT("Energy_Critical")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/EnemyProjectile")), FName(TEXT("EnemyProjectile_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/PhysicsBallBP")), FName(TEXT("PhysicsBallBP_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/FirstPersonProjectile")), FName(TEXT("FirstPersonProjectile_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/BallCharacter2")), FName(TEXT("BallCharacter2_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/EnergyBall")), FName(TEXT("EnergyBall_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/BallCharacter")), FName(TEXT("BallCharacter_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/CharCamShake")), FName(TEXT("CharCamShake_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/MyGameSave")), FName(TEXT("MyGameSave_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/checkpoint")), FName(TEXT("checkpoint_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/HUDisplay")), FName(TEXT("HUDisplay_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/PauseScreen")), FName(TEXT("PauseScreen_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/Options")), FName(TEXT("Options_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/StartScreen")), FName(TEXT("StartScreen_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/About")), FName(TEXT("About_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/Victory")), FName(TEXT("Victory_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
}
struct FRegisterHelper__ABallCharacter3_C__pf3208112912
{
	FRegisterHelper__ABallCharacter3_C__pf3208112912()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/RollingBP/Blueprints/BallCharacter3"), &ABallCharacter3_C__pf3208112912::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABallCharacter3_C__pf3208112912 Instance;
};
FRegisterHelper__ABallCharacter3_C__pf3208112912 FRegisterHelper__ABallCharacter3_C__pf3208112912::Instance;
void ABallCharacter3_C__pf3208112912::bpf__ExecuteUbergraph_BallCharacter3__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				b0l__CallFunc_LessEqual_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__EnemyEnergy__pf, 799.000000);
				b0l__CallFunc_GreaterEqual_FloatFloat_ReturnValue4__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpv__EnemyEnergy__pf, 400.000000);
				b0l__CallFunc_BooleanAND_ReturnValue3__pf = UKismetMathLibrary::BooleanAND(b0l__CallFunc_GreaterEqual_FloatFloat_ReturnValue4__pf, b0l__CallFunc_LessEqual_FloatFloat_ReturnValue3__pf);
				if (!b0l__CallFunc_BooleanAND_ReturnValue3__pf)
				{
					CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				if(IsValid(bpv__SpotLight__pf))
				{
					bpv__SpotLight__pf->SetLightColor(FLinearColor(1.000000,0.834394,0.000000,1.000000), true);
				}
				CurrentState = -1;
				break;
			}
		case 3:
			{
				b0l__CallFunc_LessEqual_FloatFloat_ReturnValue4__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__EnemyEnergy__pf, 399.000000);
				b0l__CallFunc_GreaterEqual_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpv__EnemyEnergy__pf, 1.000000);
				b0l__CallFunc_BooleanAND_ReturnValue2__pf = UKismetMathLibrary::BooleanAND(b0l__CallFunc_GreaterEqual_FloatFloat_ReturnValue3__pf, b0l__CallFunc_LessEqual_FloatFloat_ReturnValue4__pf);
				if (!b0l__CallFunc_BooleanAND_ReturnValue2__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				if(IsValid(bpv__SpotLight__pf))
				{
					bpv__SpotLight__pf->SetLightColor(FLinearColor(0.940000,0.062344,0.000000,1.000000), true);
				}
				CurrentState = -1;
				break;
			}
		case 5:
			{
				if(IsValid(bpv__SpotLight__pf))
				{
					bpv__SpotLight__pf->SetLightColor(FLinearColor(0.198794,1.000000,0.000000,1.000000), true);
				}
				CurrentState = -1;
				break;
			}
		case 6:
			{
				b0l__CallFunc_LessEqual_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__EnemyEnergy__pf, 1200.000000);
				b0l__CallFunc_GreaterEqual_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpv__EnemyEnergy__pf, 800.000000);
				b0l__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(b0l__CallFunc_GreaterEqual_FloatFloat_ReturnValue2__pf, b0l__CallFunc_LessEqual_FloatFloat_ReturnValue2__pf);
				if (!b0l__CallFunc_BooleanAND_ReturnValue__pf)
				{
					CurrentState = 1;
					break;
				}
				CurrentState = 5;
				break;
			}
		case 7:
			{
				b0l__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__EnemyEnergy__pf, 0.000000);
				if (!b0l__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					CurrentState = 6;
					break;
				}
			}
		case 8:
			{
				K2_DestroyActor();
			}
		case 9:
			{
				b0l__CallFunc_Create_ReturnValue__pf = CastChecked<UVictory_C__pf3208112912>(UWidgetBlueprintLibrary::Create(this, UVictory_C__pf3208112912::StaticClass(), nullptr), ECastCheckedType::NullAllowed);
			}
		case 10:
			{
				if(IsValid(b0l__CallFunc_Create_ReturnValue__pf))
				{
					b0l__CallFunc_Create_ReturnValue__pf->AddToViewport(0);
				}
			}
		case 11:
			{
				UGameplayStatics::OpenLevel(this, FName(TEXT("StartScreen")), true, FString(TEXT("")));
				CurrentState = -1;
				break;
			}
		case 19:
			{
				CurrentState = 7;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void ABallCharacter3_C__pf3208112912::bpf__ExecuteUbergraph_BallCharacter3__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 12:
			{
				b0l__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpv__DistanceFromEnemy__pf, 7.000000);
				if (!b0l__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					CurrentState = 13;
					break;
				}
			}
		case 13:
			{
				if(IsValid(bpv__Sphere1__pf))
				{
					b0l__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__Sphere1__pf->K2_GetComponentToWorld();
				}
				b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AEnemyProjectile_C__pf3208112912::StaticClass(), /*out*/ b0l__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding, nullptr);
			}
		case 14:
			{
				if(IsValid(bpv__Sphere1__pf))
				{
					b0l__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__Sphere1__pf->K2_GetComponentToWorld();
				}
				b0l__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<AEnemyProjectile_C__pf3208112912>(UGameplayStatics::FinishSpawningActor(b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, /*out*/ b0l__CallFunc_K2_GetComponentToWorld_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 15:
			{
				if(IsValid(bpv__Sphere4__pf))
				{
					b0l__CallFunc_K2_GetComponentToWorld_ReturnValue2__pf = bpv__Sphere4__pf->K2_GetComponentToWorld();
				}
				b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AEnemyProjectile_C__pf3208112912::StaticClass(), /*out*/ b0l__CallFunc_K2_GetComponentToWorld_ReturnValue2__pf, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding, nullptr);
			}
		case 16:
			{
				if(IsValid(bpv__Sphere4__pf))
				{
					b0l__CallFunc_K2_GetComponentToWorld_ReturnValue2__pf = bpv__Sphere4__pf->K2_GetComponentToWorld();
				}
				b0l__CallFunc_FinishSpawningActor_ReturnValue2__pf = CastChecked<AEnemyProjectile_C__pf3208112912>(UGameplayStatics::FinishSpawningActor(b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf, /*out*/ b0l__CallFunc_K2_GetComponentToWorld_ReturnValue2__pf), ECastCheckedType::NullAllowed);
			}
		case 17:
			{
				if(IsValid(bpv__Sphere5__pf))
				{
					b0l__CallFunc_K2_GetComponentToWorld_ReturnValue3__pf = bpv__Sphere5__pf->K2_GetComponentToWorld();
				}
				b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AEnemyProjectile_C__pf3208112912::StaticClass(), /*out*/ b0l__CallFunc_K2_GetComponentToWorld_ReturnValue3__pf, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding, nullptr);
			}
		case 18:
			{
				if(IsValid(bpv__Sphere5__pf))
				{
					b0l__CallFunc_K2_GetComponentToWorld_ReturnValue3__pf = bpv__Sphere5__pf->K2_GetComponentToWorld();
				}
				b0l__CallFunc_FinishSpawningActor_ReturnValue3__pf = CastChecked<AEnemyProjectile_C__pf3208112912>(UGameplayStatics::FinishSpawningActor(b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3__pf, /*out*/ b0l__CallFunc_K2_GetComponentToWorld_ReturnValue3__pf), ECastCheckedType::NullAllowed);
				CurrentState = -1;
				break;
			}
		case 20:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate2__pf.BindUFunction(this,FName(TEXT("OnFail_D8F27C81497D6AFB0FE9F3BC82948201")));
				if(IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf->OnFail.Add(b0l__K2Node_CreateDelegate_OutputDelegate2__pf);
				}
			}
		case 21:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsPhysics_Ball_BP__pf))
				{
					b0l__CallFunc_GetDistanceTo_ReturnValue__pf = b0l__K2Node_DynamicCast_AsPhysics_Ball_BP__pf->GetDistanceTo(this);
				}
				bpv__DistanceFromEnemy__pf = b0l__CallFunc_GetDistanceTo_ReturnValue__pf;
				CurrentState = 12;
				break;
			}
		case 22:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("OnSuccess_D8F27C81497D6AFB0FE9F3BC82948201")));
				if(IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf->OnSuccess.Add(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
				}
				CurrentState = 20;
				break;
			}
		case 25:
			{
				b0l__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue__pf)
				{
					CurrentState = 21;
					break;
				}
				CurrentState = 22;
				break;
			}
		case 26:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, this, FVector(0.000000,0.000000,0.000000), b0l__K2Node_DynamicCast_AsPhysics_Ball_BP__pf, 5.000000, false);
				CurrentState = 25;
				break;
			}
		case 28:
			{
				b0l__K2Node_DynamicCast_AsPhysics_Ball_BP__pf = Cast<APhysicsBallBP_C__pf3208112912>(b0l__K2Node_ComponentBoundEvent_Pawn__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsPhysics_Ball_BP__pf != nullptr);
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = 26;
				break;
			}
		case 29:
			{
				CurrentState = 28;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void ABallCharacter3_C__pf3208112912::bpf__ExecuteUbergraph_BallCharacter3__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 24);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_byte_Variable__pf = b0l__K2Node_CustomEvent_MovementResult2__pf;
	return; // KCST_GotoReturn
}
void ABallCharacter3_C__pf3208112912::bpf__ExecuteUbergraph_BallCharacter3__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 27);
	return; // KCST_GotoReturn
}
void ABallCharacter3_C__pf3208112912::bpf__ExecuteUbergraph_BallCharacter3__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 31);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_byte_Variable__pf = b0l__K2Node_CustomEvent_MovementResult__pf;
	return; // KCST_GotoReturn
}
void ABallCharacter3_C__pf3208112912::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BallCharacter3__pf_0(19);
}
void ABallCharacter3_C__pf3208112912::bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf)
{
	b0l__K2Node_Event_OtherActor__pf = bpp__OtherActor__pf;
	bpf__ExecuteUbergraph_BallCharacter3__pf_3(27);
}
void ABallCharacter3_C__pf3208112912::bpf__BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature__pf(APawn* bpp__Pawn__pf)
{
	b0l__K2Node_ComponentBoundEvent_Pawn__pf = bpp__Pawn__pf;
	bpf__ExecuteUbergraph_BallCharacter3__pf_1(29);
}
void ABallCharacter3_C__pf3208112912::bpf__OnSuccess_D8F27C81497D6AFB0FE9F3BC82948201__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BallCharacter3__pf_4(31);
}
void ABallCharacter3_C__pf3208112912::bpf__OnFail_D8F27C81497D6AFB0FE9F3BC82948201__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult2__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_BallCharacter3__pf_2(24);
}
void ABallCharacter3_C__pf3208112912::bpf__UserConstructionScript__pf()
{
}
