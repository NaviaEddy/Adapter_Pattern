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

	//El Actor Tirador que sujeta el adaptador del arma
	UPROPERTY()
		class AShooter* Shooter;

protected:

	virtual void BeginPlay() override;
};
