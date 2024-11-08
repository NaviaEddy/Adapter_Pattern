// Fill out your copyright notice in the Description page of Project Settings.


#include "GunAdapter.h"
#include "Gun.h" //Pistola

// Sets default values
AGunAdapter::AGunAdapter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGunAdapter::BeginPlay()
{
	Super::BeginPlay();

	//Engendrar el arma
	Weapon = GetWorld()->SpawnActor<AGun>(AGun::StaticClass());
	
}

// Called every frame
void AGunAdapter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGunAdapter::Sling()
{
	if (!Weapon) {
		UE_LOG(LogTemp, Error, TEXT("Sling(): Weapon es NULL, asegurese de que este inicializada." ));
		return ; 
	}

	//Llamar a la funci�n disparo
	Weapon->Fire();

}

