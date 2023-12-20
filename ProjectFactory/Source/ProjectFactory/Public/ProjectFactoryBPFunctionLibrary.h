// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProjectFactoryBPFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTFACTORY_API UProjectFactoryBPFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, meta = (WorldContext = WorldContextObject))
	static void RebuildNavMesh(const UObject* WorldContextObject);
};
