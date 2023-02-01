// Copyright Epic Games, Inc. All Rights Reserved.


#include "AdapterPatternGameModeBase.h"
#include "GunAdapter.h" //Adaptador de pistola
#include "Shooter.h" //Tirador

AAdapterPatternGameModeBase::AAdapterPatternGameModeBase()
{
	//Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AAdapterPatternGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	//Engendrar el adaptador de pistola
	AGunAdapter* GunAdapter = GetWorld()->SpawnActor<AGunAdapter>(AGunAdapter::StaticClass());

	//Engendrar el tirador y establecer el adaptador de pistola
	Shooter = GetWorld()->SpawnActor<AShooter>(AShooter::StaticClass());
	Shooter->SetSlingShot(GunAdapter);

	//Disparar
	Shooter->Sling();

}
