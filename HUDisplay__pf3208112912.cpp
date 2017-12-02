#include "NativizedAssets.h"
#include "HUDisplay__pf3208112912.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/ProgressBar.h"
#include "HUDisplay__pf3208112912.h"
#include "PhysicsBallBP__pf3208112912.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Classes/Object.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Animation/VertexAnim/VertexAnimBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
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
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
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
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
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
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
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
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/Slate/Public/Widgets/Notifications/SProgressBar.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
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
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "FirstPersonProjectile__pf3208112912.h"
#include "BallCharacter2__pf3208112912.h"
#include "EnergyBall__pf3208112912.h"
#include "BallCharacter__pf3208112912.h"
#include "EnemyProjectile__pf3208112912.h"
#include "CharCamShake__pf895046141.h"
#include "BallCharacter3__pf3208112912.h"
#include "Victory__pf3208112912.h"
#include "MyGameSave__pf3208112912.h"
#include "checkpoint__pf3208112912.h"
#include "PauseScreen__pf3208112912.h"
#include "Options__pf3208112912.h"
#include "StartScreen__pf3208112912.h"
#include "About__pf3208112912.h"
void UHUDisplay_C__pf3208112912::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->UsedAssets.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	// List of all referenced converted classes
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
	extern UClass* Z_Construct_UClass_AEnemyProjectile_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AEnemyProjectile_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UCharCamShake_C__pf895046141();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UCharCamShake_C__pf895046141());
	extern UClass* Z_Construct_UClass_ABallCharacter3_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ABallCharacter3_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UVictory_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UVictory_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UMyGameSave_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UMyGameSave_C__pf3208112912());
	extern UClass* Z_Construct_UClass_Ucheckpoint_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_Ucheckpoint_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UPauseScreen_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UPauseScreen_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UOptions_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UOptions_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UStartScreen_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UStartScreen_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UAbout_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UAbout_C__pf3208112912());
	// List of all referenced assets
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/Fonts/Atmosphere/Atmosphere-Regular.Atmosphere-Regular")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Engine/EngineFonts/Roboto.Roboto")));
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
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/Fonts/Atmosphere/Atmosphere-Light.Atmosphere-Light")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Moving.Moving")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Check_Point.Check_Point")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/StarterContent/Energy_Critical.Energy_Critical")));
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UCanvasPanel>(__Local__0, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	static TWeakObjectPtr<UProperty> __Local__3{};
	const UProperty* __Local__2 = __Local__3.Get();
	if (nullptr == __Local__2)
	{
		__Local__2 = (UPanelWidget::StaticClass())->FindPropertyByName(FName(TEXT("Slots")));
		check(__Local__2);
		__Local__3 = __Local__2;
	}
	auto& __Local__4 = (*(__Local__2->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__1), 0)));
	__Local__4 = TArray<UPanelSlot*> ();
	__Local__4.Reserve(3);
	auto __Local__5 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_3"));
	__Local__5->LayoutData.Offsets.Left = 64.000000f;
	__Local__5->LayoutData.Offsets.Top = 120.000000f;
	__Local__5->bAutoSize = true;
	__Local__5->ZOrder = -1;
	__Local__5->Parent = __Local__1;
	auto __Local__6 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_1"));
	auto& __Local__7 = (*(__Local__2->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__6), 0)));
	__Local__7 = TArray<UPanelSlot*> ();
	__Local__7.Reserve(1);
	auto __Local__8 = NewObject<UHorizontalBoxSlot>(__Local__6, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__8->Size.SizeRule = ESlateSizeRule::Fill;
	__Local__8->Parent = __Local__6;
	auto __Local__9 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("energy"));
	__Local__9->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Energy"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("ABF1C1154BE17DEF225A9084C2F206B3") /* Key */
	);
	__Local__9->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UHUDisplay_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__9->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__9->Slot = __Local__8;
	__Local__8->Content = __Local__9;
	__Local__7.Add(__Local__8);
	__Local__6->Slot = __Local__5;
	__Local__5->Content = __Local__6;
	__Local__4.Add(__Local__5);
	auto __Local__10 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_4"));
	__Local__10->LayoutData.Offsets.Left = 260.408417f;
	__Local__10->LayoutData.Offsets.Top = 178.810806f;
	__Local__10->LayoutData.Offsets.Right = 405.126190f;
	__Local__10->LayoutData.Offsets.Bottom = 23.343105f;
	__Local__10->LayoutData.Alignment = FVector2D(0.500000, 1.000000);
	__Local__10->ZOrder = -1;
	__Local__10->Parent = __Local__1;
	auto __Local__11 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HorizontalBoxEnergy"));
	auto& __Local__12 = (*(__Local__2->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__11), 0)));
	__Local__12 = TArray<UPanelSlot*> ();
	__Local__12.Reserve(1);
	auto __Local__13 = NewObject<UHorizontalBoxSlot>(__Local__11, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_5"));
	__Local__13->Size.SizeRule = ESlateSizeRule::Fill;
	__Local__13->Parent = __Local__11;
	auto __Local__14 = NewObject<UVerticalBox>(__Local__0, UVerticalBox::StaticClass(), TEXT("VerticalBox_39"));
	auto& __Local__15 = (*(__Local__2->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__14), 0)));
	__Local__15 = TArray<UPanelSlot*> ();
	__Local__15.Reserve(1);
	auto __Local__16 = NewObject<UVerticalBoxSlot>(__Local__14, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_6"));
	__Local__16->Size.SizeRule = ESlateSizeRule::Fill;
	__Local__16->Parent = __Local__14;
	auto __Local__17 = NewObject<UProgressBar>(__Local__0, UProgressBar::StaticClass(), TEXT("ProgressBarEnergy"));
	__Local__17->FillColorAndOpacity = FLinearColor(0.039216, 1.000000, 0.000000, 1.000000);
	__Local__17->Slot = __Local__16;
	__Local__16->Content = __Local__17;
	__Local__15.Add(__Local__16);
	__Local__14->Slot = __Local__13;
	__Local__13->Content = __Local__14;
	__Local__12.Add(__Local__13);
	__Local__11->Slot = __Local__10;
	__Local__11->RenderTransform.Shear = FVector2D(-35.770340, 0.000000);
	__Local__10->Content = __Local__11;
	__Local__4.Add(__Local__10);
	auto __Local__18 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_1"));
	__Local__18->LayoutData.Offsets.Left = 767.039063f;
	__Local__18->LayoutData.Offsets.Top = -416.540527f;
	__Local__18->LayoutData.Offsets.Right = 151.000000f;
	__Local__18->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__18->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__18->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__18->Parent = __Local__1;
	auto __Local__19 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextBlock_107"));
	__Local__19->Slot = __Local__18;
	__Local__18->Content = __Local__19;
	__Local__4.Add(__Local__18);
	__Local__0->RootWidget = __Local__1;
}
UHUDisplay_C__pf3208112912::UHUDisplay_C__pf3208112912(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UHUDisplay_C__pf3208112912::StaticClass() == GetClass()))
	{
		UHUDisplay_C__pf3208112912::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__MyBall__pf = nullptr;
}
void UHUDisplay_C__pf3208112912::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UHUDisplay_C__pf3208112912::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	AssetsToLoad.Add({FName(TEXT("/Game/Fonts/Atmosphere/Atmosphere-Regular")), FName(TEXT("Atmosphere-Regular")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Engine/EngineFonts/Roboto")), FName(TEXT("Roboto")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
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
	AssetsToLoad.Add({FName(TEXT("/Game/Fonts/Atmosphere/Atmosphere-Light")), FName(TEXT("Atmosphere-Light")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Moving")), FName(TEXT("Moving")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Check_Point")), FName(TEXT("Check_Point")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/StarterContent/Energy_Critical")), FName(TEXT("Energy_Critical")), FName(TEXT("/Script/Engine")), FName(TEXT("SoundWave"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/PhysicsBallBP")), FName(TEXT("PhysicsBallBP_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/FirstPersonProjectile")), FName(TEXT("FirstPersonProjectile_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/BallCharacter2")), FName(TEXT("BallCharacter2_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/EnergyBall")), FName(TEXT("EnergyBall_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/BallCharacter")), FName(TEXT("BallCharacter_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/EnemyProjectile")), FName(TEXT("EnemyProjectile_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/CharCamShake")), FName(TEXT("CharCamShake_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/BallCharacter3")), FName(TEXT("BallCharacter3_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/Victory")), FName(TEXT("Victory_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/MyGameSave")), FName(TEXT("MyGameSave_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/checkpoint")), FName(TEXT("checkpoint_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/PauseScreen")), FName(TEXT("PauseScreen_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/Options")), FName(TEXT("Options_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/StartScreen")), FName(TEXT("StartScreen_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/About")), FName(TEXT("About_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
}
struct FRegisterHelper__UHUDisplay_C__pf3208112912
{
	FRegisterHelper__UHUDisplay_C__pf3208112912()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/RollingBP/Blueprints/HUDisplay"), &UHUDisplay_C__pf3208112912::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UHUDisplay_C__pf3208112912 Instance;
};
FRegisterHelper__UHUDisplay_C__pf3208112912 FRegisterHelper__UHUDisplay_C__pf3208112912::Instance;
void UHUDisplay_C__pf3208112912::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__20;
	SlotNames.Append(__Local__20);
}
void UHUDisplay_C__pf3208112912::CustomNativeInitilize()
{
	TArray<UWidgetAnimation*>  __Local__21;
	TArray<FDelegateRuntimeBinding>  __Local__22;
	__Local__22.AddUninitialized(1);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__22.GetData(), 1);
	__Local__22[0].ObjectName = FString(TEXT("ProgressBarEnergy"));
	__Local__22[0].PropertyName = FName(TEXT("Percent"));
	static TWeakObjectPtr<UProperty> __Local__24{};
	const UProperty* __Local__23 = __Local__24.Get();
	if (nullptr == __Local__23)
	{
		__Local__23 = (FDynamicPropertyPath::StaticStruct())->FindPropertyByName(FName(TEXT("Segments")));
		check(__Local__23);
		__Local__24 = __Local__23;
	}
	auto& __Local__25 = (*(__Local__23->ContainerPtrToValuePtr<TArray<FPropertyPathSegment> >(&(__Local__22[0].SourcePath), 0)));
	__Local__25 = TArray<FPropertyPathSegment> ();
	__Local__25.AddUninitialized(2);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__25.GetData(), 2);
	__Local__25[0].Name = FName(TEXT("MyBall"));
	__Local__25[1].Name = FName(TEXT("E_Perc"));
	__Local__22[0].Kind = EBindingKind::Property;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UHUDisplay_C__pf3208112912::StaticClass())->MiscConvertedSubobjects[0]), __Local__21, __Local__22, nullptr);
}
void UHUDisplay_C__pf3208112912::PreSave()
{
	Super::PreSave();
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UHUDisplay_C__pf3208112912::bpf__ExecuteUbergraph_HUDisplay__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_GetPlayerPawn_ReturnValue__pf = UGameplayStatics::GetPlayerPawn(this, 0);
	b0l__K2Node_DynamicCast_AsPhysics_Ball_BP__pf = Cast<APhysicsBallBP_C__pf3208112912>(b0l__CallFunc_GetPlayerPawn_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsPhysics_Ball_BP__pf != nullptr);
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpv__MyBall__pf = b0l__K2Node_DynamicCast_AsPhysics_Ball_BP__pf;
	return; // KCST_GotoReturn
}
void UHUDisplay_C__pf3208112912::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_HUDisplay__pf_0(2);
}
