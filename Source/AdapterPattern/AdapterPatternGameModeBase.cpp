// Copyright Epic Games, Inc. All Rights Reserved.


#include "AdapterPatternGameModeBase.h"
#include "GunAdapter.h"
#include "Shooter.h"

AAdapterPatternGameModeBase::AAdapterPatternGameModeBase()
{
	//Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AAdapterPatternGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	//Spawn the Gun Adapter
	AGunAdapter* GunAdapter = GetWorld()->SpawnActor<AGunAdapter>(AGunAdapter::StaticClass());

	//Spawn the Shooter and set the Gun Adapter
	Shooter = GetWorld()->SpawnActor<AShooter>(AShooter::StaticClass());
	Shooter->SetSlingShot(GunAdapter);

	//Shoot
	Shooter->Sling();

}
