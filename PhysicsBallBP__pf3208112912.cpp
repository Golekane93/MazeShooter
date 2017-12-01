#include "NativizedAssets.h"
#include "PhysicsBallBP__pf3208112912.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputTouchDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "PhysicsBallBP__pf3208112912.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
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
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "MyGameSave__pf3208112912.h"
#include "FirstPersonProjectile__pf3208112912.h"
#include "checkpoint__pf3208112912.h"
#include "HUDisplay__pf3208112912.h"
#include "PauseScreen__pf3208112912.h"
#include "GameOver__pf3208112912.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
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
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Engine/TriggerBox.h"
#include "Runtime/Engine/Classes/Engine/TriggerBase.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/TriggerSphere.h"
#include "CharCamShake__pf895046141.h"
#include "Runtime/Engine/Classes/Sound/SoundCue.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "BallCharacter2__pf3208112912.h"
#include "EnergyBall__pf3208112912.h"
#include "BallCharacter__pf3208112912.h"
#include "EnemyProjectile__pf3208112912.h"
#include "BallCharacter3__pf3208112912.h"
#include "Victory__pf3208112912.h"
#include "Options__pf3208112912.h"
#include "StartScreen__pf3208112912.h"
#include "About__pf3208112912.h"
void APhysicsBallBP_C__pf3208112912::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->UsedAssets.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	// List of all referenced converted classes
	extern UClass* Z_Construct_UClass_UMyGameSave_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UMyGameSave_C__pf3208112912());
	extern UClass* Z_Construct_UClass_AFirstPersonProjectile_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AFirstPersonProjectile_C__pf3208112912());
	extern UClass* Z_Construct_UClass_ABallCharacter2_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ABallCharacter2_C__pf3208112912());
	extern UClass* Z_Construct_UClass_AEnergyBall_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AEnergyBall_C__pf3208112912());
	extern UClass* Z_Construct_UClass_ABallCharacter_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ABallCharacter_C__pf3208112912());
	extern UClass* Z_Construct_UClass_AEnemyProjectile_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AEnemyProjectile_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UCharCamShake_C__pf895046141();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UCharCamShake_C__pf895046141());
	extern UClass* Z_Construct_UClass_ABallCharacter3_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ABallCharacter3_C__pf3208112912());
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
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/Rolling/Meshes/BallMesh.BallMesh")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Engine/BasicShapes/Sphere.Sphere")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/Fire/M_JaggedRockFire_MeshEmit_Lit.M_JaggedRockFire_MeshEmit_Lit")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Materials/M_Metal_Rust.M_Metal_Rust")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/Lightning/M_JaggedRockLightning_MeshEmit_Lit_INST.M_JaggedRockLightning_MeshEmit_Lit_INST")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Ability/Heal/P_Heal_Pickup.P_Heal_Pickup")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Gobble.Gobble")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Scrap.Scrap")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/ICE/M_JaggedRockIce_MeshEmit.M_JaggedRockIce_MeshEmit")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/ICE/M_JaggedRockIce_MeshEmit_Blue.M_JaggedRockIce_MeshEmit_Blue")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Audio/Explosion_Cue.Explosion_Cue")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Particles/P_Explosion.P_Explosion")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Engine/BasicShapes/Cone.Cone")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/Fonts/Atmosphere/Atmosphere-Regular.Atmosphere-Regular")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/Fonts/Atmosphere/Atmosphere-Light.Atmosphere-Light")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Engine/EngineFonts/Roboto.Roboto")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Moving.Moving")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Energy_Critical.Energy_Critical")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Level_Cleared_________________Advance_Stage.Level_Cleared_________________Advance_Stage")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Check_Point.Check_Point")));
	auto __Local__0 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UInputTouchDelegateBinding>(InDynamicClass, UInputTouchDelegateBinding::StaticClass(), TEXT("InputTouchDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__1);
	auto __Local__2 = NewObject<UInputAxisKeyDelegateBinding>(InDynamicClass, UInputAxisKeyDelegateBinding::StaticClass(), TEXT("InputAxisKeyDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__2);
	auto __Local__3 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__3);
	auto __Local__4 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__4);
	__Local__0->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__0->InputActionDelegateBindings.AddUninitialized(5);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->InputActionDelegateBindings.GetData(), 5);
	__Local__0->InputActionDelegateBindings[0].InputActionName = FName(TEXT("Jump"));
	__Local__0->InputActionDelegateBindings[0].InputKeyEvent = EInputEvent::IE_Released;
	__Local__0->InputActionDelegateBindings[0].FunctionNameToBind = FName(TEXT("InpActEvt_Jump_K2Node_InputActionEvent_9"));
	__Local__0->InputActionDelegateBindings[1].InputActionName = FName(TEXT("Jump"));
	__Local__0->InputActionDelegateBindings[1].FunctionNameToBind = FName(TEXT("InpActEvt_Jump_K2Node_InputActionEvent_8"));
	__Local__0->InputActionDelegateBindings[2].InputActionName = FName(TEXT("Fire"));
	__Local__0->InputActionDelegateBindings[2].InputKeyEvent = EInputEvent::IE_Released;
	__Local__0->InputActionDelegateBindings[2].FunctionNameToBind = FName(TEXT("InpActEvt_Fire_K2Node_InputActionEvent_7"));
	__Local__0->InputActionDelegateBindings[3].InputActionName = FName(TEXT("Fire"));
	__Local__0->InputActionDelegateBindings[3].FunctionNameToBind = FName(TEXT("InpActEvt_Fire_K2Node_InputActionEvent_6"));
	__Local__0->InputActionDelegateBindings[4].InputActionName = FName(TEXT("Pause"));
	__Local__0->InputActionDelegateBindings[4].FunctionNameToBind = FName(TEXT("InpActEvt_Pause_K2Node_InputActionEvent_5"));
	__Local__1->InputTouchDelegateBindings = TArray<FBlueprintInputTouchDelegateBinding> ();
	__Local__1->InputTouchDelegateBindings.AddUninitialized(1);
	FBlueprintInputTouchDelegateBinding::StaticStruct()->InitializeStruct(__Local__1->InputTouchDelegateBindings.GetData(), 1);
	__Local__1->InputTouchDelegateBindings[0].FunctionNameToBind = FName(TEXT("InpTchEvt_K2Node_InputTouchEvent_1"));
	__Local__1->InputTouchDelegateBindings[0].bConsumeInput = false;
	__Local__2->InputAxisKeyDelegateBindings = TArray<FBlueprintInputAxisKeyDelegateBinding> ();
	__Local__2->InputAxisKeyDelegateBindings.AddUninitialized(2);
	FBlueprintInputAxisKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__2->InputAxisKeyDelegateBindings.GetData(), 2);
	__Local__2->InputAxisKeyDelegateBindings[0].AxisKey = FKey(TEXT("MouseY"));
	__Local__2->InputAxisKeyDelegateBindings[0].FunctionNameToBind = FName(TEXT("InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_13"));
	__Local__2->InputAxisKeyDelegateBindings[1].AxisKey = FKey(TEXT("MouseX"));
	__Local__2->InputAxisKeyDelegateBindings[1].FunctionNameToBind = FName(TEXT("InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0"));
	__Local__3->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__3->InputAxisDelegateBindings.AddUninitialized(2);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__3->InputAxisDelegateBindings.GetData(), 2);
	__Local__3->InputAxisDelegateBindings[0].InputAxisName = FName(TEXT("MoveForward"));
	__Local__3->InputAxisDelegateBindings[0].FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveForward_K2Node_InputAxisEvent_112"));
	__Local__3->InputAxisDelegateBindings[1].InputAxisName = FName(TEXT("MoveRight"));
	__Local__3->InputAxisDelegateBindings[1].FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_29"));
	__Local__4->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__4->InputKeyDelegateBindings.AddUninitialized(9);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__4->InputKeyDelegateBindings.GetData(), 9);
	__Local__4->InputKeyDelegateBindings[0].InputChord.Key = FKey(TEXT("L"));
	__Local__4->InputKeyDelegateBindings[0].FunctionNameToBind = FName(TEXT("InpActEvt_L_K2Node_InputKeyEvent_9"));
	__Local__4->InputKeyDelegateBindings[1].InputChord.Key = FKey(TEXT("W"));
	__Local__4->InputKeyDelegateBindings[1].InputKeyEvent = EInputEvent::IE_Released;
	__Local__4->InputKeyDelegateBindings[1].FunctionNameToBind = FName(TEXT("InpActEvt_W_K2Node_InputKeyEvent_17"));
	__Local__4->InputKeyDelegateBindings[2].InputChord.Key = FKey(TEXT("W"));
	__Local__4->InputKeyDelegateBindings[2].FunctionNameToBind = FName(TEXT("InpActEvt_W_K2Node_InputKeyEvent_16"));
	__Local__4->InputKeyDelegateBindings[3].InputChord.Key = FKey(TEXT("A"));
	__Local__4->InputKeyDelegateBindings[3].InputKeyEvent = EInputEvent::IE_Released;
	__Local__4->InputKeyDelegateBindings[3].FunctionNameToBind = FName(TEXT("InpActEvt_A_K2Node_InputKeyEvent_15"));
	__Local__4->InputKeyDelegateBindings[4].InputChord.Key = FKey(TEXT("A"));
	__Local__4->InputKeyDelegateBindings[4].FunctionNameToBind = FName(TEXT("InpActEvt_A_K2Node_InputKeyEvent_14"));
	__Local__4->InputKeyDelegateBindings[5].InputChord.Key = FKey(TEXT("S"));
	__Local__4->InputKeyDelegateBindings[5].InputKeyEvent = EInputEvent::IE_Released;
	__Local__4->InputKeyDelegateBindings[5].FunctionNameToBind = FName(TEXT("InpActEvt_S_K2Node_InputKeyEvent_13"));
	__Local__4->InputKeyDelegateBindings[6].InputChord.Key = FKey(TEXT("S"));
	__Local__4->InputKeyDelegateBindings[6].FunctionNameToBind = FName(TEXT("InpActEvt_S_K2Node_InputKeyEvent_12"));
	__Local__4->InputKeyDelegateBindings[7].InputChord.Key = FKey(TEXT("D"));
	__Local__4->InputKeyDelegateBindings[7].InputKeyEvent = EInputEvent::IE_Released;
	__Local__4->InputKeyDelegateBindings[7].FunctionNameToBind = FName(TEXT("InpActEvt_D_K2Node_InputKeyEvent_11"));
	__Local__4->InputKeyDelegateBindings[8].InputChord.Key = FKey(TEXT("D"));
	__Local__4->InputKeyDelegateBindings[8].FunctionNameToBind = FName(TEXT("InpActEvt_D_K2Node_InputKeyEvent_10"));
}
APhysicsBallBP_C__pf3208112912::APhysicsBallBP_C__pf3208112912(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (APhysicsBallBP_C__pf3208112912::StaticClass() == GetClass()))
	{
		APhysicsBallBP_C__pf3208112912::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Ball__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ball"));
	bpv__SpringArm__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	bpv__Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	bpv__Sphere1__pf = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere1"));
	bpv__Sphere__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	bpv__Sphere2__pf = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere2"));
	RootComponent = bpv__Ball__pf;
	bpv__Ball__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Ball__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(APhysicsBallBP_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Ball__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Ball__pf->OverrideMaterials.Reserve(1);
	bpv__Ball__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(APhysicsBallBP_C__pf3208112912::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__Ball__pf->BodyInstance.ResponseToChannels_DEPRECATED.Visibility = ECollisionResponse::ECR_Ignore;
	static TWeakObjectPtr<UProperty> __Local__6{};
	const UProperty* __Local__5 = __Local__6.Get();
	if (nullptr == __Local__5)
	{
		__Local__5 = (FBodyInstance::StaticStruct())->FindPropertyByName(FName(TEXT("CollisionProfileName")));
		check(__Local__5);
		__Local__6 = __Local__5;
	}
	auto& __Local__7 = (*(__Local__5->ContainerPtrToValuePtr<FName >(&(bpv__Ball__pf->BodyInstance), 0)));
	__Local__7 = FName(TEXT("Pawn"));
	static TWeakObjectPtr<UProperty> __Local__9{};
	const UProperty* __Local__8 = __Local__9.Get();
	if (nullptr == __Local__8)
	{
		__Local__8 = (FBodyInstance::StaticStruct())->FindPropertyByName(FName(TEXT("CollisionResponses")));
		check(__Local__8);
		__Local__9 = __Local__8;
	}
	auto& __Local__10 = (*(__Local__8->ContainerPtrToValuePtr<FCollisionResponse >(&(bpv__Ball__pf->BodyInstance), 0)));
	static TWeakObjectPtr<UProperty> __Local__12{};
	const UProperty* __Local__11 = __Local__12.Get();
	if (nullptr == __Local__11)
	{
		__Local__11 = (FCollisionResponse::StaticStruct())->FindPropertyByName(FName(TEXT("ResponseArray")));
		check(__Local__11);
		__Local__12 = __Local__11;
	}
	auto& __Local__13 = (*(__Local__11->ContainerPtrToValuePtr<TArray<FResponseChannel> >(&(__Local__10), 0)));
	__Local__13 = TArray<FResponseChannel> ();
	__Local__13.AddUninitialized(1);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__13.GetData(), 1);
	__Local__13[0].Channel = FName(TEXT("Visibility"));
	__Local__13[0].Response = ECollisionResponse::ECR_Ignore;
	bpv__Ball__pf->BodyInstance.bNotifyRigidBodyCollision = true;
	bpv__Ball__pf->BodyInstance.bSimulatePhysics = true;
	bpv__Ball__pf->BodyInstance.bAutoWeld = false;
	static TWeakObjectPtr<UProperty> __Local__15{};
	const UProperty* __Local__14 = __Local__15.Get();
	if (nullptr == __Local__14)
	{
		__Local__14 = (FBodyInstance::StaticStruct())->FindPropertyByName(FName(TEXT("MassInKgOverride")));
		check(__Local__14);
		__Local__15 = __Local__14;
	}
	auto& __Local__16 = (*(__Local__14->ContainerPtrToValuePtr<float >(&(bpv__Ball__pf->BodyInstance), 0)));
	__Local__16 = 499.346802f;
	bpv__Ball__pf->BodyInstance.LinearDamping = 0.100000f;
	bpv__Ball__pf->BodyInstance.AngularDamping = 0.100000f;
	bpv__Ball__pf->BodyInstance.MassScale = 3.500000f;
	bpv__Ball__pf->BodyInstance.MaxAngularVelocity = 800.000000f;
	static TWeakObjectPtr<UProperty> __Local__18{};
	const UProperty* __Local__17 = __Local__18.Get();
	if (nullptr == __Local__17)
	{
		__Local__17 = (FBodyInstance::StaticStruct())->FindPropertyByName(FName(TEXT("ObjectType")));
		check(__Local__17);
		__Local__18 = __Local__17;
	}
	auto& __Local__19 = (*(__Local__17->ContainerPtrToValuePtr<TEnumAsByte<ECollisionChannel> >(&(bpv__Ball__pf->BodyInstance), 0)));
	__Local__19 = ECollisionChannel::ECC_Pawn;
	if(!bpv__Ball__pf->IsTemplate())
	{
		bpv__Ball__pf->BodyInstance.FixupData(bpv__Ball__pf);
	}
	bpv__SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SpringArm__pf->AttachToComponent(bpv__Ball__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SpringArm__pf->bUsePawnControlRotation = true;
	bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Camera__pf->AttachToComponent(bpv__SpringArm__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Camera__pf->bUsePawnControlRotation = true;
	bpv__Camera__pf->RelativeLocation = FVector(100.000000, 0.000000, 70.000000);
	bpv__Sphere1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere1__pf->AttachToComponent(bpv__Camera__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Sphere1__pf->RelativeLocation = FVector(200.000000, 70.000000, -30.000000);
	bpv__Sphere1__pf->RelativeScale3D = FVector(0.562500, 0.562500, 0.562500);
	if(!bpv__Sphere1__pf->IsTemplate())
	{
		bpv__Sphere1__pf->BodyInstance.FixupData(bpv__Sphere1__pf);
	}
	bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere__pf->AttachToComponent(bpv__Camera__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Sphere__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(APhysicsBallBP_C__pf3208112912::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__Sphere__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Sphere__pf->OverrideMaterials.Reserve(1);
	bpv__Sphere__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(APhysicsBallBP_C__pf3208112912::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bpv__Sphere__pf->RelativeLocation = FVector(200.000000, -70.000000, -30.000000);
	bpv__Sphere__pf->RelativeScale3D = FVector(0.296631, 0.296631, 0.296631);
	if(!bpv__Sphere__pf->IsTemplate())
	{
		bpv__Sphere__pf->BodyInstance.FixupData(bpv__Sphere__pf);
	}
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->AttachToComponent(bpv__Camera__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(APhysicsBallBP_C__pf3208112912::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(APhysicsBallBP_C__pf3208112912::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bpv__StaticMesh__pf->RelativeLocation = FVector(200.000000, 70.000000, -30.000000);
	bpv__StaticMesh__pf->RelativeScale3D = FVector(0.296631, 0.296631, 0.296631);
	if(!bpv__StaticMesh__pf->IsTemplate())
	{
		bpv__StaticMesh__pf->BodyInstance.FixupData(bpv__StaticMesh__pf);
	}
	bpv__Sphere2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere2__pf->AttachToComponent(bpv__Camera__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Sphere2__pf->RelativeLocation = FVector(200.000000, -70.000000, -30.000000);
	bpv__Sphere2__pf->RelativeScale3D = FVector(0.562500, 0.562500, 0.562500);
	if(!bpv__Sphere2__pf->IsTemplate())
	{
		bpv__Sphere2__pf->BodyInstance.FixupData(bpv__Sphere2__pf);
	}
	bpv__JumpImpulse__pf = 350000.000000f;
	bpv__CanJump__pf = true;
	bpv__RollTorque__pf = 50000000.000000f;
	bpv__UsingxMotion__pfT = false;
	bpv__GunOffset__pf = FVector(200.000000, 33.000000, -10.000000);
	bpv__UsingMotControllers__pf = false;
	bpv__Hold__pf = false;
	bpv__GunOffset2__pf = FVector(200.000000, -33.000000, -10.000000);
	bpv__Energy__pf = 100.000000f;
	bpv__Shield__pf = 0.000000f;
	bpv__MaxEnergy__pf = 100.000000f;
	bpv__MaxShield__pf = 100.000000f;
	bpv__E_Perc__pf = 0.000000f;
	bpv__paused__pf = false;
	bpv__p__pf = true;
	bpv__SaveSub__pf = nullptr;
	bpv__NewVar_0__pf = nullptr;
	bpv__NewVar_1__pf = nullptr;
	bpv__NewVar_2__pf = false;
	bpv__c1Reached__pf = false;
	bpv__c2Reached__pf = false;
	bpv__c3Reached__pf = false;
	bpv__c4Reached__pf = false;
	bpv__c5Reached__pf = false;
	bpv__checkpointLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__currentEnergy__pf = 0.000000f;
	bpv__BallLevel__pf = 1;
}
void APhysicsBallBP_C__pf3208112912::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Ball__pf)
	{
		bpv__Ball__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SpringArm__pf)
	{
		bpv__SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Camera__pf)
	{
		bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Sphere1__pf)
	{
		bpv__Sphere1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Sphere__pf)
	{
		bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh__pf)
	{
		bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Sphere2__pf)
	{
		bpv__Sphere2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void APhysicsBallBP_C__pf3208112912::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	AssetsToLoad.Add({FName(TEXT("/Game/Rolling/Meshes/BallMesh")), FName(TEXT("BallMesh")), FName(TEXT("/Script/Engine")), FName(TEXT("StaticMesh"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Materials/M_Metal_Burnished_Steel")), FName(TEXT("M_Metal_Burnished_Steel")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Engine/BasicShapes/Sphere")), FName(TEXT("Sphere")), FName(TEXT("/Script/Engine")), FName(TEXT("StaticMesh"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/Fire/M_JaggedRockFire_MeshEmit_Lit")), FName(TEXT("M_JaggedRockFire_MeshEmit_Lit")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Materials/M_Metal_Rust")), FName(TEXT("M_Metal_Rust")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/Lightning/M_JaggedRockLightning_MeshEmit_Lit_INST")), FName(TEXT("M_JaggedRockLightning_MeshEmit_Lit_INST")), FName(TEXT("/Script/Engine")), FName(TEXT("MaterialInstanceConstant"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Ability/Heal/P_Heal_Pickup")), FName(TEXT("P_Heal_Pickup")), FName(TEXT("/Script/Engine")), FName(TEXT("ParticleSystem"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Gobble")), FName(TEXT("Gobble")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Scrap")), FName(TEXT("Scrap")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Materials/M_Metal_Steel")), FName(TEXT("M_Metal_Steel")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/ICE/M_JaggedRockIce_MeshEmit")), FName(TEXT("M_JaggedRockIce_MeshEmit")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/InfinityBladeEffects/Effects/FX_Materials/ICE/M_JaggedRockIce_MeshEmit_Blue")), FName(TEXT("M_JaggedRockIce_MeshEmit_Blue")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Audio/Explosion_Cue")), FName(TEXT("Explosion_Cue")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundCue"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Particles/P_Explosion")), FName(TEXT("P_Explosion")), FName(TEXT("/Script/Engine")), FName(TEXT("ParticleSystem"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Materials/M_Metal_Gold")), FName(TEXT("M_Metal_Gold")), FName(TEXT("/Script/Engine")), FName(TEXT("Material"))});
	AssetsToLoad.Add({FName(TEXT("/Engine/BasicShapes/Cone")), FName(TEXT("Cone")), FName(TEXT("/Script/Engine")), FName(TEXT("StaticMesh"))});
	AssetsToLoad.Add({FName(TEXT("/Game/Fonts/Atmosphere/Atmosphere-Regular")), FName(TEXT("Atmosphere-Regular")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Game/Fonts/Atmosphere/Atmosphere-Light")), FName(TEXT("Atmosphere-Light")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Engine/EngineFonts/Roboto")), FName(TEXT("Roboto")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Moving")), FName(TEXT("Moving")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Energy_Critical")), FName(TEXT("Energy_Critical")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Level_Cleared_________________Advance_Stage")), FName(TEXT("Level_Cleared_________________Advance_Stage")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Check_Point")), FName(TEXT("Check_Point")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/MyGameSave")), FName(TEXT("MyGameSave_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/FirstPersonProjectile")), FName(TEXT("FirstPersonProjectile_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/BallCharacter2")), FName(TEXT("BallCharacter2_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/EnergyBall")), FName(TEXT("EnergyBall_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/BallCharacter")), FName(TEXT("BallCharacter_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/EnemyProjectile")), FName(TEXT("EnemyProjectile_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/CharCamShake")), FName(TEXT("CharCamShake_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/BallCharacter3")), FName(TEXT("BallCharacter3_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/Victory")), FName(TEXT("Victory_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/checkpoint")), FName(TEXT("checkpoint_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/HUDisplay")), FName(TEXT("HUDisplay_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/PauseScreen")), FName(TEXT("PauseScreen_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/Options")), FName(TEXT("Options_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/StartScreen")), FName(TEXT("StartScreen_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/About")), FName(TEXT("About_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/GameOver")), FName(TEXT("GameOver_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
}
struct FRegisterHelper__APhysicsBallBP_C__pf3208112912
{
	FRegisterHelper__APhysicsBallBP_C__pf3208112912()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/RollingBP/Blueprints/PhysicsBallBP"), &APhysicsBallBP_C__pf3208112912::__StaticDependenciesAssets);
	}
	static FRegisterHelper__APhysicsBallBP_C__pf3208112912 Instance;
};
FRegisterHelper__APhysicsBallBP_C__pf3208112912 FRegisterHelper__APhysicsBallBP_C__pf3208112912::Instance;
void APhysicsBallBP_C__pf3208112912::bpf__ExecuteUbergraph_PhysicsBallBP__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				if (!true)
				{
					CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				UGameplayStatics::OpenLevel(this, FName(TEXT("BattleMap_2")), true, FString(TEXT("")));
				CurrentState = -1;
				break;
			}
		case 3:
			{
				b0l__CallFunc_DoesSaveGameExist_ReturnValue2__pf = UGameplayStatics::DoesSaveGameExist(FString(TEXT("Slot1")), 0);
			}
		case 4:
			{
				if (!b0l__CallFunc_DoesSaveGameExist_ReturnValue2__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				b0l__CallFunc_LoadGameFromSlot_ReturnValue2__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Slot1")), 0);
			}
		case 6:
			{
				bpv__SaveSub__pf = b0l__CallFunc_LoadGameFromSlot_ReturnValue2__pf;
			}
		case 7:
			{
				b0l__K2Node_DynamicCast_AsMy_Game_Save5__pf = Cast<UMyGameSave_C__pf3208112912>(bpv__SaveSub__pf);
				b0l__K2Node_DynamicCast_bSuccess5__pf = (b0l__K2Node_DynamicCast_AsMy_Game_Save5__pf != nullptr);
				if (!b0l__K2Node_DynamicCast_bSuccess5__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 8:
			{
				FVector __Local__20 = FVector(0.000000,0.000000,0.000000);
				b0l__CallFunc_K2_SetActorLocation_ReturnValue__pf = K2_SetActorLocation(((IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save5__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Game_Save5__pf->bpv__Location__pf) : (__Local__20)), false, /*out*/ b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf, true);
			}
		case 9:
			{
				float __Local__21 = 0.000000;
				bpv__Energy__pf = ((IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save5__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Game_Save5__pf->bpv__CurrentEnergy__pf) : (__Local__21));
				CurrentState = -1;
				break;
			}
		case 157:
			{
				CurrentState = 1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void APhysicsBallBP_C__pf3208112912::bpf__ExecuteUbergraph_PhysicsBallBP__pf_1(int32 bpp__EntryPoint__pf)
{
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 10:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(APhysicsBallBP_C__pf3208112912::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, nullptr);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 110:
			{
				auto __Local__22 = FLatentActionInfo{};
				__Local__22.Linkage = 111;
				__Local__22.UUID = 31;
				__Local__22.ExecutionFunction = FName(TEXT("ExecuteUbergraph_PhysicsBallBP_1"));
				__Local__22.CallbackTarget = this;
				UKismetSystemLibrary::RetriggerableDelay(this, 0.500000, __Local__22);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 111:
			{
				CurrentState = 112;
				break;
			}
		case 112:
			{
				StateStack.Push(123);
			}
		case 113:
			{
				StateStack.Push(118);
			}
		case 114:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					CurrentState = 115;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 115:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 116:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 117:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 118:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					CurrentState = 119;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 119:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 120:
			{
				if (!true)
				{
					CurrentState = 122;
					break;
				}
			}
		case 121:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2__pf = false;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 122:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 123:
			{
				if (!b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 124:
			{
				StateStack.Push(110);
			}
		case 125:
			{
				b0l__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__Energy__pf, 1.000000);
				bpv__Energy__pf = b0l__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
				CurrentState = 10;
				break;
			}
		case 136:
			{
				StateStack.Push(112);
			}
		case 137:
			{
				StateStack.Push(138);
				CurrentState = 113;
				break;
			}
		case 138:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 163:
			{
				b0l__Temp_struct_Variable4__pf = b0l__K2Node_InputKeyEvent_Key9__pf;
			}
		case 164:
			{
				StateStack.Push(165);
				CurrentState = 113;
				break;
			}
		case 165:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2__pf = false;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 166:
			{
				CurrentState = 163;
				break;
			}
		case 167:
			{
				b0l__Temp_struct_Variable4__pf = b0l__K2Node_InputKeyEvent_Key8__pf;
				CurrentState = 136;
				break;
			}
		case 168:
			{
				CurrentState = 167;
				break;
			}
		case 169:
			{
				b0l__Temp_struct_Variable3__pf = b0l__K2Node_InputKeyEvent_Key7__pf;
				CurrentState = 164;
				break;
			}
		case 170:
			{
				CurrentState = 169;
				break;
			}
		case 171:
			{
				b0l__Temp_struct_Variable3__pf = b0l__K2Node_InputKeyEvent_Key6__pf;
				CurrentState = 136;
				break;
			}
		case 172:
			{
				CurrentState = 171;
				break;
			}
		case 173:
			{
				b0l__Temp_struct_Variable2__pf = b0l__K2Node_InputKeyEvent_Key5__pf;
				CurrentState = 164;
				break;
			}
		case 174:
			{
				CurrentState = 173;
				break;
			}
		case 175:
			{
				b0l__Temp_struct_Variable2__pf = b0l__K2Node_InputKeyEvent_Key4__pf;
				CurrentState = 136;
				break;
			}
		case 176:
			{
				CurrentState = 175;
				break;
			}
		case 177:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputKeyEvent_Key3__pf;
				CurrentState = 164;
				break;
			}
		case 178:
			{
				CurrentState = 177;
				break;
			}
		case 179:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputKeyEvent_Key2__pf;
				CurrentState = 136;
				break;
			}
		case 180:
			{
				CurrentState = 179;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void APhysicsBallBP_C__pf3208112912::bpf__ExecuteUbergraph_PhysicsBallBP__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 24);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable8__pf = b0l__K2Node_InputActionEvent_Key5__pf;
	b0l__CallFunc_MakeVector_ReturnValue4__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, 0.000000);
	if(IsValid(bpv__Ball__pf))
	{
		bpv__Ball__pf->AddImpulse(b0l__CallFunc_MakeVector_ReturnValue4__pf, FName(TEXT("None")), false);
	}
	b0l__Temp_bool_IsClosed_Variable2__pf = false;
	b0l__Temp_bool_Has_Been_Initd_Variable3__pf = true;
	return; //KCST_EndOfThread
}
void APhysicsBallBP_C__pf3208112912::bpf__ExecuteUbergraph_PhysicsBallBP__pf_3(int32 bpp__EntryPoint__pf)
{
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 15:
			{
				b0l__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__Energy__pf, 30.000000);
				if (!b0l__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 16:
			{
				StateStack.Push(18);
			}
		case 17:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable4__pf)
				{
					CurrentState = 21;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				if (!b0l__Temp_bool_IsClosed_Variable3__pf)
				{
					CurrentState = 19;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				b0l__Temp_bool_IsClosed_Variable3__pf = true;
			}
		case 20:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(APhysicsBallBP_C__pf3208112912::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, nullptr);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable4__pf = true;
			}
		case 22:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 23:
			{
				b0l__Temp_bool_IsClosed_Variable3__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 87:
			{
				b0l__CallFunc_GetPlayerController_ReturnValue3__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(b0l__CallFunc_GetPlayerController_ReturnValue3__pf))
				{
					b0l__CallFunc_GetPlayerController_ReturnValue3__pf->bShowMouseCursor = true;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 88:
			{
				b0l__CallFunc_SetGamePaused_ReturnValue2__pf = UGameplayStatics::SetGamePaused(this, true);
				CurrentState = 87;
				break;
			}
		case 139:
			{
				b0l__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpv__Energy__pf, 0.000000, bpv__MaxEnergy__pf);
				bpv__Energy__pf = b0l__CallFunc_FClamp_ReturnValue__pf;
			}
		case 140:
			{
				b0l__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__Energy__pf, bpv__MaxEnergy__pf);
				bpv__E_Perc__pf = b0l__CallFunc_Divide_FloatFloat_ReturnValue__pf;
			}
		case 141:
			{
				b0l__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__Energy__pf, 0.000000);
				if (!b0l__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					CurrentState = 15;
					break;
				}
			}
		case 142:
			{
				b0l__CallFunc_Create_ReturnValue__pf = CastChecked<UGameOver_C__pf3208112912>(UWidgetBlueprintLibrary::Create(this, UGameOver_C__pf3208112912::StaticClass(), nullptr), ECastCheckedType::NullAllowed);
			}
		case 143:
			{
				if(IsValid(b0l__CallFunc_Create_ReturnValue__pf))
				{
					b0l__CallFunc_Create_ReturnValue__pf->AddToViewport(0);
				}
				CurrentState = 88;
				break;
			}
		case 146:
			{
				b0l__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(b0l__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					b0l__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = false;
				}
				CurrentState = 139;
				break;
			}
		case 147:
			{
				CurrentState = 146;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void APhysicsBallBP_C__pf3208112912::bpf__ExecuteUbergraph_PhysicsBallBP__pf_4(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 25:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(APhysicsBallBP_C__pf3208112912::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, nullptr);
				CurrentState = -1;
				break;
			}
		case 26:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(APhysicsBallBP_C__pf3208112912::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, nullptr);
			}
		case 27:
			{
				UGameplayStatics::OpenLevel(this, FName(TEXT("BattleMap_2")), true, FString(TEXT("")));
				CurrentState = -1;
				break;
			}
		case 28:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Going To Level 2")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 29:
			{
				b0l__CallFunc_DoesSaveGameExist_ReturnValue3__pf = UGameplayStatics::DoesSaveGameExist(FString(TEXT("Slot1")), 0);
			}
		case 30:
			{
				if (!b0l__CallFunc_DoesSaveGameExist_ReturnValue3__pf)
				{
					CurrentState = 37;
					break;
				}
			}
		case 31:
			{
				b0l__CallFunc_LoadGameFromSlot_ReturnValue3__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Slot1")), 0);
			}
		case 32:
			{
				bpv__SaveSub__pf = b0l__CallFunc_LoadGameFromSlot_ReturnValue3__pf;
			}
		case 33:
			{
				b0l__K2Node_DynamicCast_AsMy_Game_Save4__pf = Cast<UMyGameSave_C__pf3208112912>(bpv__SaveSub__pf);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsMy_Game_Save4__pf != nullptr);
				if (!b0l__K2Node_DynamicCast_bSuccess4__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 34:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save4__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Game_Save4__pf->bpv__level__pf = 2;
				}
			}
		case 35:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save4__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Game_Save4__pf->bpv__CurrentEnergy__pf = bpv__currentEnergy__pf;
				}
			}
		case 36:
			{
				b0l__CallFunc_SaveGameToSlot_ReturnValue4__pf = UGameplayStatics::SaveGameToSlot(bpv__SaveSub__pf, FString(TEXT("Slot1")), 0);
				CurrentState = 26;
				break;
			}
		case 37:
			{
				b0l__CallFunc_CreateSaveGameObject_ReturnValue2__pf = UGameplayStatics::CreateSaveGameObject(UMyGameSave_C__pf3208112912::StaticClass());
			}
		case 38:
			{
				bpv__SaveSub__pf = b0l__CallFunc_CreateSaveGameObject_ReturnValue2__pf;
			}
		case 39:
			{
				b0l__K2Node_DynamicCast_AsMy_Game_Save3__pf = Cast<UMyGameSave_C__pf3208112912>(bpv__SaveSub__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsMy_Game_Save3__pf != nullptr);
				if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 40:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save3__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Game_Save3__pf->bpv__level__pf = 2;
				}
			}
		case 41:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save3__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Game_Save3__pf->bpv__CurrentEnergy__pf = bpv__currentEnergy__pf;
				}
			}
		case 42:
			{
				b0l__CallFunc_SaveGameToSlot_ReturnValue3__pf = UGameplayStatics::SaveGameToSlot(bpv__SaveSub__pf, FString(TEXT("Slot1")), 0);
				CurrentState = 25;
				break;
			}
		case 43:
			{
				bpv__currentEnergy__pf = bpv__Energy__pf;
			}
		case 44:
			{
				auto __Local__23 = FLatentActionInfo{};
				__Local__23.Linkage = 45;
				__Local__23.UUID = 32;
				__Local__23.ExecutionFunction = FName(TEXT("ExecuteUbergraph_PhysicsBallBP_4"));
				__Local__23.CallbackTarget = this;
				UKismetSystemLibrary::Delay(this, 2.000000, __Local__23);
				CurrentState = -1;
				break;
			}
		case 45:
			{
				CurrentState = 46;
				break;
			}
		case 46:
			{
				if(IsValid(b0l__CallFunc_Create_ReturnValue4__pf))
				{
					b0l__CallFunc_Create_ReturnValue4__pf->RemoveFromParent();
				}
			}
		case 47:
			{
				b0l__CallFunc_DoesSaveGameExist_ReturnValue__pf = UGameplayStatics::DoesSaveGameExist(FString(TEXT("Slot1")), 0);
			}
		case 48:
			{
				if (!b0l__CallFunc_DoesSaveGameExist_ReturnValue__pf)
				{
					CurrentState = 59;
					break;
				}
			}
		case 49:
			{
				b0l__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Slot1")), 0);
			}
		case 50:
			{
				bpv__SaveSub__pf = b0l__CallFunc_LoadGameFromSlot_ReturnValue__pf;
			}
		case 51:
			{
				b0l__K2Node_DynamicCast_AsMy_Game_Save__pf = Cast<UMyGameSave_C__pf3208112912>(bpv__SaveSub__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMy_Game_Save__pf != nullptr);
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 52:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Game_Save__pf->bpv__Location__pf = bpv__checkpointLocation__pf;
				}
			}
		case 53:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Game_Save__pf->bpv__c1__pf = bpv__c1Reached__pf;
				}
			}
		case 54:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Game_Save__pf->bpv__c2__pf = bpv__c2Reached__pf;
				}
			}
		case 55:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Game_Save__pf->bpv__c3__pf = bpv__c3Reached__pf;
				}
			}
		case 56:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Game_Save__pf->bpv__c4__pf = bpv__c4Reached__pf;
				}
			}
		case 57:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Game_Save__pf->bpv__CurrentEnergy__pf = bpv__currentEnergy__pf;
				}
			}
		case 58:
			{
				b0l__CallFunc_SaveGameToSlot_ReturnValue2__pf = UGameplayStatics::SaveGameToSlot(bpv__SaveSub__pf, FString(TEXT("Slot1")), 0);
				CurrentState = -1;
				break;
			}
		case 59:
			{
				b0l__CallFunc_CreateSaveGameObject_ReturnValue__pf = UGameplayStatics::CreateSaveGameObject(UMyGameSave_C__pf3208112912::StaticClass());
			}
		case 60:
			{
				bpv__SaveSub__pf = b0l__CallFunc_CreateSaveGameObject_ReturnValue__pf;
			}
		case 61:
			{
				b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf = Cast<UMyGameSave_C__pf3208112912>(bpv__SaveSub__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf != nullptr);
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 62:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf->bpv__Location__pf = bpv__checkpointLocation__pf;
				}
			}
		case 63:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf->bpv__c1__pf = bpv__c1Reached__pf;
				}
			}
		case 64:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf->bpv__c2__pf = bpv__c2Reached__pf;
				}
			}
		case 65:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf->bpv__c3__pf = bpv__c3Reached__pf;
				}
			}
		case 66:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf->bpv__c4__pf = bpv__c4Reached__pf;
				}
			}
		case 67:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf->bpv__CurrentEnergy__pf = bpv__currentEnergy__pf;
				}
			}
		case 68:
			{
				b0l__CallFunc_SaveGameToSlot_ReturnValue__pf = UGameplayStatics::SaveGameToSlot(bpv__SaveSub__pf, FString(TEXT("Slot1")), 0);
				CurrentState = -1;
				break;
			}
		case 69:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(APhysicsBallBP_C__pf3208112912::StaticClass())->UsedAssets[22], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, nullptr);
			}
		case 70:
			{
				b0l__CallFunc_Create_ReturnValue4__pf = CastChecked<Ucheckpoint_C__pf3208112912>(UWidgetBlueprintLibrary::Create(this, Ucheckpoint_C__pf3208112912::StaticClass(), nullptr), ECastCheckedType::NullAllowed);
			}
		case 71:
			{
				if(IsValid(b0l__CallFunc_Create_ReturnValue4__pf))
				{
					b0l__CallFunc_Create_ReturnValue4__pf->AddToViewport(0);
				}
				CurrentState = 43;
				break;
			}
		case 72:
			{
				b0l__CallFunc_GetObjectClass_ReturnValue2__pf = UGameplayStatics::GetObjectClass(b0l__K2Node_Event_OtherActor__pf);
				b0l__CallFunc_ClassIsChildOf_ReturnValue2__pf = UKismetMathLibrary::ClassIsChildOf(ATriggerBox::StaticClass(), b0l__CallFunc_GetObjectClass_ReturnValue2__pf);
				if (!b0l__CallFunc_ClassIsChildOf_ReturnValue2__pf)
				{
					CurrentState = 73;
					break;
				}
				CurrentState = 69;
				break;
			}
		case 73:
			{
				b0l__CallFunc_GetObjectClass_ReturnValue__pf = UGameplayStatics::GetObjectClass(b0l__K2Node_Event_OtherActor__pf);
				b0l__CallFunc_ClassIsChildOf_ReturnValue__pf = UKismetMathLibrary::ClassIsChildOf(ATriggerSphere::StaticClass(), b0l__CallFunc_GetObjectClass_ReturnValue__pf);
				if (!b0l__CallFunc_ClassIsChildOf_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = 28;
				break;
			}
		case 84:
			{
				CurrentState = 72;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void APhysicsBallBP_C__pf3208112912::bpf__ExecuteUbergraph_PhysicsBallBP__pf_5(int32 bpp__EntryPoint__pf)
{
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 74:
			{
				b0l__Temp_struct_Variable8__pf = b0l__K2Node_InputActionEvent_Key4__pf;
			}
		case 75:
			{
				StateStack.Push(80);
			}
		case 76:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable3__pf)
				{
					CurrentState = 77;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 77:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable3__pf = true;
			}
		case 78:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 79:
			{
				b0l__Temp_bool_IsClosed_Variable2__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 80:
			{
				if (!b0l__Temp_bool_IsClosed_Variable2__pf)
				{
					CurrentState = 81;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 81:
			{
				b0l__Temp_bool_IsClosed_Variable2__pf = true;
			}
		case 82:
			{
				b0l__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpv__JumpImpulse__pf);
				if(IsValid(bpv__Ball__pf))
				{
					bpv__Ball__pf->AddImpulse(b0l__CallFunc_MakeVector_ReturnValue__pf, FName(TEXT("None")), false);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 83:
			{
				CurrentState = 74;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void APhysicsBallBP_C__pf3208112912::bpf__ExecuteUbergraph_PhysicsBallBP__pf_6(int32 bpp__EntryPoint__pf)
{
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 85:
			{
				b0l__CallFunc_GetPlayerController_ReturnValue4__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(b0l__CallFunc_GetPlayerController_ReturnValue4__pf))
				{
					b0l__CallFunc_GetPlayerController_ReturnValue4__pf->ClientPlayCameraShake(UCharCamShake_C__pf895046141::StaticClass(), 0.300000, ECameraAnimPlaySpace::CameraLocal, FRotator(0.000000,0.000000,0.000000));
				}
			}
		case 86:
			{
				if(IsValid(bpv__Sphere1__pf))
				{
					b0l__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Sphere1__pf->K2_GetComponentLocation();
				}
				UGameplayStatics::PlaySoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(APhysicsBallBP_C__pf3208112912::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed), b0l__CallFunc_K2_GetComponentLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, nullptr, nullptr);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 89:
			{
				b0l__CallFunc_Subtract_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__Energy__pf, 2.000000);
				bpv__Energy__pf = b0l__CallFunc_Subtract_FloatFloat_ReturnValue2__pf;
			}
		case 90:
			{
				b0l__Temp_struct_Variable6__pf = FTransform( FQuat(0.000000,0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				if(IsValid(bpv__Camera__pf))
				{
					b0l__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Camera__pf->K2_GetComponentRotation();
				}
				if(IsValid(bpv__Sphere1__pf))
				{
					b0l__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Sphere1__pf->K2_GetComponentLocation();
				}
				b0l__CallFunc_GreaterGreater_VectorRotator_ReturnValue3__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpv__GunOffset__pf, b0l__CallFunc_K2_GetComponentRotation_ReturnValue__pf);
				b0l__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(b0l__CallFunc_K2_GetComponentLocation_ReturnValue__pf, b0l__CallFunc_GreaterGreater_VectorRotator_ReturnValue3__pf);
				b0l__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(b0l__CallFunc_Add_VectorVector_ReturnValue__pf, b0l__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				b0l__Temp_bool_Variable2__pf = bpv__UsingMotControllers__pf;
				b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AFirstPersonProjectile_C__pf3208112912::StaticClass(), /*out*/ TSwitchValue<bool , FTransform >(b0l__Temp_bool_Variable2__pf, b0l__K2Node_Select_Default__pf, 2, TSwitchPair<bool , FTransform >(false, b0l__CallFunc_MakeTransform_ReturnValue__pf), TSwitchPair<bool , FTransform >(true, b0l__Temp_struct_Variable6__pf)), ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding, nullptr);
			}
		case 91:
			{
				b0l__Temp_struct_Variable6__pf = FTransform( FQuat(0.000000,0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				if(IsValid(bpv__Camera__pf))
				{
					b0l__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Camera__pf->K2_GetComponentRotation();
				}
				if(IsValid(bpv__Sphere1__pf))
				{
					b0l__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Sphere1__pf->K2_GetComponentLocation();
				}
				b0l__CallFunc_GreaterGreater_VectorRotator_ReturnValue3__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpv__GunOffset__pf, b0l__CallFunc_K2_GetComponentRotation_ReturnValue__pf);
				b0l__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(b0l__CallFunc_K2_GetComponentLocation_ReturnValue__pf, b0l__CallFunc_GreaterGreater_VectorRotator_ReturnValue3__pf);
				b0l__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(b0l__CallFunc_Add_VectorVector_ReturnValue__pf, b0l__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				b0l__Temp_bool_Variable2__pf = bpv__UsingMotControllers__pf;
				b0l__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<AFirstPersonProjectile_C__pf3208112912>(UGameplayStatics::FinishSpawningActor(b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, /*out*/ TSwitchValue<bool , FTransform >(b0l__Temp_bool_Variable2__pf, b0l__K2Node_Select_Default__pf, 2, TSwitchPair<bool , FTransform >(false, b0l__CallFunc_MakeTransform_ReturnValue__pf), TSwitchPair<bool , FTransform >(true, b0l__Temp_struct_Variable6__pf))), ECastCheckedType::NullAllowed);
			}
		case 92:
			{
				b0l__Temp_struct_Variable5__pf = FTransform( FQuat(0.000000,0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				if(IsValid(bpv__Camera__pf))
				{
					b0l__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Camera__pf->K2_GetComponentRotation();
				}
				if(IsValid(bpv__Sphere2__pf))
				{
					b0l__CallFunc_K2_GetComponentLocation_ReturnValue2__pf = bpv__Sphere2__pf->K2_GetComponentLocation();
				}
				b0l__Temp_bool_Variable__pf = bpv__UsingMotControllers__pf;
				b0l__CallFunc_GreaterGreater_VectorRotator_ReturnValue4__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpv__GunOffset2__pf, b0l__CallFunc_K2_GetComponentRotation_ReturnValue__pf);
				b0l__CallFunc_Add_VectorVector_ReturnValue2__pf = UKismetMathLibrary::Add_VectorVector(b0l__CallFunc_GreaterGreater_VectorRotator_ReturnValue4__pf, b0l__CallFunc_K2_GetComponentLocation_ReturnValue2__pf);
				b0l__CallFunc_MakeTransform_ReturnValue2__pf = UKismetMathLibrary::MakeTransform(b0l__CallFunc_Add_VectorVector_ReturnValue2__pf, b0l__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AFirstPersonProjectile_C__pf3208112912::StaticClass(), /*out*/ TSwitchValue<bool , FTransform >(b0l__Temp_bool_Variable__pf, b0l__K2Node_Select2_Default__pf, 2, TSwitchPair<bool , FTransform >(false, b0l__CallFunc_MakeTransform_ReturnValue2__pf), TSwitchPair<bool , FTransform >(true, b0l__Temp_struct_Variable5__pf)), ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding, nullptr);
			}
		case 93:
			{
				b0l__Temp_struct_Variable5__pf = FTransform( FQuat(0.000000,0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				if(IsValid(bpv__Camera__pf))
				{
					b0l__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Camera__pf->K2_GetComponentRotation();
				}
				if(IsValid(bpv__Sphere2__pf))
				{
					b0l__CallFunc_K2_GetComponentLocation_ReturnValue2__pf = bpv__Sphere2__pf->K2_GetComponentLocation();
				}
				b0l__Temp_bool_Variable__pf = bpv__UsingMotControllers__pf;
				b0l__CallFunc_GreaterGreater_VectorRotator_ReturnValue4__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpv__GunOffset2__pf, b0l__CallFunc_K2_GetComponentRotation_ReturnValue__pf);
				b0l__CallFunc_Add_VectorVector_ReturnValue2__pf = UKismetMathLibrary::Add_VectorVector(b0l__CallFunc_GreaterGreater_VectorRotator_ReturnValue4__pf, b0l__CallFunc_K2_GetComponentLocation_ReturnValue2__pf);
				b0l__CallFunc_MakeTransform_ReturnValue2__pf = UKismetMathLibrary::MakeTransform(b0l__CallFunc_Add_VectorVector_ReturnValue2__pf, b0l__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				b0l__CallFunc_FinishSpawningActor_ReturnValue2__pf = CastChecked<AFirstPersonProjectile_C__pf3208112912>(UGameplayStatics::FinishSpawningActor(b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf, /*out*/ TSwitchValue<bool , FTransform >(b0l__Temp_bool_Variable__pf, b0l__K2Node_Select2_Default__pf, 2, TSwitchPair<bool , FTransform >(false, b0l__CallFunc_MakeTransform_ReturnValue2__pf), TSwitchPair<bool , FTransform >(true, b0l__Temp_struct_Variable5__pf))), ECastCheckedType::NullAllowed);
			}
		case 94:
			{
				b0l__CallFunc_K2_GetActorLocation_ReturnValue__pf = K2_GetActorLocation();
				UGameplayStatics::PlaySoundAtLocation(this, nullptr, b0l__CallFunc_K2_GetActorLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, nullptr, nullptr);
				CurrentState = 85;
				break;
			}
		case 95:
			{
				CurrentState = 90;
				break;
			}
		case 96:
			{
				b0l__Temp_struct_Variable7__pf = b0l__K2Node_InputActionEvent_Key3__pf;
			}
		case 97:
			{
				StateStack.Push(105);
			}
		case 98:
			{
				StateStack.Push(100);
			}
		case 99:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable2__pf)
				{
					CurrentState = 106;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 100:
			{
				if (!b0l__Temp_bool_IsClosed_Variable4__pf)
				{
					CurrentState = 101;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 101:
			{
				b0l__Temp_bool_IsClosed_Variable4__pf = true;
			}
		case 102:
			{
				if (!true)
				{
					CurrentState = 104;
					break;
				}
			}
		case 103:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 104:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 105:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 106:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable2__pf = true;
			}
		case 107:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 108:
			{
				b0l__Temp_bool_IsClosed_Variable4__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 109:
			{
				CurrentState = 96;
				break;
			}
		case 126:
			{
				b0l__Temp_struct_Variable7__pf = b0l__K2Node_InputActionEvent_Key2__pf;
			}
		case 127:
			{
				StateStack.Push(130);
			}
		case 128:
			{
				StateStack.Push(129);
				CurrentState = 98;
				break;
			}
		case 129:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 130:
			{
				StateStack.Push(131);
				CurrentState = 98;
				break;
			}
		case 131:
			{
				if (!b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 132:
			{
				StateStack.Push(133);
				CurrentState = 89;
				break;
			}
		case 133:
			{
				auto __Local__24 = FLatentActionInfo{};
				__Local__24.Linkage = 134;
				__Local__24.UUID = 30;
				__Local__24.ExecutionFunction = FName(TEXT("ExecuteUbergraph_PhysicsBallBP_6"));
				__Local__24.CallbackTarget = this;
				UKismetSystemLibrary::RetriggerableDelay(this, 0.090000, __Local__24);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 134:
			{
				CurrentState = 130;
				break;
			}
		case 135:
			{
				CurrentState = 126;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void APhysicsBallBP_C__pf3208112912::bpf__ExecuteUbergraph_PhysicsBallBP__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 160);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_Create_ReturnValue2__pf = CastChecked<UPauseScreen_C__pf3208112912>(UWidgetBlueprintLibrary::Create(this, UPauseScreen_C__pf3208112912::StaticClass(), nullptr), ECastCheckedType::NullAllowed);
	if(IsValid(b0l__CallFunc_Create_ReturnValue2__pf))
	{
		b0l__CallFunc_Create_ReturnValue2__pf->AddToViewport(0);
	}
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_SetGamePaused_ReturnValue__pf = UGameplayStatics::SetGamePaused(this, true);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_GetPlayerController_ReturnValue2__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(IsValid(b0l__CallFunc_GetPlayerController_ReturnValue2__pf))
	{
		b0l__CallFunc_GetPlayerController_ReturnValue2__pf->bShowMouseCursor = true;
	}
	return; //KCST_EndOfThread
}
void APhysicsBallBP_C__pf3208112912::bpf__ExecuteUbergraph_PhysicsBallBP__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 155);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__RollTorque__pf, b0l__K2Node_InputAxisEvent_AxisValue__pf);
	b0l__CallFunc_MakeVector_ReturnValue3__pf = UKismetMathLibrary::MakeVector(b0l__CallFunc_Multiply_FloatFloat_ReturnValue2__pf, 0.000000, 0.000000);
	if(IsValid(bpv__Camera__pf))
	{
		b0l__CallFunc_GetRightVector_ReturnValue__pf = bpv__Camera__pf->GetRightVector();
	}
	b0l__CallFunc_Conv_VectorToRotator_ReturnValue2__pf = UKismetMathLibrary::Conv_VectorToRotator(b0l__CallFunc_GetRightVector_ReturnValue__pf);
	b0l__CallFunc_GreaterGreater_VectorRotator_ReturnValue2__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(b0l__CallFunc_MakeVector_ReturnValue3__pf, b0l__CallFunc_Conv_VectorToRotator_ReturnValue2__pf);
	if(IsValid(bpv__Ball__pf))
	{
		bpv__Ball__pf->AddTorque(b0l__CallFunc_GreaterGreater_VectorRotator_ReturnValue2__pf, FName(TEXT("None")), false);
	}
	return; //KCST_EndOfThread
}
void APhysicsBallBP_C__pf3208112912::bpf__ExecuteUbergraph_PhysicsBallBP__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 159);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__RollTorque__pf, b0l__K2Node_InputAxisEvent_AxisValue2__pf);
	b0l__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(0.000000, b0l__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 0.000000);
	if(IsValid(bpv__Camera__pf))
	{
		b0l__CallFunc_GetRightVector_ReturnValue__pf = bpv__Camera__pf->GetRightVector();
	}
	b0l__CallFunc_Conv_VectorToRotator_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToRotator(b0l__CallFunc_GetRightVector_ReturnValue__pf);
	b0l__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(b0l__CallFunc_MakeVector_ReturnValue2__pf, b0l__CallFunc_Conv_VectorToRotator_ReturnValue__pf);
	if(IsValid(bpv__Ball__pf))
	{
		bpv__Ball__pf->AddTorque(b0l__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf, FName(TEXT("None")), false);
	}
	return; //KCST_EndOfThread
}
void APhysicsBallBP_C__pf3208112912::bpf__ExecuteUbergraph_PhysicsBallBP__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 152);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_Multiply_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_InputAxisKeyEvent_AxisValue__pf, -1.000000);
	AddControllerPitchInput(b0l__CallFunc_Multiply_FloatFloat_ReturnValue3__pf);
	return; //KCST_EndOfThread
}
void APhysicsBallBP_C__pf3208112912::bpf__ExecuteUbergraph_PhysicsBallBP__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 153);
	// optimized KCST_UnconditionalGoto
	AddControllerYawInput(b0l__K2Node_InputAxisKeyEvent_AxisValue2__pf);
	return; //KCST_EndOfThread
}
void APhysicsBallBP_C__pf3208112912::bpf__ExecuteUbergraph_PhysicsBallBP__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 158);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_Create_ReturnValue3__pf = CastChecked<UHUDisplay_C__pf3208112912>(UWidgetBlueprintLibrary::Create(this, UHUDisplay_C__pf3208112912::StaticClass(), nullptr), ECastCheckedType::NullAllowed);
	// optimized KCST_UnconditionalGoto
	if(IsValid(b0l__CallFunc_Create_ReturnValue3__pf))
	{
		b0l__CallFunc_Create_ReturnValue3__pf->AddToViewport(0);
	}
	return; //KCST_EndOfThread
}
void APhysicsBallBP_C__pf3208112912::bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf)
{
	b0l__K2Node_Event_OtherActor__pf = bpp__OtherActor__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_4(84);
}
void APhysicsBallBP_C__pf3208112912::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_3(147);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_13__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisKeyEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_10(152);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisKeyEvent_AxisValue2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_11(153);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_112__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_8(155);
}
void APhysicsBallBP_C__pf3208112912::bpf__ReceiveHit__pf(UPrimitiveComponent* bpp__MyComp__pf, AActor* bpp__Other__pf, UPrimitiveComponent* bpp__OtherComp__pf, bool bpp__bSelfMoved__pf, FVector bpp__HitLocation__pf, FVector bpp__HitNormal__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf)
{
	b0l__K2Node_Event_MyComp__pf = bpp__MyComp__pf;
	b0l__K2Node_Event_Other__pf = bpp__Other__pf;
	b0l__K2Node_Event_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_Event_bSelfMoved__pf = bpp__bSelfMoved__pf;
	b0l__K2Node_Event_HitLocation__pf = bpp__HitLocation__pf;
	b0l__K2Node_Event_HitNormal__pf = bpp__HitNormal__pf;
	b0l__K2Node_Event_NormalImpulse__pf = bpp__NormalImpulse__pf;
	b0l__K2Node_Event_Hit__pf = bpp__Hit__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_12(158);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_29__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_9(159);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpActEvt_L_K2Node_InputKeyEvent_9__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_0(157);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpActEvt_D_K2Node_InputKeyEvent_10__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_1(180);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpActEvt_D_K2Node_InputKeyEvent_11__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_1(178);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpActEvt_S_K2Node_InputKeyEvent_12__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_1(176);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpActEvt_S_K2Node_InputKeyEvent_13__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_1(174);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpActEvt_A_K2Node_InputKeyEvent_14__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_1(172);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpActEvt_A_K2Node_InputKeyEvent_15__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key7__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_1(170);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpActEvt_W_K2Node_InputKeyEvent_16__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key8__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_1(168);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpActEvt_W_K2Node_InputKeyEvent_17__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key9__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_1(166);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpActEvt_Pause_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_7(160);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpActEvt_Fire_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_6(135);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpActEvt_Fire_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_6(109);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpTchEvt_K2Node_InputTouchEvent_1__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf)
{
	b0l__K2Node_InputTouchEvent_FingerIndex__pf = bpp__FingerIndex__pf;
	b0l__K2Node_InputTouchEvent_Location__pf = bpp__Location__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_6(95);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpActEvt_Jump_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_5(83);
}
void APhysicsBallBP_C__pf3208112912::bpf__InpActEvt_Jump_K2Node_InputActionEvent_9__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_PhysicsBallBP__pf_2(24);
}
void APhysicsBallBP_C__pf3208112912::bpf__UserConstructionScript__pf()
{
}
