#include "NativizedAssets.h"
#include "PauseScreen__pf3208112912.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "PauseScreen__pf3208112912.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Classes/Object.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
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
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Options__pf3208112912.h"
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
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
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
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "StartScreen__pf3208112912.h"
#include "MyGameSave__pf3208112912.h"
#include "About__pf3208112912.h"
void UPauseScreen_C__pf3208112912::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->UsedAssets.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	// List of all referenced converted classes
	extern UClass* Z_Construct_UClass_UOptions_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UOptions_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UStartScreen_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UStartScreen_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UMyGameSave_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UMyGameSave_C__pf3208112912());
	extern UClass* Z_Construct_UClass_UAbout_C__pf3208112912();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UAbout_C__pf3208112912());
	// List of all referenced assets
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Game/Fonts/Atmosphere/Atmosphere-Regular.Atmosphere-Regular")));
	InDynamicClass->UsedAssets.Add(LoadObject<UObject>(nullptr, TEXT("/Engine/EngineFonts/Roboto.Roboto")));
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(12);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 12);
	__Local__0->ComponentDelegateBindings[0].ComponentPropertyName = FName(TEXT("Retry"));
	__Local__0->ComponentDelegateBindings[0].DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__0->ComponentDelegateBindings[0].FunctionNameToBind = FName(TEXT("BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[1].ComponentPropertyName = FName(TEXT("Retry"));
	__Local__0->ComponentDelegateBindings[1].DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__0->ComponentDelegateBindings[1].FunctionNameToBind = FName(TEXT("BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[2].ComponentPropertyName = FName(TEXT("Retry"));
	__Local__0->ComponentDelegateBindings[2].DelegatePropertyName = FName(TEXT("OnPressed"));
	__Local__0->ComponentDelegateBindings[2].FunctionNameToBind = FName(TEXT("BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[3].ComponentPropertyName = FName(TEXT("Retry"));
	__Local__0->ComponentDelegateBindings[3].DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__0->ComponentDelegateBindings[3].FunctionNameToBind = FName(TEXT("BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[4].ComponentPropertyName = FName(TEXT("ExitButton"));
	__Local__0->ComponentDelegateBindings[4].DelegatePropertyName = FName(TEXT("OnPressed"));
	__Local__0->ComponentDelegateBindings[4].FunctionNameToBind = FName(TEXT("BndEvt__ExitButton_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[5].ComponentPropertyName = FName(TEXT("OptionsButton"));
	__Local__0->ComponentDelegateBindings[5].DelegatePropertyName = FName(TEXT("OnPressed"));
	__Local__0->ComponentDelegateBindings[5].FunctionNameToBind = FName(TEXT("BndEvt__OptionsButton_K2Node_ComponentBoundEvent_37_OnButtonPressedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[6].ComponentPropertyName = FName(TEXT("ExitButton"));
	__Local__0->ComponentDelegateBindings[6].DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__0->ComponentDelegateBindings[6].FunctionNameToBind = FName(TEXT("BndEvt__ExitButton_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[7].ComponentPropertyName = FName(TEXT("OptionsButton"));
	__Local__0->ComponentDelegateBindings[7].DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__0->ComponentDelegateBindings[7].FunctionNameToBind = FName(TEXT("BndEvt__OptionsButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[8].ComponentPropertyName = FName(TEXT("OptionsButton"));
	__Local__0->ComponentDelegateBindings[8].DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__0->ComponentDelegateBindings[8].FunctionNameToBind = FName(TEXT("BndEvt__OptionsButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[9].ComponentPropertyName = FName(TEXT("OptionsButton"));
	__Local__0->ComponentDelegateBindings[9].DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__0->ComponentDelegateBindings[9].FunctionNameToBind = FName(TEXT("BndEvt__OptionsButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[10].ComponentPropertyName = FName(TEXT("ExitButton"));
	__Local__0->ComponentDelegateBindings[10].DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__0->ComponentDelegateBindings[10].FunctionNameToBind = FName(TEXT("BndEvt__ExitButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[11].ComponentPropertyName = FName(TEXT("ExitButton"));
	__Local__0->ComponentDelegateBindings[11].DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__0->ComponentDelegateBindings[11].FunctionNameToBind = FName(TEXT("BndEvt__ExitButton_K2Node_ComponentBoundEvent_83_OnButtonHoverEvent__DelegateSignature"));
	auto __Local__2 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
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
	__Local__5.Reserve(5);
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_20"));
	__Local__6->LayoutData.Offsets.Right = 2.102173f;
	__Local__6->LayoutData.Offsets.Bottom = 9.039063f;
	__Local__6->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__6->Parent = __Local__2;
	auto __Local__7 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_0"));
	__Local__7->ColorAndOpacity = FLinearColor(0.000000, 0.000000, 0.000000, 0.500000);
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	auto __Local__8 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__8->LayoutData.Offsets.Left = -324.000000f;
	__Local__8->LayoutData.Offsets.Top = -352.000000f;
	__Local__8->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__8->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__8->bAutoSize = true;
	__Local__8->Parent = __Local__2;
	auto __Local__9 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_2"));
	auto& __Local__10 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__9), 0)));
	__Local__10 = TArray<UPanelSlot*> ();
	__Local__10.Reserve(1);
	auto __Local__11 = NewObject<UHorizontalBoxSlot>(__Local__9, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__11->Size.SizeRule = ESlateSizeRule::Fill;
	__Local__11->Parent = __Local__9;
	auto __Local__12 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_2"));
	auto& __Local__13 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__12), 0)));
	__Local__13 = TArray<UPanelSlot*> ();
	__Local__13.Reserve(1);
	auto __Local__14 = NewObject<UVerticalBoxSlot>(__Local__12, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_2"));
	__Local__14->Size.SizeRule = ESlateSizeRule::Fill;
	__Local__14->Parent = __Local__12;
	auto __Local__15 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("paused"));
	__Local__15->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Paused"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("8448CB89496E43F85AD4719C4EEE02BC") /* Key */
	);
	__Local__15->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseScreen_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__15->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__15->Font.Size = 120;
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__13.Add(__Local__14);
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__10.Add(__Local__11);
	__Local__9->Slot = __Local__8;
	__Local__8->Content = __Local__9;
	__Local__5.Add(__Local__8);
	auto __Local__16 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_16"));
	__Local__16->LayoutData.Offsets.Left = -144.960938f;
	__Local__16->LayoutData.Offsets.Top = 3.459473f;
	__Local__16->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__16->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__16->bAutoSize = true;
	__Local__16->Parent = __Local__2;
	auto __Local__17 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("OptionsButton"));
	__Local__17->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__18 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__17), 0)));
	__Local__18 = TArray<UPanelSlot*> ();
	__Local__18.Reserve(1);
	auto __Local__19 = NewObject<UButtonSlot>(__Local__17, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__19->Parent = __Local__17;
	auto __Local__20 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("options"));
	__Local__20->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Options"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("65E81A5D4D40CFF25007208BD9D4EB97") /* Key */
	);
	__Local__20->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseScreen_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__20->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__20->Font.Size = 44;
	__Local__20->Slot = __Local__19;
	__Local__19->Content = __Local__20;
	__Local__18.Add(__Local__19);
	__Local__17->Slot = __Local__16;
	__Local__16->Content = __Local__17;
	__Local__5.Add(__Local__16);
	auto __Local__21 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_17"));
	__Local__21->LayoutData.Offsets.Left = -308.000000f;
	__Local__21->LayoutData.Offsets.Top = 120.000000f;
	__Local__21->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__21->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__21->bAutoSize = true;
	__Local__21->Parent = __Local__2;
	auto __Local__22 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("ExitButton"));
	__Local__22->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__23 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__22), 0)));
	__Local__23 = TArray<UPanelSlot*> ();
	__Local__23.Reserve(1);
	auto __Local__24 = NewObject<UButtonSlot>(__Local__22, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__24->Parent = __Local__22;
	auto __Local__25 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("etmm"));
	__Local__25->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Exit to Main Menu"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("67D471BF48F5E9907BE5AE923D1D6766") /* Key */
	);
	__Local__25->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseScreen_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__25->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__25->Font.Size = 44;
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__23.Add(__Local__24);
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__5.Add(__Local__21);
	auto __Local__26 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__26->LayoutData.Offsets.Left = -136.960938f;
	__Local__26->LayoutData.Offsets.Top = -108.540527f;
	__Local__26->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__26->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__26->bAutoSize = true;
	__Local__26->Parent = __Local__2;
	auto __Local__27 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Retry"));
	__Local__27->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__28 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__27), 0)));
	__Local__28 = TArray<UPanelSlot*> ();
	__Local__28.Reserve(1);
	auto __Local__29 = NewObject<UButtonSlot>(__Local__27, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__29->Parent = __Local__27;
	auto __Local__30 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_0"));
	__Local__30->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Resume"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("C7DEAB5D46AF9C07B921E994BF0BE460") /* Key */
	);
	__Local__30->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseScreen_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__30->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__30->Font.Size = 44;
	__Local__30->Slot = __Local__29;
	__Local__29->Content = __Local__30;
	__Local__28.Add(__Local__29);
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__5.Add(__Local__26);
	__Local__1->RootWidget = __Local__2;
}
UPauseScreen_C__pf3208112912::UPauseScreen_C__pf3208112912(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UPauseScreen_C__pf3208112912::StaticClass() == GetClass()))
	{
		UPauseScreen_C__pf3208112912::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
}
void UPauseScreen_C__pf3208112912::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UPauseScreen_C__pf3208112912::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	AssetsToLoad.Add({FName(TEXT("/Game/Fonts/Atmosphere/Atmosphere-Regular")), FName(TEXT("Atmosphere-Regular")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Engine/EngineFonts/Roboto")), FName(TEXT("Roboto")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/Options")), FName(TEXT("Options_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/StartScreen")), FName(TEXT("StartScreen_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/MyGameSave")), FName(TEXT("MyGameSave_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/About")), FName(TEXT("About_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
}
struct FRegisterHelper__UPauseScreen_C__pf3208112912
{
	FRegisterHelper__UPauseScreen_C__pf3208112912()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/RollingBP/Blueprints/PauseScreen"), &UPauseScreen_C__pf3208112912::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UPauseScreen_C__pf3208112912 Instance;
};
FRegisterHelper__UPauseScreen_C__pf3208112912 FRegisterHelper__UPauseScreen_C__pf3208112912::Instance;
void UPauseScreen_C__pf3208112912::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__31;
	SlotNames.Append(__Local__31);
}
void UPauseScreen_C__pf3208112912::CustomNativeInitilize()
{
	TArray<UWidgetAnimation*>  __Local__32;
	TArray<FDelegateRuntimeBinding>  __Local__33;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UPauseScreen_C__pf3208112912::StaticClass())->MiscConvertedSubobjects[0]), __Local__32, __Local__33, nullptr);
}
void UPauseScreen_C__pf3208112912::PreSave()
{
	Super::PreSave();
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UPauseScreen_C__pf3208112912::bpf__ExecuteUbergraph_PauseScreen__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 6);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Retry__pf))
	{
		bpv__Retry__pf->SetBackgroundColor(FLinearColor(0.682353,0.682353,0.682353,1.000000));
	}
	return; // KCST_GotoReturn
}
void UPauseScreen_C__pf3208112912::bpf__ExecuteUbergraph_PauseScreen__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 7);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Retry__pf))
	{
		bpv__Retry__pf->SetBackgroundColor(FLinearColor(0.332167,0.310000,1.000000,0.000000));
	}
	return; // KCST_GotoReturn
}
void UPauseScreen_C__pf3208112912::bpf__ExecuteUbergraph_PauseScreen__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 3:
			{
				if(IsValid(bpv__Retry__pf))
				{
					bpv__Retry__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,1.000000));
				}
			}
		case 4:
			{
				RemoveFromParent();
			}
		case 5:
			{
				b0l__CallFunc_SetGamePaused_ReturnValue__pf = UGameplayStatics::SetGamePaused(this, false);
				CurrentState = -1;
				break;
			}
		case 8:
			{
				CurrentState = 3;
				break;
			}
		case 9:
			{
				CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void UPauseScreen_C__pf3208112912::bpf__ExecuteUbergraph_PauseScreen__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 10:
			{
				CurrentState = 11;
				break;
			}
		case 11:
			{
				if(IsValid(bpv__ExitButton__pf))
				{
					bpv__ExitButton__pf->SetBackgroundColor(FLinearColor(0.682353,0.682353,0.682353,1.000000));
				}
				CurrentState = -1;
				break;
			}
		case 28:
			{
				CurrentState = 11;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void UPauseScreen_C__pf3208112912::bpf__ExecuteUbergraph_PauseScreen__pf_4(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 12:
			{
				CurrentState = 13;
				break;
			}
		case 13:
			{
				if(IsValid(bpv__OptionsButton__pf))
				{
					bpv__OptionsButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,1.000000));
				}
			}
		case 14:
			{
				RemoveFromParent();
			}
		case 15:
			{
				b0l__CallFunc_Create_ReturnValue__pf = CastChecked<UOptions_C__pf3208112912>(UWidgetBlueprintLibrary::Create(this, UOptions_C__pf3208112912::StaticClass(), nullptr), ECastCheckedType::NullAllowed);
			}
		case 16:
			{
				if(IsValid(b0l__CallFunc_Create_ReturnValue__pf))
				{
					b0l__CallFunc_Create_ReturnValue__pf->AddToViewport(0);
				}
				CurrentState = -1;
				break;
			}
		case 25:
			{
				CurrentState = 13;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void UPauseScreen_C__pf3208112912::bpf__ExecuteUbergraph_PauseScreen__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 17);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__ExitButton__pf))
	{
		bpv__ExitButton__pf->SetBackgroundColor(FLinearColor(0.332167,0.310000,1.000000,0.000000));
	}
	return; // KCST_GotoReturn
}
void UPauseScreen_C__pf3208112912::bpf__ExecuteUbergraph_PauseScreen__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 19);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__OptionsButton__pf))
	{
		bpv__OptionsButton__pf->SetBackgroundColor(FLinearColor(0.332167,0.310000,1.000000,0.000000));
	}
	return; // KCST_GotoReturn
}
void UPauseScreen_C__pf3208112912::bpf__ExecuteUbergraph_PauseScreen__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 27);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__ExitButton__pf))
	{
		bpv__ExitButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,1.000000));
	}
	RemoveFromParent();
	UGameplayStatics::OpenLevel(this, FName(TEXT("StartScreen")), true, FString(TEXT("")));
	return; // KCST_GotoReturn
}
void UPauseScreen_C__pf3208112912::bpf__ExecuteUbergraph_PauseScreen__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 26);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__OptionsButton__pf))
	{
		bpv__OptionsButton__pf->SetBackgroundColor(FLinearColor(0.682353,0.682353,0.682353,1.000000));
	}
	return; // KCST_GotoReturn
}
void UPauseScreen_C__pf3208112912::bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_PauseScreen__pf_0(6);
}
void UPauseScreen_C__pf3208112912::bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_PauseScreen__pf_1(7);
}
void UPauseScreen_C__pf3208112912::bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_PauseScreen__pf_2(8);
}
void UPauseScreen_C__pf3208112912::bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_PauseScreen__pf_2(9);
}
void UPauseScreen_C__pf3208112912::bpf__BndEvt__ExitButton_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_PauseScreen__pf_3(10);
}
void UPauseScreen_C__pf3208112912::bpf__BndEvt__OptionsButton_K2Node_ComponentBoundEvent_37_OnButtonPressedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_PauseScreen__pf_4(12);
}
void UPauseScreen_C__pf3208112912::bpf__BndEvt__ExitButton_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_PauseScreen__pf_5(17);
}
void UPauseScreen_C__pf3208112912::bpf__BndEvt__OptionsButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_PauseScreen__pf_6(19);
}
void UPauseScreen_C__pf3208112912::bpf__BndEvt__OptionsButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_PauseScreen__pf_4(25);
}
void UPauseScreen_C__pf3208112912::bpf__BndEvt__OptionsButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_PauseScreen__pf_8(26);
}
void UPauseScreen_C__pf3208112912::bpf__BndEvt__ExitButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_PauseScreen__pf_7(27);
}
void UPauseScreen_C__pf3208112912::bpf__BndEvt__ExitButton_K2Node_ComponentBoundEvent_83_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_PauseScreen__pf_3(28);
}
