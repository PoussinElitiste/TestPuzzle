// Fill out your copyright notice in the Description page of Project Settings.

#include "TestPuzzleCameraActor.h"

#include "Kismet/GameplayStatics.h"

// Called when the game starts or when spawned
void ATestPuzzleCameraActor::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
	OurPlayerController->SetViewTarget(this);
}