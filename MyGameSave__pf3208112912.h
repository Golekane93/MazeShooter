#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/CoreUObject/Classes/Object.h"
#include "MyGameSave__pf3208112912.generated.h"
UCLASS(Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/RollingBP/Blueprints/MyGameSave.MyGameSave_C", OverrideNativeName="MyGameSave_C"))
class UMyGameSave_C__pf3208112912 : public USaveGame
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Location", Category="Default", OverrideNativeName="Location"))
	FVector bpv__Location__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Current Energy", Category="Default", OverrideNativeName="CurrentEnergy"))
	float bpv__CurrentEnergy__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Resolution", Category="Default", OverrideNativeName="Resolution"))
	FString bpv__Resolution__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="C 1", Category="Default", OverrideNativeName="c1"))
	bool bpv__c1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="C 2", Category="Default", OverrideNativeName="c2"))
	bool bpv__c2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="C 3", Category="Default", OverrideNativeName="c3"))
	bool bpv__c3__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="C 4", Category="Default", OverrideNativeName="c4"))
	bool bpv__c4__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Player Start 2", Category="Default", OverrideNativeName="PlayerStart2"))
	FVector bpv__PlayerStart2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Level", Category="Default", OverrideNativeName="level"))
	int32 bpv__level__pf;
	UMyGameSave_C__pf3208112912(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
public:
};
