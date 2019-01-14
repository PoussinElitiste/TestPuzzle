// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "TestPuzzleCameraActor.generated.h"

/**
 * 
 */
UCLASS()
class TESTPUZZLE_API ATestPuzzleCameraActor : public ACameraActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	void BeginPlay() override;
	
};
