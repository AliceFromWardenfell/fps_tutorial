// Copyright Epic Games, Inc. All Rights Reserved.


#include "FPSTutorialGameModeBase.h"

void AFPSTutorialGameModeBase::StartPlay()
{
	Super::StartPlay();

	check(GEngine != nullptr);

	GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Cyan, TEXT("Hello from FPS game mode!"));
}
