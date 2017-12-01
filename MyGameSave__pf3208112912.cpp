#include "NativizedAssets.h"
#include "MyGameSave__pf3208112912.h"
#include "GeneratedCodeHelpers.h"
#include "MyGameSave__pf3208112912.h"
void UMyGameSave_C__pf3208112912::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->UsedAssets.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
}
UMyGameSave_C__pf3208112912::UMyGameSave_C__pf3208112912(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UMyGameSave_C__pf3208112912::StaticClass() == GetClass()))
	{
		UMyGameSave_C__pf3208112912::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Location__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__CurrentEnergy__pf = 0.000000f;
	bpv__Resolution__pf = FString(TEXT(""));
	bpv__c1__pf = false;
	bpv__c2__pf = false;
	bpv__c3__pf = false;
	bpv__c4__pf = false;
	bpv__PlayerStart2__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__level__pf = 0;
}
void UMyGameSave_C__pf3208112912::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UMyGameSave_C__pf3208112912::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
struct FRegisterHelper__UMyGameSave_C__pf3208112912
{
	FRegisterHelper__UMyGameSave_C__pf3208112912()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/RollingBP/Blueprints/MyGameSave"), &UMyGameSave_C__pf3208112912::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UMyGameSave_C__pf3208112912 Instance;
};
FRegisterHelper__UMyGameSave_C__pf3208112912 FRegisterHelper__UMyGameSave_C__pf3208112912::Instance;
