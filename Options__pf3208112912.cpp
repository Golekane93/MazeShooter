#include "NativizedAssets.h"
#include "Options__pf3208112912.h"
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
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Options__pf3208112912.h"
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
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "StartScreen__pf3208112912.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
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
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "MyGameSave__pf3208112912.h"
#include "About__pf3208112912.h"
void UOptions_C__pf3208112912::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->UsedAssets.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	// List of all referenced converted classes
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
	__Local__0->ComponentDelegateBindings.AddUninitialized(13);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 13);
	__Local__0->ComponentDelegateBindings[0].ComponentPropertyName = FName(TEXT("1080pButton"));
	__Local__0->ComponentDelegateBindings[0].DelegatePropertyName = FName(TEXT("OnPressed"));
	__Local__0->ComponentDelegateBindings[0].FunctionNameToBind = FName(TEXT("BndEvt__1080pButton_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[1].ComponentPropertyName = FName(TEXT("720pButton"));
	__Local__0->ComponentDelegateBindings[1].DelegatePropertyName = FName(TEXT("OnPressed"));
	__Local__0->ComponentDelegateBindings[1].FunctionNameToBind = FName(TEXT("BndEvt__720pButton_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[2].ComponentPropertyName = FName(TEXT("480pButton"));
	__Local__0->ComponentDelegateBindings[2].DelegatePropertyName = FName(TEXT("OnPressed"));
	__Local__0->ComponentDelegateBindings[2].FunctionNameToBind = FName(TEXT("BndEvt__480pButton_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[3].ComponentPropertyName = FName(TEXT("480pButton"));
	__Local__0->ComponentDelegateBindings[3].DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__0->ComponentDelegateBindings[3].FunctionNameToBind = FName(TEXT("BndEvt__480pButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[4].ComponentPropertyName = FName(TEXT("720pButton"));
	__Local__0->ComponentDelegateBindings[4].DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__0->ComponentDelegateBindings[4].FunctionNameToBind = FName(TEXT("BndEvt__720pButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[5].ComponentPropertyName = FName(TEXT("1080pButton"));
	__Local__0->ComponentDelegateBindings[5].DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__0->ComponentDelegateBindings[5].FunctionNameToBind = FName(TEXT("BndEvt__1080pButton_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[6].ComponentPropertyName = FName(TEXT("ReturnButton"));
	__Local__0->ComponentDelegateBindings[6].DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__0->ComponentDelegateBindings[6].FunctionNameToBind = FName(TEXT("BndEvt__ReturnButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[7].ComponentPropertyName = FName(TEXT("720pButton"));
	__Local__0->ComponentDelegateBindings[7].DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__0->ComponentDelegateBindings[7].FunctionNameToBind = FName(TEXT("BndEvt__720pButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[8].ComponentPropertyName = FName(TEXT("1080pButton"));
	__Local__0->ComponentDelegateBindings[8].DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__0->ComponentDelegateBindings[8].FunctionNameToBind = FName(TEXT("BndEvt__1080pButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[9].ComponentPropertyName = FName(TEXT("480pButton"));
	__Local__0->ComponentDelegateBindings[9].DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__0->ComponentDelegateBindings[9].FunctionNameToBind = FName(TEXT("BndEvt__480pButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[10].ComponentPropertyName = FName(TEXT("480pButton"));
	__Local__0->ComponentDelegateBindings[10].DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__0->ComponentDelegateBindings[10].FunctionNameToBind = FName(TEXT("BndEvt__480pButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[11].ComponentPropertyName = FName(TEXT("720pButton"));
	__Local__0->ComponentDelegateBindings[11].DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__0->ComponentDelegateBindings[11].FunctionNameToBind = FName(TEXT("BndEvt__720pButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
	__Local__0->ComponentDelegateBindings[12].ComponentPropertyName = FName(TEXT("1080pButton"));
	__Local__0->ComponentDelegateBindings[12].DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__0->ComponentDelegateBindings[12].FunctionNameToBind = FName(TEXT("BndEvt__1080pButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
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
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_12"));
	__Local__6->LayoutData.Offsets.Right = 5.105103f;
	__Local__6->LayoutData.Offsets.Bottom = -2.972900f;
	__Local__6->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__6->Parent = __Local__2;
	auto __Local__7 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_0"));
	__Local__7->ColorAndOpacity = FLinearColor(0.000000, 0.000000, 0.000000, 0.500000);
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	auto __Local__8 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__8->LayoutData.Offsets.Left = -320.960938f;
	__Local__8->LayoutData.Offsets.Top = -388.540527f;
	__Local__8->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__8->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__8->bAutoSize = true;
	__Local__8->Parent = __Local__2;
	auto __Local__9 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_0"));
	auto& __Local__10 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__9), 0)));
	__Local__10 = TArray<UPanelSlot*> ();
	__Local__10.Reserve(1);
	auto __Local__11 = NewObject<UHorizontalBoxSlot>(__Local__9, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__11->Size.SizeRule = ESlateSizeRule::Fill;
	__Local__11->Parent = __Local__9;
	auto __Local__12 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_0"));
	auto& __Local__13 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__12), 0)));
	__Local__13 = TArray<UPanelSlot*> ();
	__Local__13.Reserve(1);
	auto __Local__14 = NewObject<UVerticalBoxSlot>(__Local__12, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_0"));
	__Local__14->Size.SizeRule = ESlateSizeRule::Fill;
	__Local__14->Parent = __Local__12;
	auto __Local__15 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_0"));
	__Local__15->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Options"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9BAD747248965EADD0CE5DBE215D02AD") /* Key */
	);
	__Local__15->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__15->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__15->Font.Size = 100;
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__13.Add(__Local__14);
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__10.Add(__Local__11);
	__Local__9->Slot = __Local__8;
	__Local__8->Content = __Local__9;
	__Local__5.Add(__Local__8);
	auto __Local__16 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__16->LayoutData.Offsets.Left = -540.960938f;
	__Local__16->LayoutData.Offsets.Top = -68.540527f;
	__Local__16->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__16->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__16->bAutoSize = true;
	__Local__16->Parent = __Local__2;
	auto __Local__17 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("ResolutionBox"));
	auto& __Local__18 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__17), 0)));
	__Local__18 = TArray<UPanelSlot*> ();
	__Local__18.Reserve(7);
	auto __Local__19 = NewObject<UHorizontalBoxSlot>(__Local__17, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_9"));
	__Local__19->Parent = __Local__17;
	auto __Local__20 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Resolution"));
	__Local__20->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Resolution :"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("AE1D963647CD358DC3198D9889C87AA2") /* Key */
	);
	__Local__20->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__20->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__20->Font.Size = 30;
	__Local__20->Slot = __Local__19;
	__Local__19->Content = __Local__20;
	__Local__18.Add(__Local__19);
	auto __Local__21 = NewObject<UHorizontalBoxSlot>(__Local__17, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_15"));
	__Local__21->Parent = __Local__17;
	auto __Local__22 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_2"));
	__Local__22->Size = FVector2D(10.000000, 1.000000);
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__18.Add(__Local__21);
	auto __Local__23 = NewObject<UHorizontalBoxSlot>(__Local__17, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_5"));
	__Local__23->Parent = __Local__17;
	auto __Local__24 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_1"));
	auto& __Local__25 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__24), 0)));
	__Local__25 = TArray<UPanelSlot*> ();
	__Local__25.Reserve(1);
	auto __Local__26 = NewObject<UHorizontalBoxSlot>(__Local__24, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__26->Parent = __Local__24;
	auto __Local__27 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_1"));
	auto& __Local__28 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__27), 0)));
	__Local__28 = TArray<UPanelSlot*> ();
	__Local__28.Reserve(1);
	auto __Local__29 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_1"));
	__Local__29->Parent = __Local__27;
	auto __Local__30 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("480pButton"));
	__Local__30->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__31 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__30), 0)));
	__Local__31 = TArray<UPanelSlot*> ();
	__Local__31.Reserve(1);
	auto __Local__32 = NewObject<UButtonSlot>(__Local__30, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__32->Parent = __Local__30;
	auto __Local__33 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("480p"));
	__Local__33->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("640x480"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("15C03A3A42E469C34EEE029591E459C8") /* Key */
	);
	__Local__33->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__33->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__33->Font.Size = 30;
	__Local__33->bIsVariable = true;
	__Local__33->Slot = __Local__32;
	__Local__32->Content = __Local__33;
	__Local__31.Add(__Local__32);
	__Local__30->Slot = __Local__29;
	__Local__29->Content = __Local__30;
	__Local__28.Add(__Local__29);
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__25.Add(__Local__26);
	__Local__24->Slot = __Local__23;
	__Local__23->Content = __Local__24;
	__Local__18.Add(__Local__23);
	auto __Local__34 = NewObject<UHorizontalBoxSlot>(__Local__17, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_11"));
	__Local__34->Parent = __Local__17;
	auto __Local__35 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_0"));
	__Local__35->Size = FVector2D(10.000000, 1.000000);
	__Local__35->Slot = __Local__34;
	__Local__34->Content = __Local__35;
	__Local__18.Add(__Local__34);
	auto __Local__36 = NewObject<UHorizontalBoxSlot>(__Local__17, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_6"));
	__Local__36->Parent = __Local__17;
	auto __Local__37 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_2"));
	auto& __Local__38 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__37), 0)));
	__Local__38 = TArray<UPanelSlot*> ();
	__Local__38.Reserve(1);
	auto __Local__39 = NewObject<UHorizontalBoxSlot>(__Local__37, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__39->Parent = __Local__37;
	auto __Local__40 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_2"));
	auto& __Local__41 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__40), 0)));
	__Local__41 = TArray<UPanelSlot*> ();
	__Local__41.Reserve(1);
	auto __Local__42 = NewObject<UVerticalBoxSlot>(__Local__40, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_2"));
	__Local__42->Parent = __Local__40;
	auto __Local__43 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("720pButton"));
	__Local__43->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__44 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__43), 0)));
	__Local__44 = TArray<UPanelSlot*> ();
	__Local__44.Reserve(1);
	auto __Local__45 = NewObject<UButtonSlot>(__Local__43, UButtonSlot::StaticClass(), TEXT("ButtonSlot_2"));
	__Local__45->Parent = __Local__43;
	auto __Local__46 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("720p"));
	__Local__46->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("1280x720"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("6CD0E3E84D35E3C276EED39C9AA156E4") /* Key */
	);
	__Local__46->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__46->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__46->Font.Size = 30;
	__Local__46->bIsVariable = true;
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__44.Add(__Local__45);
	__Local__43->Slot = __Local__42;
	__Local__42->Content = __Local__43;
	__Local__41.Add(__Local__42);
	__Local__40->Slot = __Local__39;
	__Local__39->Content = __Local__40;
	__Local__38.Add(__Local__39);
	__Local__37->Slot = __Local__36;
	__Local__36->Content = __Local__37;
	__Local__18.Add(__Local__36);
	auto __Local__47 = NewObject<UHorizontalBoxSlot>(__Local__17, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_12"));
	__Local__47->Parent = __Local__17;
	auto __Local__48 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_1"));
	__Local__48->Size = FVector2D(10.000000, 1.000000);
	__Local__48->Slot = __Local__47;
	__Local__47->Content = __Local__48;
	__Local__18.Add(__Local__47);
	auto __Local__49 = NewObject<UHorizontalBoxSlot>(__Local__17, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_7"));
	__Local__49->Parent = __Local__17;
	auto __Local__50 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_3"));
	auto& __Local__51 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__50), 0)));
	__Local__51 = TArray<UPanelSlot*> ();
	__Local__51.Reserve(1);
	auto __Local__52 = NewObject<UHorizontalBoxSlot>(__Local__50, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_4"));
	__Local__52->Parent = __Local__50;
	auto __Local__53 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_3"));
	auto& __Local__54 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__53), 0)));
	__Local__54 = TArray<UPanelSlot*> ();
	__Local__54.Reserve(1);
	auto __Local__55 = NewObject<UVerticalBoxSlot>(__Local__53, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_3"));
	__Local__55->Parent = __Local__53;
	auto __Local__56 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("1080pButton"));
	__Local__56->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__57 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__56), 0)));
	__Local__57 = TArray<UPanelSlot*> ();
	__Local__57.Reserve(1);
	auto __Local__58 = NewObject<UButtonSlot>(__Local__56, UButtonSlot::StaticClass(), TEXT("ButtonSlot_3"));
	__Local__58->Parent = __Local__56;
	auto __Local__59 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("1080p"));
	__Local__59->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("1920x1080"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("5FE816BE4202EE0842A65DAE10A0B508") /* Key */
	);
	__Local__59->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__59->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__59->Font.Size = 30;
	__Local__59->bIsVariable = true;
	__Local__59->Slot = __Local__58;
	__Local__58->Content = __Local__59;
	__Local__57.Add(__Local__58);
	__Local__56->Slot = __Local__55;
	__Local__55->Content = __Local__56;
	__Local__54.Add(__Local__55);
	__Local__53->Slot = __Local__52;
	__Local__52->Content = __Local__53;
	__Local__51.Add(__Local__52);
	__Local__50->Slot = __Local__49;
	__Local__49->Content = __Local__50;
	__Local__18.Add(__Local__49);
	__Local__17->Slot = __Local__16;
	__Local__16->Content = __Local__17;
	__Local__5.Add(__Local__16);
	auto __Local__60 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_8"));
	__Local__60->LayoutData.Offsets.Left = -548.960938f;
	__Local__60->LayoutData.Offsets.Top = -40.540527f;
	__Local__60->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__60->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__60->bAutoSize = true;
	__Local__60->Parent = __Local__2;
	auto __Local__61 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("AudioBox"));
	auto& __Local__62 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__61), 0)));
	__Local__62 = TArray<UPanelSlot*> ();
	__Local__62.Reserve(1);
	auto __Local__63 = NewObject<UHorizontalBoxSlot>(__Local__61, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_13"));
	__Local__63->Size.SizeRule = ESlateSizeRule::Fill;
	__Local__63->Parent = __Local__61;
	auto __Local__64 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_6"));
	auto& __Local__65 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__64), 0)));
	__Local__65 = TArray<UPanelSlot*> ();
	__Local__65.Reserve(2);
	auto __Local__66 = NewObject<UHorizontalBoxSlot>(__Local__64, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_16"));
	__Local__66->Parent = __Local__64;
	auto __Local__67 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_3"));
	__Local__67->Slot = __Local__66;
	__Local__66->Content = __Local__67;
	__Local__65.Add(__Local__66);
	auto __Local__68 = NewObject<UHorizontalBoxSlot>(__Local__64, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__68->Size.SizeRule = ESlateSizeRule::Fill;
	__Local__68->Parent = __Local__64;
	auto __Local__69 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_10"));
	__Local__69->Slot = __Local__68;
	__Local__68->Content = __Local__69;
	__Local__65.Add(__Local__68);
	__Local__64->Slot = __Local__63;
	__Local__63->Content = __Local__64;
	__Local__62.Add(__Local__63);
	__Local__61->Slot = __Local__60;
	__Local__60->Content = __Local__61;
	__Local__5.Add(__Local__60);
	auto __Local__70 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_9"));
	__Local__70->LayoutData.Offsets.Left = -104.960938f;
	__Local__70->LayoutData.Offsets.Top = -157.081055f;
	__Local__70->LayoutData.Offsets.Bottom = 26.996998f;
	__Local__70->LayoutData.Anchors.Minimum = FVector2D(0.500000, 1.000000);
	__Local__70->LayoutData.Anchors.Maximum = FVector2D(0.500000, 1.000000);
	__Local__70->bAutoSize = true;
	__Local__70->Parent = __Local__2;
	auto __Local__71 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_9"));
	auto& __Local__72 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__71), 0)));
	__Local__72 = TArray<UPanelSlot*> ();
	__Local__72.Reserve(1);
	auto __Local__73 = NewObject<UHorizontalBoxSlot>(__Local__71, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_24"));
	__Local__73->Size.SizeRule = ESlateSizeRule::Fill;
	__Local__73->Parent = __Local__71;
	auto __Local__74 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("ReturnButton"));
	__Local__74->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__75 = (*(__Local__3->ContainerPtrToValuePtr<TArray<UPanelSlot*> >((__Local__74), 0)));
	__Local__75 = TArray<UPanelSlot*> ();
	__Local__75.Reserve(1);
	auto __Local__76 = NewObject<UButtonSlot>(__Local__74, UButtonSlot::StaticClass(), TEXT("ButtonSlot_4"));
	__Local__76->Parent = __Local__74;
	auto __Local__77 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("returnT"));
	__Local__77->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Return"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("C9210B084DE99CC46566AA8CBBA8DB60") /* Key */
	);
	__Local__77->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf3208112912::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__77->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__77->Font.Size = 30;
	__Local__77->bIsVariable = true;
	__Local__77->Slot = __Local__76;
	__Local__76->Content = __Local__77;
	__Local__75.Add(__Local__76);
	__Local__74->Slot = __Local__73;
	__Local__73->Content = __Local__74;
	__Local__72.Add(__Local__73);
	__Local__71->Slot = __Local__70;
	__Local__70->Content = __Local__71;
	__Local__5.Add(__Local__70);
	__Local__1->RootWidget = __Local__2;
}
UOptions_C__pf3208112912::UOptions_C__pf3208112912(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UOptions_C__pf3208112912::StaticClass() == GetClass()))
	{
		UOptions_C__pf3208112912::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__720pActive__pf = false;
	bpv__480pActive__pf = false;
	bpv__1080pActive__pf = true;
}
void UOptions_C__pf3208112912::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UOptions_C__pf3208112912::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	AssetsToLoad.Add({FName(TEXT("/Game/Fonts/Atmosphere/Atmosphere-Regular")), FName(TEXT("Atmosphere-Regular")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Engine/EngineFonts/Roboto")), FName(TEXT("Roboto")), FName(TEXT("/Script/Engine")), FName(TEXT("Font"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/StartScreen")), FName(TEXT("StartScreen_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/MyGameSave")), FName(TEXT("MyGameSave_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
	AssetsToLoad.Add({FName(TEXT("/Game/RollingBP/Blueprints/About")), FName(TEXT("About_C")), FName(TEXT("/Script/CoreUObject")), FName(TEXT("DynamicClass"))});
}
struct FRegisterHelper__UOptions_C__pf3208112912
{
	FRegisterHelper__UOptions_C__pf3208112912()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/RollingBP/Blueprints/Options"), &UOptions_C__pf3208112912::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UOptions_C__pf3208112912 Instance;
};
FRegisterHelper__UOptions_C__pf3208112912 FRegisterHelper__UOptions_C__pf3208112912::Instance;
void UOptions_C__pf3208112912::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__78;
	SlotNames.Append(__Local__78);
}
void UOptions_C__pf3208112912::CustomNativeInitilize()
{
	TArray<UWidgetAnimation*>  __Local__79;
	TArray<FDelegateRuntimeBinding>  __Local__80;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), true, false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UOptions_C__pf3208112912::StaticClass())->MiscConvertedSubobjects[0]), __Local__79, __Local__80, nullptr);
}
void UOptions_C__pf3208112912::PreSave()
{
	Super::PreSave();
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UOptions_C__pf3208112912::bpf__ExecuteUbergraph_Options__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__720pButton__pf))
				{
					bpv__720pButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,0.000000));
				}
			}
		case 2:
			{
				if(IsValid(bpv__1080pButton__pf))
				{
					bpv__1080pButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,0.000000));
				}
				CurrentState = -1;
				break;
			}
		case 3:
			{
				if(IsValid(bpv__720pButton__pf))
				{
					bpv__720pButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,0.000000));
				}
			}
		case 4:
			{
				if(IsValid(bpv__480pButton__pf))
				{
					bpv__480pButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,0.000000));
				}
				CurrentState = -1;
				break;
			}
		case 5:
			{
				if(IsValid(bpv__720pButton__pf))
				{
					bpv__720pButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,1.000000));
				}
			}
		case 6:
			{
				if(IsValid(bpv__480pButton__pf))
				{
					bpv__480pButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,0.000000));
				}
			}
		case 7:
			{
				if(IsValid(bpv__1080pButton__pf))
				{
					bpv__1080pButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,0.000000));
				}
				CurrentState = -1;
				break;
			}
		case 8:
			{
				if(IsValid(bpv__1080pButton__pf))
				{
					bpv__1080pButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,1.000000));
				}
				CurrentState = 3;
				break;
			}
		case 9:
			{
				if(IsValid(bpv__480pButton__pf))
				{
					bpv__480pButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,1.000000));
				}
				CurrentState = 1;
				break;
			}
		case 10:
			{
				if (!bpv__720pActive__pf)
				{
					CurrentState = 11;
					break;
				}
				CurrentState = 5;
				break;
			}
		case 11:
			{
				if (!bpv__1080pActive__pf)
				{
					CurrentState = 12;
					break;
				}
				CurrentState = 8;
				break;
			}
		case 12:
			{
				if (!bpv__480pActive__pf)
				{
					CurrentState = 10;
					break;
				}
				CurrentState = 9;
				break;
			}
		case 59:
			{
				CurrentState = 12;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void UOptions_C__pf3208112912::bpf__ExecuteUbergraph_Options__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 13:
			{
				CurrentState = 14;
				break;
			}
		case 14:
			{
				if (!bpv__1080pActive__pf)
				{
					CurrentState = 19;
					break;
				}
			}
		case 15:
			{
				bpv__480pActive__pf = false;
			}
		case 16:
			{
				bpv__720pActive__pf = false;
			}
		case 17:
			{
				if(IsValid(bpv__1080pButton__pf))
				{
					bpv__1080pButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,1.000000));
				}
			}
		case 18:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.setRes 1920x1080")), nullptr);
				CurrentState = -1;
				break;
			}
		case 19:
			{
				bpv__480pActive__pf = false;
			}
		case 20:
			{
				bpv__720pActive__pf = false;
			}
		case 21:
			{
				bpv__1080pActive__pf = true;
				CurrentState = 17;
				break;
			}
		case 54:
			{
				CurrentState = 14;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void UOptions_C__pf3208112912::bpf__ExecuteUbergraph_Options__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 22:
			{
				CurrentState = 23;
				break;
			}
		case 23:
			{
				if (!bpv__720pActive__pf)
				{
					CurrentState = 28;
					break;
				}
			}
		case 24:
			{
				bpv__480pActive__pf = false;
			}
		case 25:
			{
				bpv__1080pActive__pf = false;
			}
		case 26:
			{
				if(IsValid(bpv__720pButton__pf))
				{
					bpv__720pButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,1.000000));
				}
			}
		case 27:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.setRes 1280x720")), nullptr);
				CurrentState = -1;
				break;
			}
		case 28:
			{
				bpv__480pActive__pf = false;
			}
		case 29:
			{
				bpv__720pActive__pf = true;
			}
		case 30:
			{
				bpv__1080pActive__pf = false;
				CurrentState = 26;
				break;
			}
		case 53:
			{
				CurrentState = 23;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void UOptions_C__pf3208112912::bpf__ExecuteUbergraph_Options__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 31:
			{
				CurrentState = 32;
				break;
			}
		case 32:
			{
				if (!bpv__480pActive__pf)
				{
					CurrentState = 37;
					break;
				}
			}
		case 33:
			{
				bpv__720pActive__pf = false;
			}
		case 34:
			{
				bpv__1080pActive__pf = false;
			}
		case 35:
			{
				if(IsValid(bpv__480pButton__pf))
				{
					bpv__480pButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,1.000000));
				}
			}
		case 36:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.setRes 640x480")), nullptr);
				CurrentState = -1;
				break;
			}
		case 37:
			{
				bpv__720pActive__pf = false;
			}
		case 38:
			{
				bpv__1080pActive__pf = false;
			}
		case 39:
			{
				bpv__480pActive__pf = true;
				CurrentState = 35;
				break;
			}
		case 55:
			{
				CurrentState = 32;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void UOptions_C__pf3208112912::bpf__ExecuteUbergraph_Options__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 40);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__480pButton__pf))
	{
		bpv__480pButton__pf->SetBackgroundColor(FLinearColor(0.682353,0.682353,0.682353,1.000000));
	}
	return; // KCST_GotoReturn
}
void UOptions_C__pf3208112912::bpf__ExecuteUbergraph_Options__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 56);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__480pButton__pf))
	{
		bpv__480pButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,0.000000));
	}
	return; // KCST_GotoReturn
}
void UOptions_C__pf3208112912::bpf__ExecuteUbergraph_Options__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 43);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__720pButton__pf))
	{
		bpv__720pButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,0.000000));
	}
	return; // KCST_GotoReturn
}
void UOptions_C__pf3208112912::bpf__ExecuteUbergraph_Options__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 58);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__1080pButton__pf))
	{
		bpv__1080pButton__pf->SetBackgroundColor(FLinearColor(0.682353,0.682353,0.682353,1.000000));
	}
	return; // KCST_GotoReturn
}
void UOptions_C__pf3208112912::bpf__ExecuteUbergraph_Options__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 57);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__720pButton__pf))
	{
		bpv__720pButton__pf->SetBackgroundColor(FLinearColor(0.682353,0.682353,0.682353,1.000000));
	}
	return; // KCST_GotoReturn
}
void UOptions_C__pf3208112912::bpf__ExecuteUbergraph_Options__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 49);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__1080pButton__pf))
	{
		bpv__1080pButton__pf->SetBackgroundColor(FLinearColor(0.000000,0.000000,0.000000,0.000000));
	}
	return; // KCST_GotoReturn
}
void UOptions_C__pf3208112912::bpf__ExecuteUbergraph_Options__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 52);
	// optimized KCST_UnconditionalGoto
	RemoveFromParent();
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_Create_ReturnValue__pf = CastChecked<UStartScreen_C__pf3208112912>(UWidgetBlueprintLibrary::Create(this, UStartScreen_C__pf3208112912::StaticClass(), nullptr), ECastCheckedType::NullAllowed);
	// optimized KCST_UnconditionalGoto
	if(IsValid(b0l__CallFunc_Create_ReturnValue__pf))
	{
		b0l__CallFunc_Create_ReturnValue__pf->AddToViewport(0);
	}
	return; // KCST_GotoReturn
}
void UOptions_C__pf3208112912::bpf__BndEvt__1080pButton_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options__pf_1(13);
}
void UOptions_C__pf3208112912::bpf__BndEvt__720pButton_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options__pf_2(22);
}
void UOptions_C__pf3208112912::bpf__BndEvt__480pButton_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options__pf_3(31);
}
void UOptions_C__pf3208112912::bpf__BndEvt__480pButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options__pf_4(40);
}
void UOptions_C__pf3208112912::bpf__BndEvt__720pButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options__pf_6(43);
}
void UOptions_C__pf3208112912::bpf__BndEvt__1080pButton_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options__pf_9(49);
}
void UOptions_C__pf3208112912::bpf__BndEvt__ReturnButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options__pf_10(52);
}
void UOptions_C__pf3208112912::bpf__BndEvt__720pButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options__pf_2(53);
}
void UOptions_C__pf3208112912::bpf__BndEvt__1080pButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options__pf_1(54);
}
void UOptions_C__pf3208112912::bpf__BndEvt__480pButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options__pf_3(55);
}
void UOptions_C__pf3208112912::bpf__BndEvt__480pButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options__pf_5(56);
}
void UOptions_C__pf3208112912::bpf__BndEvt__720pButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options__pf_8(57);
}
void UOptions_C__pf3208112912::bpf__BndEvt__1080pButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options__pf_7(58);
}
void UOptions_C__pf3208112912::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_Options__pf_0(59);
}
