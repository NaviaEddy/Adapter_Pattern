// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AdapterPatternGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ADAPTERPATTERN_API AAdapterPatternGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAdapterPatternGameModeBase();

private:

	//The Shooter Actor that holds the gun adapter
	UPROPERTY()
		class AShooter* Shooter;

protected:

	virtual void BeginPlay() override;
};
