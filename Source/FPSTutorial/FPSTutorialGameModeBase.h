// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSTutorialGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FPSTUTORIAL_API AFPSTutorialGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:

	virtual void StartPlay() override;
};
