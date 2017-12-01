#include "NativizedAssets.h"
#include "DmgTypeBP_Environmental__pf2398200284.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/CoreUObject/Classes/Object.h"
#include "DmgTypeBP_Environmental__pf2398200284.h"
void UDmgTypeBP_Environmental_C__pf2398200284::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->UsedAssets.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
}
UDmgTypeBP_Environmental_C__pf2398200284::UDmgTypeBP_Environmental_C__pf2398200284(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UDmgTypeBP_Environmental_C__pf2398200284::StaticClass() == GetClass()))
	{
		UDmgTypeBP_Environmental_C__pf2398200284::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bCausedByWorld = true;
}
void UDmgTypeBP_Environmental_C__pf2398200284::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UDmgTypeBP_Environmental_C__pf2398200284::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
struct FRegisterHelper__UDmgTypeBP_Environmental_C__pf2398200284
{
	FRegisterHelper__UDmgTypeBP_Environmental_C__pf2398200284()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Engine/EngineDamageTypes/DmgTypeBP_Environmental"), &UDmgTypeBP_Environmental_C__pf2398200284::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UDmgTypeBP_Environmental_C__pf2398200284 Instance;
};
FRegisterHelper__UDmgTypeBP_Environmental_C__pf2398200284 FRegisterHelper__UDmgTypeBP_Environmental_C__pf2398200284::Instance;
