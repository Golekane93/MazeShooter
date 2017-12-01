#include "NativizedAssets.h"
#include "StartScreen__pf3208112912.h"
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
#include "StartScreen__pf3208112912.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/CoreUObject/Classes/Object.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
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
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Options__pf3208112912.h"
#include "MyGameSave__pf3208112912.h"
#include "About__pf3208112912.h"
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
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
void UStartScreen_C__pf3208112912::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	__Local__0->ComponentDelegateBindings.AddUninitialized(15);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 15);
	__Local__0->ComponentDelegateBindings[0].ComponentPropertyName = FName(TEXT("About"));
	__Local__0->ComponentDelegateBindings[0].DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__0->ComponentDelegateBindings[0].FunctionNameToBind = FName(TEXT("BndEvt__About_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[1].ComponentPropertyName = FName(TEXT("About"));
	__Local__0->ComponentDelegateBindings[1].DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__0->ComponentDelegateBindings[1].FunctionNameToBind = FName(TEXT("BndEvt__About_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[2].ComponentPropertyName = FName(TEXT("About"));
	__Local__0->ComponentDelegateBindings[2].DelegatePropertyName = FName(TEXT("OnPressed"));
	__Local__0->ComponentDelegateBindings[2].FunctionNameToBind = FName(TEXT("BndEvt__About_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[3].ComponentPropertyName = FName(TEXT("About"));
	__Local__0->ComponentDelegateBindings[3].DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__0->ComponentDelegateBindings[3].FunctionNameToBind = FName(TEXT("BndEvt__About_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[4].ComponentPropertyName = FName(TEXT("QuitButton"));
	__Local__0->ComponentDelegateBindings[4].DelegatePropertyName = FName(TEXT("OnPressed"));
	__Local__0->ComponentDelegateBindings[4].FunctionNameToBind = FName(TEXT("BndEvt__QuitButton_K2Node_ComponentBoundEvent_35_OnButtonPressedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[5].ComponentPropertyName = FName(TEXT("StartButton"));
	__Local__0->ComponentDelegateBindings[5].DelegatePropertyName = FName(TEXT("OnPressed"));
	__Local__0->ComponentDelegateBindings[5].FunctionNameToBind = FName(TEXT("BndEvt__StartButton_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[6].ComponentPropertyName = FName(TEXT("StartButton"));
	__Local__0->ComponentDelegateBindings[6].DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__0->ComponentDelegateBindings[6].FunctionNameToBind = FName(TEXT("BndEvt__StartButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[7].ComponentPropertyName = FName(TEXT("QuitButton"));
	__Local__0->ComponentDelegateBindings[7].DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__0->ComponentDelegateBindings[7].FunctionNameToBind = FName(TEXT("BndEvt__QuitButton_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[8].ComponentPropertyName = FName(TEXT("OptionsButtons"));
	__Local__0->ComponentDelegateBindings[8].DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__0->ComponentDelegateBindings[8].FunctionNameToBind = FName(TEXT("BndEvt__OptionsButtons_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[9].ComponentPropertyName = FName(TEXT("StartButton"));
	__Local__0->ComponentDelegateBindings[9].DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__0->ComponentDelegateBindings[9].FunctionNameToBind = FName(TEXT("BndEvt__StartButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[10].ComponentPropertyName = FName(TEXT("QuitButton"));
	__Local__0->ComponentDelegateBindings[10].DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__0->ComponentDelegateBindings[10].FunctionNameToBind = FName(TEXT("BndEvt__QuitButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[11].ComponentPropertyName = FName(TEXT("OptionsButtons"));
	__Local__0->ComponentDelegateBindings[11].DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__0->ComponentDelegateBindings[11].FunctionNameToBind = FName(TEXT("BndEvt__OptionsButtons_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[12].ComponentPropertyName = FName(TEXT("OptionsButtons"));
	__Local__0->ComponentDelegateBindings[12].DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__0->ComponentDelegateBindings[12].FunctionNameToBind = FName(TEXT("BndEvt__OptionsButtons_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[13].ComponentPropertyName = FName(TEXT("QuitButton"));
	__Local__0->ComponentDelegateBindings[13].DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__0->ComponentDelegateBindings[13].FunctionNameToBind = FName(TEXT("BndEvt__QuitButton_K2Node_ComponentBoundEvent_151_OnButtonClickedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[14].ComponentPropertyName = FName(TEXT("StartButton"));
	__Local__0->ComponentDelegateBindings[14].DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__0->ComponentDelegateBindings[14].FunctionNameToBind = FName(TEXT("BndEvt__StartButton_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature"));
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
	__Local__5.Reserve(6);
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_10"));
	__Local__6->LayoutData.Offsets.Right = 3.903900f;
	__Local__6->LayoutData.Offsets.Bottom = 5.975975f;
	__Local__6->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__6->ZOrder = 1;
	__Local__6->Parent = __Local__2;
	auto __Local__7 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_0"));
	__Local__7->ColorAndOpacity = FLinearColor(0.180000, 0.180000, 0.180000, 1.000000);
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	auto __Local__8 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_1"));
	__Local__8->LayoutData.Offsets.Left = -792.960938f;
	__Local__8->LayoutData.Offsets.Top = -368.540527f;
	__Local__8->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__8->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__8->bAutoSize = true;
	__Local__8->ZOrder = 1;
	__Local__8->Parent = __Local__2;
	auto __Local__9 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("Title"));
	auto& __Local__10 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__9), 0)));
	__Local__10 = TArray<UPanelSlot*> ();
	__Local__10.Reserve(1);
	auto __Local__11 = NewObject<UHorizontalBoxSlot>(__Local__9, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__11->Size.SizeRule = ESlateSizeRule::Fill;
	__Local__11->Parent = __Local__9;
	auto __Local__12 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_0"));
	auto& __Local__13 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__12), 0)));
	__Local__13 = TArray<UPanelSlot*> ();
	__Local__13.Reserve(2);
	auto __Local__14 = NewObject<UVerticalBoxSlot>(__Local__12, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_0"));
	__Local__14->Size.SizeRule = ESlateSizeRule::Fill;
	__Local__14->Parent = __Local__12;
	auto __Local__15 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_0"));
	__Local__15->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Maze Shooter"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A544596943738FAF0724BE8B8070F6E7") /* Key */
	);
	static TWeakObjectPtr<UProperty> __Local__17{};
	const UProperty* __Local__16 = __Local__17.Get();
	if (nullptr == __Local__16)
	{
		__Local__16 = (FSlateColor::StaticStruct())->FindPropertyByName(FName(TEXT("SpecifiedColor")));
		check(__Local__16);
		__Local__17 = __Local__16;
	}
	auto& __Local__18 = (*(__Local__16->ContainerPtrToValuePtr<FLinearColor >(&(__Local__15->ColorAndOpacity), 0)));
	__Local__18 = FLinearColor(1.000000, 0.687506, 0.003424, 1.000000);
	__Local__15->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UStartScreen_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__15->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__15->Font.Size = 154;
	static TWeakObjectPtr<UProperty> __Local__20{};
	const UProperty* __Local__19 = __Local__20.Get();
	if (nullptr == __Local__19)
	{
		__Local__19 = (UTextLayoutWidget::StaticClass())->FindPropertyByName(FName(TEXT("Justification")));
		check(__Local__19);
		__Local__20 = __Local__19;
	}
	auto& __Local__21 = (*(__Local__19->ContainerPtrToValuePtr<TEnumAsByte<ETextJustify::Type> >((__Local__15), 0)));
	__Local__21 = ETextJustify::Center;
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__13.Add(__Local__14);
	auto __Local__22 = NewObject<UVerticalBoxSlot>(__Local__12, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_5"));
	__Local__22->Parent = __Local__12;
	auto __Local__23 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_6"));
	__Local__23->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("----------------------------------------------------------------------------------------------------------------"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("0E332C584208E59DE55DD29076DAE8A1") /* Key */
	);
	__Local__23->Slot = __Local__22;
	__Local__22->Content = __Local__23;
	__Local__13.Add(__Local__22);
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__10.Add(__Local__11);
	__Local__9->bIsVariable = true;
	__Local__9->Slot = __Local__8;
	__Local__8->Content = __Local__9;
	__Local__5.Add(__Local__8);
	auto __Local__24 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__24->LayoutData.Offsets.Left = -112.960938f;
	__Local__24->LayoutData.Offsets.Top = 203.459473f;
	__Local__24->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__24->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__24->bAutoSize = true;
	__Local__24->ZOrder = 1;
	__Local__24->Parent = __Local__2;
	auto __Local__25 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("About"));
	__Local__25->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__26 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__25), 0)));
	__Local__26 = TArray<UPanelSlot*> ();
	__Local__26.Reserve(1);
	auto __Local__27 = NewObject<UButtonSlot>(__Local__25, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__27->Parent = __Local__25;
	auto __Local__28 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_1"));
	__Local__28->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("About"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("0A4162E9473A92AB01D2619AA8D957DA") /* Key */
	);
	__Local__28->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UStartScreen_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__28->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__28->Font.Size = 44;
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__26.Add(__Local__27);
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__5.Add(__Local__24);
	auto __Local__29 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_15"));
	__Local__29->LayoutData.Offsets.Left = -188.960938f;
	__Local__29->LayoutData.Offsets.Top = -24.540527f;
	__Local__29->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__29->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__29->bAutoSize = true;
	__Local__29->ZOrder = 1;
	__Local__29->Parent = __Local__2;
	auto __Local__30 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("StartButton"));
	__Local__30->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__31 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__30), 0)));
	__Local__31 = TArray<UPanelSlot*> ();
	__Local__31.Reserve(1);
	auto __Local__32 = NewObject<UButtonSlot>(__Local__30, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__32->Parent = __Local__30;
	auto __Local__33 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("startgame"));
	__Local__33->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Start Game"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("345F78E5440B544D1600FABFE29CC43D") /* Key */
	);
	__Local__33->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UStartScreen_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__33->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__33->Font.Size = 44;
	__Local__33->Slot = __Local__32;
	__Local__32->Content = __Local__33;
	__Local__31.Add(__Local__32);
	__Local__30->Slot = __Local__29;
	__Local__29->Content = __Local__30;
	__Local__5.Add(__Local__29);
	auto __Local__34 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_16"));
	__Local__34->LayoutData.Offsets.Left = -152.960938f;
	__Local__34->LayoutData.Offsets.Top = 88.000000f;
	__Local__34->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__34->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__34->bAutoSize = true;
	__Local__34->ZOrder = 1;
	__Local__34->Parent = __Local__2;
	auto __Local__35 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("OptionsButtons"));
	__Local__35->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__36 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__35), 0)));
	__Local__36 = TArray<UPanelSlot*> ();
	__Local__36.Reserve(1);
	auto __Local__37 = NewObject<UButtonSlot>(__Local__35, UButtonSlot::StaticClass(), TEXT("ButtonSlot_2"));
	__Local__37->Parent = __Local__35;
	auto __Local__38 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("options"));
	__Local__38->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Options"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("2330BDAF4DF4506B35706F9137B0D92F") /* Key */
	);
	__Local__38->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UStartScreen_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__38->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__38->Font.Size = 44;
	auto& __Local__39 = (*(__Local__19->ContainerPtrToValuePtr<TEnumAsByte<ETextJustify::Type> >((__Local__38), 0)));
	__Local__39 = ETextJustify::Center;
	__Local__38->Slot = __Local__37;
	__Local__37->Content = __Local__38;
	__Local__36.Add(__Local__37);
	__Local__35->Slot = __Local__34;
	__Local__34->Content = __Local__35;
	__Local__5.Add(__Local__34);
	auto __Local__40 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_20"));
	__Local__40->LayoutData.Offsets.Left = -168.960938f;
	__Local__40->LayoutData.Offsets.Top = 319.459473f;
	__Local__40->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__40->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__40->bAutoSize = true;
	__Local__40->ZOrder = 1;
	__Local__40->Parent = __Local__2;
	auto __Local__41 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("QuitButton"));
	__Local__41->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__42 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__41), 0)));
	__Local__42 = TArray<UPanelSlot*> ();
	__Local__42.Reserve(1);
	auto __Local__43 = NewObject<UButtonSlot>(__Local__41, UButtonSlot::StaticClass(), TEXT("ButtonSlot_3"));
	__Local__43->Parent = __Local__41;
	auto __Local__44 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("quitgame"));
	__Local__44->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Quit Game"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("45E3420B47E98724B1CA83A45B7A9AAC") /* Key */
	);
	__Local__44->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UStartScreen_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__44->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__44->Font.Size = 44;
	__Local__44->Slot = __Local__43;
	__Local__43->Content = __Local__44;
	__Local__42.Add(__Local__43);
	__Local__41->Slot = __Local__40;
	__Local__40->Content = __Local__41;
	__Local__5.Add(__Local__40);
	__Local__1->RootWidget = __Local__2;
}
UStartScreen_C__pf3208112912::UStartScreen_C__pf3208112912(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UStartScreen_C__pf3208112912::StaticClass() == GetClass()))
	{
		UStartScreen_C__pf3208112912::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__SaveSub__pf = nullptr;
	bOverride_Cursor = true;
}
void UStartScreen_C__pf3208112912::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UStartScreen_C__pf3208112912::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	AssetsToLoad.Add({FName(TEXT("/Game/Fonts/Atmosphere/Atmosphere-Regular")), FName(TEXT("Atmosphere-Regular")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Engine/EngineFonts/Roboto")), FName(TEXT("Roboto")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/Options")), FName(TEXT("Options_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/MyGameSave")), FName(TEXT("MyGameSave_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/About")), FName(TEXT("About_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
}
struct FRegisterHelper__UStartScreen_C__pf3208112912
{
	FRegisterHelper__UStartScreen_C__pf3208112912()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/RollingBP/Blueprints/StartScreen"), &UStartScreen_C__pf3208112912::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UStartScreen_C__pf3208112912 Instance;
};
FRegisterHelper__UStartScreen_C__pf3208112912 FRegisterHelper__UStartScreen_C__pf3208112912::Instance;
void UStartScreen_C__pf3208112912::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__45;
	SlotNames.Append(__Local__45);
}
void UStartScreen_C__pf3208112912::CustomNativeInitilize()
{
	TArray<UWidgetAnimation*>  __Local__46;
	TArray<FDelegateRuntimeBinding>  __Local__47;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), true, false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UStartScreen_C__pf3208112912::StaticClass())->MiscConvertedSubobjects[0]), __Local__46, __Local__47, nullptr);
}
void UStartScreen_C__pf3208112912::PreSave()
{
	Super::PreSave();
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UStartScreen_C__pf3208112912::bpf__ExecuteUbergraph_StartScreen__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				RemoveFromParent();
			}
		case 2:
			{
				b0l__CallFunc_Create_ReturnValue__pf = CastChecked<UAbout_C__pf3208112912>(UWidgetBlueprintLibrary::Create(this, UAbout_C__pf3208112912::StaticClass(), nullptr), ECastCheckedType::NullAllowed);
			}
		case 3:
			{
				if(IsValid(b0l__CallFunc_Create_ReturnValue__pf))
				{
					b0l__CallFunc_Create_ReturnValue__pf->AddToViewport(0);
				}
				CurrentState = -1;
				break;
			}
		case 4:
			{
				if(IsValid(bpv__About__pf))
				{
					bpv__About__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,1.000000));
				}
				CurrentState = 1;
				break;
			}
		case 11:
			{
				CurrentState = 4;
				break;
			}
		case 12:
			{
				CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void UStartScreen_C__pf3208112912::bpf__ExecuteUbergraph_StartScreen__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 10);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__About__pf))
	{
		bpv__About__pf->SetBackgroundColor(FLinearColor(0.682353,0.682353,0.682353,1.000000));
	}
	return; // KCST_GotoReturn
}
void UStartScreen_C__pf3208112912::bpf__ExecuteUbergraph_StartScreen__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 47);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__OptionsButtons__pf))
	{
		bpv__OptionsButtons__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,1.000000));
	}
	RemoveFromParent();
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_Create_ReturnValue2__pf = CastChecked<UOptions_C__pf3208112912>(UWidgetBlueprintLibrary::Create(this, UOptions_C__pf3208112912::StaticClass(), nullptr), ECastCheckedType::NullAllowed);
	// optimized KCST_UnconditionalGoto
	if(IsValid(b0l__CallFunc_Create_ReturnValue2__pf))
	{
		b0l__CallFunc_Create_ReturnValue2__pf->AddToViewport(0);
	}
	return; // KCST_GotoReturn
}
void UStartScreen_C__pf3208112912::bpf__ExecuteUbergraph_StartScreen__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 9);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__About__pf))
	{
		bpv__About__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,0.000000));
	}
	return; // KCST_GotoReturn
}
void UStartScreen_C__pf3208112912::bpf__ExecuteUbergraph_StartScreen__pf_4(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 13:
			{
				b0l__CallFunc_SaveGameToSlot_ReturnValue2__pf = UGameplayStatics::SaveGameToSlot(bpv__SaveSub__pf, FString(TEXT("Slot1")), 0);
			}
		case 14:
			{
				UGameplayStatics::OpenLevel(this, FName(TEXT("BattleMap")), true, FString(TEXT("")));
			}
		case 15:
			{
				RemoveFromParent();
				CurrentState = -1;
				break;
			}
		case 16:
			{
				b0l__CallFunc_SaveGameToSlot_ReturnValue__pf = UGameplayStatics::SaveGameToSlot(bpv__SaveSub__pf, FString(TEXT("Slot1")), 0);
				CurrentState = 14;
				break;
			}
		case 17:
			{
				bpv__SaveSub__pf = b0l__CallFunc_CreateSaveGameObject_ReturnValue__pf;
			}
		case 18:
			{
				b0l__K2Node_DynamicCast_AsMy_Game_Save__pf = Cast<UMyGameSave_C__pf3208112912>(bpv__SaveSub__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMy_Game_Save__pf != nullptr);
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 19:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Game_Save__pf->bpv__level__pf = 1;
				}
				CurrentState = 16;
				break;
			}
		case 20:
			{
				b0l__CallFunc_CreateSaveGameObject_ReturnValue__pf = UGameplayStatics::CreateSaveGameObject(UMyGameSave_C__pf3208112912::StaticClass());
				CurrentState = 17;
				break;
			}
		case 21:
			{
				bpv__SaveSub__pf = b0l__CallFunc_LoadGameFromSlot_ReturnValue__pf;
			}
		case 22:
			{
				b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf = Cast<UMyGameSave_C__pf3208112912>(bpv__SaveSub__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf != nullptr);
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 23:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Game_Save2__pf->bpv__level__pf = 1;
				}
				CurrentState = 13;
				break;
			}
		case 24:
			{
				if (!b0l__CallFunc_DoesSaveGameExist_ReturnValue__pf)
				{
					CurrentState = 20;
					break;
				}
			}
		case 25:
			{
				b0l__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Slot1")), 0);
				CurrentState = 21;
				break;
			}
		case 26:
			{
				b0l__CallFunc_DoesSaveGameExist_ReturnValue__pf = UGameplayStatics::DoesSaveGameExist(FString(TEXT("Slot1")), 0);
				CurrentState = 24;
				break;
			}
		case 31:
			{
				CurrentState = 32;
				break;
			}
		case 32:
			{
				if(IsValid(bpv__StartButton__pf))
				{
					bpv__StartButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,1.000000));
				}
				CurrentState = 26;
				break;
			}
		case 49:
			{
				CurrentState = 32;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void UStartScreen_C__pf3208112912::bpf__ExecuteUbergraph_StartScreen__pf_5(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 27:
			{
				CurrentState = 28;
				break;
			}
		case 28:
			{
				if(IsValid(bpv__QuitButton__pf))
				{
					bpv__QuitButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,1.000000));
				}
			}
		case 29:
			{
				UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit);
			}
		case 30:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("quit")), nullptr);
				CurrentState = -1;
				break;
			}
		case 48:
			{
				CurrentState = 28;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void UStartScreen_C__pf3208112912::bpf__ExecuteUbergraph_StartScreen__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 33);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__StartButton__pf))
	{
		bpv__StartButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,0.000000));
	}
	return; // KCST_GotoReturn
}
void UStartScreen_C__pf3208112912::bpf__ExecuteUbergraph_StartScreen__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 35);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__QuitButton__pf))
	{
		bpv__QuitButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,0.000000));
	}
	return; // KCST_GotoReturn
}
void UStartScreen_C__pf3208112912::bpf__ExecuteUbergraph_StartScreen__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 37);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__OptionsButtons__pf))
	{
		bpv__OptionsButtons__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,0.000000));
	}
	return; // KCST_GotoReturn
}
void UStartScreen_C__pf3208112912::bpf__ExecuteUbergraph_StartScreen__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 44);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__StartButton__pf))
	{
		bpv__StartButton__pf->SetBackgroundColor(FLinearColor(0.682353,0.682353,0.682353,1.000000));
	}
	return; // KCST_GotoReturn
}
void UStartScreen_C__pf3208112912::bpf__ExecuteUbergraph_StartScreen__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 46);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__OptionsButtons__pf))
	{
		bpv__OptionsButtons__pf->SetBackgroundColor(FLinearColor(0.682353,0.682353,0.682353,1.000000));
	}
	return; // KCST_GotoReturn
}
void UStartScreen_C__pf3208112912::bpf__ExecuteUbergraph_StartScreen__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 45);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__QuitButton__pf))
	{
		bpv__QuitButton__pf->SetBackgroundColor(FLinearColor(0.682353,0.682353,0.682353,1.000000));
	}
	return; // KCST_GotoReturn
}
void UStartScreen_C__pf3208112912::bpf__ExecuteUbergraph_StartScreen__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 50);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(IsValid(b0l__CallFunc_GetPlayerController_ReturnValue__pf))
	{
		b0l__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = true;
	}
	return; // KCST_GotoReturn
}
void UStartScreen_C__pf3208112912::bpf__BndEvt__About_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartScreen__pf_3(9);
}
void UStartScreen_C__pf3208112912::bpf__BndEvt__About_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartScreen__pf_1(10);
}
void UStartScreen_C__pf3208112912::bpf__BndEvt__About_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartScreen__pf_0(11);
}
void UStartScreen_C__pf3208112912::bpf__BndEvt__About_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartScreen__pf_0(12);
}
void UStartScreen_C__pf3208112912::bpf__BndEvt__QuitButton_K2Node_ComponentBoundEvent_35_OnButtonPressedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartScreen__pf_5(27);
}
void UStartScreen_C__pf3208112912::bpf__BndEvt__StartButton_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartScreen__pf_4(31);
}
void UStartScreen_C__pf3208112912::bpf__BndEvt__StartButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartScreen__pf_6(33);
}
void UStartScreen_C__pf3208112912::bpf__BndEvt__QuitButton_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartScreen__pf_7(35);
}
void UStartScreen_C__pf3208112912::bpf__BndEvt__OptionsButtons_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartScreen__pf_8(37);
}
void UStartScreen_C__pf3208112912::bpf__BndEvt__StartButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartScreen__pf_9(44);
}
void UStartScreen_C__pf3208112912::bpf__BndEvt__QuitButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartScreen__pf_11(45);
}
void UStartScreen_C__pf3208112912::bpf__BndEvt__OptionsButtons_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartScreen__pf_10(46);
}
void UStartScreen_C__pf3208112912::bpf__BndEvt__OptionsButtons_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartScreen__pf_2(47);
}
void UStartScreen_C__pf3208112912::bpf__BndEvt__QuitButton_K2Node_ComponentBoundEvent_151_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartScreen__pf_5(48);
}
void UStartScreen_C__pf3208112912::bpf__BndEvt__StartButton_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_StartScreen__pf_4(49);
}
void UStartScreen_C__pf3208112912::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_StartScreen__pf_12(50);
}
