#include "NativizedAssets.h"
#include "checkpoint__pf3208112912.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
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
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformTrack.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformSection.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneColorTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneColorSection.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
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
#include "checkpoint__pf3208112912.h"
void Ucheckpoint_C__pf3208112912::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->UsedAssets.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	// List of all referenced assets
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/Fonts/Atmosphere/Atmosphere-Light.Atmosphere-Light")));
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("Checkpoint_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UCanvasPanel>(__Local__0, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	static TWeakObjectPtr<UProperty> __Local__4{};
	const UProperty* __Local__3 = __Local__4.Get();
	if (nullptr == __Local__3)
	{
		__Local__3 = (UPanelWidget::StaticClass())->FindPropertyByName(FName(TEXT("Slots")));
		check(__Local__3);
		__Local__4 = __Local__3;
	}
	auto& __Local__5 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__2), 0)));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(1);
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__6->LayoutData.Offsets.Left = -328.960938f;
	__Local__6->LayoutData.Offsets.Top = -180.540527f;
	__Local__6->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__6->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__6->bAutoSize = true;
	__Local__6->Parent = __Local__2;
	auto __Local__7 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextBlock_0"));
	__Local__7->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("checkpoint reached"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("511887D94122933F11BF33BBA0B2435D") /* Key */
	);
	__Local__7->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(Ucheckpoint_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__7->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__7->Font.Size = 44;
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	__Local__0->RootWidget = __Local__2;
	auto __Local__8 = NewObject<UMovieScene>(__Local__1, UMovieScene::StaticClass(), TEXT("Checkpoint"));
	static TWeakObjectPtr<UProperty> __Local__10{};
	const UProperty* __Local__9 = __Local__10.Get();
	if (nullptr == __Local__9)
	{
		__Local__9 = (UMovieScene::StaticClass())->FindPropertyByName(FName(TEXT("Possessables")));
		check(__Local__9);
		__Local__10 = __Local__9;
	}
	auto& __Local__11 = (*(__Local__9->ContainerPtrToValuePtr<TArray<FMovieScenePossessable> >((__Local__8), 0)));
	__Local__11 = TArray<FMovieScenePossessable> ();
	__Local__11.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__11.GetData(), 1);
	static TWeakObjectPtr<UProperty> __Local__13{};
	const UProperty* __Local__12 = __Local__13.Get();
	if (nullptr == __Local__12)
	{
		__Local__12 = (FMovieScenePossessable::StaticStruct())->FindPropertyByName(FName(TEXT("Guid")));
		check(__Local__12);
		__Local__13 = __Local__12;
	}
	auto& __Local__14 = (*(__Local__12->ContainerPtrToValuePtr<FGuid >(&(__Local__11[0]), 0)));
	__Local__14 = FGuid(0x3F2EE6A6, 0x43CFFEBA, 0x868B8484, 0x09CAECD2);
	static TWeakObjectPtr<UProperty> __Local__16{};
	const UProperty* __Local__15 = __Local__16.Get();
	if (nullptr == __Local__15)
	{
		__Local__15 = (FMovieScenePossessable::StaticStruct())->FindPropertyByName(FName(TEXT("Name")));
		check(__Local__15);
		__Local__16 = __Local__15;
	}
	auto& __Local__17 = (*(__Local__15->ContainerPtrToValuePtr<FString >(&(__Local__11[0]), 0)));
	__Local__17 = FString(TEXT("TextBlock_0"));
	static TWeakObjectPtr<UProperty> __Local__19{};
	const UProperty* __Local__18 = __Local__19.Get();
	if (nullptr == __Local__18)
	{
		__Local__18 = (FMovieScenePossessable::StaticStruct())->FindPropertyByName(FName(TEXT("PossessedObjectClass")));
		check(__Local__18);
		__Local__19 = __Local__18;
	}
	auto& __Local__20 = (*(__Local__18->ContainerPtrToValuePtr<UClass* >(&(__Local__11[0]), 0)));
	__Local__20 = UTextBlock::StaticClass();
	static TWeakObjectPtr<UProperty> __Local__22{};
	const UProperty* __Local__21 = __Local__22.Get();
	if (nullptr == __Local__21)
	{
		__Local__21 = (UMovieScene::StaticClass())->FindPropertyByName(FName(TEXT("ObjectBindings")));
		check(__Local__21);
		__Local__22 = __Local__21;
	}
	auto& __Local__23 = (*(__Local__21->ContainerPtrToValuePtr<TArray<FMovieSceneBinding> >((__Local__8), 0)));
	__Local__23 = TArray<FMovieSceneBinding> ();
	__Local__23.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__23.GetData(), 1);
	static TWeakObjectPtr<UProperty> __Local__25{};
	const UProperty* __Local__24 = __Local__25.Get();
	if (nullptr == __Local__24)
	{
		__Local__24 = (FMovieSceneBinding::StaticStruct())->FindPropertyByName(FName(TEXT("ObjectGuid")));
		check(__Local__24);
		__Local__25 = __Local__24;
	}
	auto& __Local__26 = (*(__Local__24->ContainerPtrToValuePtr<FGuid >(&(__Local__23[0]), 0)));
	__Local__26 = FGuid(0x3F2EE6A6, 0x43CFFEBA, 0x868B8484, 0x09CAECD2);
	static TWeakObjectPtr<UProperty> __Local__28{};
	const UProperty* __Local__27 = __Local__28.Get();
	if (nullptr == __Local__27)
	{
		__Local__27 = (FMovieSceneBinding::StaticStruct())->FindPropertyByName(FName(TEXT("BindingName")));
		check(__Local__27);
		__Local__28 = __Local__27;
	}
	auto& __Local__29 = (*(__Local__27->ContainerPtrToValuePtr<FString >(&(__Local__23[0]), 0)));
	__Local__29 = FString(TEXT("TextBlock_0"));
	static TWeakObjectPtr<UProperty> __Local__31{};
	const UProperty* __Local__30 = __Local__31.Get();
	if (nullptr == __Local__30)
	{
		__Local__30 = (FMovieSceneBinding::StaticStruct())->FindPropertyByName(FName(TEXT("Tracks")));
		check(__Local__30);
		__Local__31 = __Local__30;
	}
	auto& __Local__32 = (*(__Local__30->ContainerPtrToValuePtr<TArray<UMovieSceneTrack*> >(&(__Local__23[0]), 0)));
	__Local__32 = TArray<UMovieSceneTrack*> ();
	__Local__32.Reserve(2);
	auto __Local__33 = NewObject<UMovieScene2DTransformTrack>(__Local__8, UMovieScene2DTransformTrack::StaticClass(), TEXT("MovieScene2DTransformTrack_1"));
	static TWeakObjectPtr<UProperty> __Local__35{};
	const UProperty* __Local__34 = __Local__35.Get();
	if (nullptr == __Local__34)
	{
		__Local__34 = (UMovieScenePropertyTrack::StaticClass())->FindPropertyByName(FName(TEXT("PropertyName")));
		check(__Local__34);
		__Local__35 = __Local__34;
	}
	auto& __Local__36 = (*(__Local__34->ContainerPtrToValuePtr<FName >((__Local__33), 0)));
	__Local__36 = FName(TEXT("RenderTransform"));
	static TWeakObjectPtr<UProperty> __Local__38{};
	const UProperty* __Local__37 = __Local__38.Get();
	if (nullptr == __Local__37)
	{
		__Local__37 = (UMovieScenePropertyTrack::StaticClass())->FindPropertyByName(FName(TEXT("PropertyPath")));
		check(__Local__37);
		__Local__38 = __Local__37;
	}
	auto& __Local__39 = (*(__Local__37->ContainerPtrToValuePtr<FString >((__Local__33), 0)));
	__Local__39 = FString(TEXT("RenderTransform"));
	static TWeakObjectPtr<UProperty> __Local__41{};
	const UProperty* __Local__40 = __Local__41.Get();
	if (nullptr == __Local__40)
	{
		__Local__40 = (UMovieScenePropertyTrack::StaticClass())->FindPropertyByName(FName(TEXT("Sections")));
		check(__Local__40);
		__Local__41 = __Local__40;
	}
	auto& __Local__42 = (*(__Local__40->ContainerPtrToValuePtr<TArray<UMovieSceneSection*> >((__Local__33), 0)));
	__Local__42 = TArray<UMovieSceneSection*> ();
	__Local__42.Reserve(1);
	auto __Local__43 = NewObject<UMovieScene2DTransformSection>(__Local__33, UMovieScene2DTransformSection::StaticClass(), TEXT("MovieScene2DTransformSection_1"));
	static TWeakObjectPtr<UProperty> __Local__45{};
	const UProperty* __Local__44 = __Local__45.Get();
	if (nullptr == __Local__44)
	{
		__Local__44 = (UMovieScene2DTransformSection::StaticClass())->FindPropertyByName(FName(TEXT("Translation")));
		check(__Local__44);
		__Local__45 = __Local__44;
	}
	auto& __Local__46 = (*(__Local__44->ContainerPtrToValuePtr<FRichCurve >((__Local__43), 0)));
	__Local__46.Keys = TArray<FRichCurveKey> ();
	__Local__46.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__46.Keys.GetData(), 1);
	__Local__46.Keys[0].InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__47 = (*(__Local__44->ContainerPtrToValuePtr<FRichCurve >((__Local__43), 1)));
	__Local__47.Keys = TArray<FRichCurveKey> ();
	__Local__47.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__47.Keys.GetData(), 2);
	__Local__47.Keys[0].InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__47.Keys[0].Value = 268.879303f;
	__Local__47.Keys[1].InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__47.Keys[1].Time = 2.000000f;
	__Local__47.Keys[1].Value = -66.272888f;
	static TWeakObjectPtr<UProperty> __Local__49{};
	const UProperty* __Local__48 = __Local__49.Get();
	if (nullptr == __Local__48)
	{
		__Local__48 = (UMovieScene2DTransformSection::StaticClass())->FindPropertyByName(FName(TEXT("Rotation")));
		check(__Local__48);
		__Local__49 = __Local__48;
	}
	auto& __Local__50 = (*(__Local__48->ContainerPtrToValuePtr<FRichCurve >((__Local__43), 0)));
	__Local__50.Keys = TArray<FRichCurveKey> ();
	__Local__50.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__50.Keys.GetData(), 1);
	__Local__50.Keys[0].InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	static TWeakObjectPtr<UProperty> __Local__52{};
	const UProperty* __Local__51 = __Local__52.Get();
	if (nullptr == __Local__51)
	{
		__Local__51 = (UMovieScene2DTransformSection::StaticClass())->FindPropertyByName(FName(TEXT("Scale")));
		check(__Local__51);
		__Local__52 = __Local__51;
	}
	auto& __Local__53 = (*(__Local__51->ContainerPtrToValuePtr<FRichCurve >((__Local__43), 0)));
	__Local__53.Keys = TArray<FRichCurveKey> ();
	__Local__53.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__53.Keys.GetData(), 1);
	__Local__53.Keys[0].InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__53.Keys[0].Value = 1.000000f;
	auto& __Local__54 = (*(__Local__51->ContainerPtrToValuePtr<FRichCurve >((__Local__43), 1)));
	__Local__54.Keys = TArray<FRichCurveKey> ();
	__Local__54.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__54.Keys.GetData(), 1);
	__Local__54.Keys[0].InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__54.Keys[0].Value = 1.000000f;
	static TWeakObjectPtr<UProperty> __Local__56{};
	const UProperty* __Local__55 = __Local__56.Get();
	if (nullptr == __Local__55)
	{
		__Local__55 = (UMovieScene2DTransformSection::StaticClass())->FindPropertyByName(FName(TEXT("Shear")));
		check(__Local__55);
		__Local__56 = __Local__55;
	}
	auto& __Local__57 = (*(__Local__55->ContainerPtrToValuePtr<FRichCurve >((__Local__43), 0)));
	__Local__57.Keys = TArray<FRichCurveKey> ();
	__Local__57.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__57.Keys.GetData(), 1);
	__Local__57.Keys[0].InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__58 = (*(__Local__55->ContainerPtrToValuePtr<FRichCurve >((__Local__43), 1)));
	__Local__58.Keys = TArray<FRichCurveKey> ();
	__Local__58.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__58.Keys.GetData(), 1);
	__Local__58.Keys[0].InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	static TWeakObjectPtr<UProperty> __Local__60{};
	const UProperty* __Local__59 = __Local__60.Get();
	if (nullptr == __Local__59)
	{
		__Local__59 = (UMovieSceneSection::StaticClass())->FindPropertyByName(FName(TEXT("EndTime")));
		check(__Local__59);
		__Local__60 = __Local__59;
	}
	auto& __Local__61 = (*(__Local__59->ContainerPtrToValuePtr<float >((__Local__43), 0)));
	__Local__61 = 2.000000f;
	__Local__42.Add(__Local__43);
	__Local__32.Add(__Local__33);
	auto __Local__62 = NewObject<UMovieSceneColorTrack>(__Local__8, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_0"));
	auto& __Local__63 = (*(__Local__34->ContainerPtrToValuePtr<FName >((__Local__62), 0)));
	__Local__63 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__64 = (*(__Local__37->ContainerPtrToValuePtr<FString >((__Local__62), 0)));
	__Local__64 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__65 = (*(__Local__40->ContainerPtrToValuePtr<TArray<UMovieSceneSection*> >((__Local__62), 0)));
	__Local__65 = TArray<UMovieSceneSection*> ();
	__Local__65.Reserve(1);
	auto __Local__66 = NewObject<UMovieSceneColorSection>(__Local__62, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_0"));
	static TWeakObjectPtr<UProperty> __Local__68{};
	const UProperty* __Local__67 = __Local__68.Get();
	if (nullptr == __Local__67)
	{
		__Local__67 = (UMovieSceneColorSection::StaticClass())->FindPropertyByName(FName(TEXT("RedCurve")));
		check(__Local__67);
		__Local__68 = __Local__67;
	}
	auto& __Local__69 = (*(__Local__67->ContainerPtrToValuePtr<FRichCurve >((__Local__66), 0)));
	__Local__69.Keys = TArray<FRichCurveKey> ();
	__Local__69.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__69.Keys.GetData(), 1);
	__Local__69.Keys[0].InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__69.Keys[0].Value = 1.000000f;
	static TWeakObjectPtr<UProperty> __Local__71{};
	const UProperty* __Local__70 = __Local__71.Get();
	if (nullptr == __Local__70)
	{
		__Local__70 = (UMovieSceneColorSection::StaticClass())->FindPropertyByName(FName(TEXT("GreenCurve")));
		check(__Local__70);
		__Local__71 = __Local__70;
	}
	auto& __Local__72 = (*(__Local__70->ContainerPtrToValuePtr<FRichCurve >((__Local__66), 0)));
	__Local__72.Keys = TArray<FRichCurveKey> ();
	__Local__72.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__72.Keys.GetData(), 1);
	__Local__72.Keys[0].InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__72.Keys[0].Value = 1.000000f;
	static TWeakObjectPtr<UProperty> __Local__74{};
	const UProperty* __Local__73 = __Local__74.Get();
	if (nullptr == __Local__73)
	{
		__Local__73 = (UMovieSceneColorSection::StaticClass())->FindPropertyByName(FName(TEXT("BlueCurve")));
		check(__Local__73);
		__Local__74 = __Local__73;
	}
	auto& __Local__75 = (*(__Local__73->ContainerPtrToValuePtr<FRichCurve >((__Local__66), 0)));
	__Local__75.Keys = TArray<FRichCurveKey> ();
	__Local__75.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__75.Keys.GetData(), 1);
	__Local__75.Keys[0].InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__75.Keys[0].Value = 1.000000f;
	static TWeakObjectPtr<UProperty> __Local__77{};
	const UProperty* __Local__76 = __Local__77.Get();
	if (nullptr == __Local__76)
	{
		__Local__76 = (UMovieSceneColorSection::StaticClass())->FindPropertyByName(FName(TEXT("AlphaCurve")));
		check(__Local__76);
		__Local__77 = __Local__76;
	}
	auto& __Local__78 = (*(__Local__76->ContainerPtrToValuePtr<FRichCurve >((__Local__66), 0)));
	__Local__78.Keys = TArray<FRichCurveKey> ();
	__Local__78.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__78.Keys.GetData(), 2);
	__Local__78.Keys[0].InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__78.Keys[1].InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__78.Keys[1].Time = 2.000000f;
	__Local__78.Keys[1].Value = 1.000000f;
	auto& __Local__79 = (*(__Local__59->ContainerPtrToValuePtr<float >((__Local__66), 0)));
	__Local__79 = 2.000000f;
	__Local__65.Add(__Local__66);
	__Local__32.Add(__Local__62);
	static TWeakObjectPtr<UProperty> __Local__81{};
	const UProperty* __Local__80 = __Local__81.Get();
	if (nullptr == __Local__80)
	{
		__Local__80 = (UMovieScene::StaticClass())->FindPropertyByName(FName(TEXT("PlaybackRange")));
		check(__Local__80);
		__Local__81 = __Local__80;
	}
	auto& __Local__82 = (*(__Local__80->ContainerPtrToValuePtr<FFloatRange >((__Local__8), 0)));
	__Local__82 = FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(2.000000));
	__Local__1->MovieScene = __Local__8;
	__Local__1->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__1->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__1->AnimationBindings.GetData(), 1);
	__Local__1->AnimationBindings[0].WidgetName = FName(TEXT("TextBlock_0"));
	__Local__1->AnimationBindings[0].AnimationGuid = FGuid(0x3F2EE6A6, 0x43CFFEBA, 0x868B8484, 0x09CAECD2);
}
Ucheckpoint_C__pf3208112912::Ucheckpoint_C__pf3208112912(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (Ucheckpoint_C__pf3208112912::StaticClass() == GetClass()))
	{
		Ucheckpoint_C__pf3208112912::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
}
void Ucheckpoint_C__pf3208112912::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void Ucheckpoint_C__pf3208112912::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	AssetsToLoad.Add({FName(TEXT("/Game/Fonts/Atmosphere/Atmosphere-Light")), FName(TEXT("Atmosphere-Light")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
}
struct FRegisterHelper__Ucheckpoint_C__pf3208112912
{
	FRegisterHelper__Ucheckpoint_C__pf3208112912()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/RollingBP/Blueprints/checkpoint"), &Ucheckpoint_C__pf3208112912::__StaticDependenciesAssets);
	}
	static FRegisterHelper__Ucheckpoint_C__pf3208112912 Instance;
};
FRegisterHelper__Ucheckpoint_C__pf3208112912 FRegisterHelper__Ucheckpoint_C__pf3208112912::Instance;
void Ucheckpoint_C__pf3208112912::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__83;
	SlotNames.Append(__Local__83);
}
void Ucheckpoint_C__pf3208112912::CustomNativeInitilize()
{
	TArray<UWidgetAnimation*>  __Local__84;
	__Local__84.Reserve(1);
	__Local__84.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(Ucheckpoint_C__pf3208112912::StaticClass())->MiscConvertedSubobjects[1]));
	TArray<FDelegateRuntimeBinding>  __Local__85;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(Ucheckpoint_C__pf3208112912::StaticClass())->MiscConvertedSubobjects[0]), __Local__84, __Local__85, nullptr);
}
void Ucheckpoint_C__pf3208112912::PreSave()
{
	Super::PreSave();
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
