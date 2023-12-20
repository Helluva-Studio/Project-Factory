// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectFactoryBPFunctionLibrary.h"
#include "NavigationSystem.h"

void UProjectFactoryBPFunctionLibrary::RebuildNavMesh(const UObject* WorldContextObject)
{
	UNavigationSystemV1* NavSys = Cast<UNavigationSystemV1>(WorldContextObject->GetWorld()->GetNavigationSystem());
	if (NavSys && NavSys->NavDataSet.Num() > 0)
	{
		NavSys->Build();
	}
}
