// Fill out your copyright notice in the Description page of Project Settings.


#include "Shooter.h"

// Sets default values
AShooter::AShooter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShooter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShooter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AShooter::SetSlingShot(AActor* SlingShotObj)
{
	//Lanza el Actor pasado y fija el arma
	SlingShot = Cast<ISlingShot>(SlingShotObj);

	if(!SlingShot) //Error de registro si falla el lanzamiento
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Lanzamiento no valido! Vea el registro de salida para mas detalles")));
		UE_LOG(LogTemp, Error, TEXT("SetSlingShot(): El Actor pasado no es un tiro con honda! Esta seguro de que el Actor implementa esa interfaz?" ));
	}

}

void AShooter::Sling()
{
	if (!SlingShot) {
		UE_LOG(LogTemp, Error, TEXT("Sling(): Tiro con honda es NULL, asegurese de que este inicializada.")); 
		return;
	}
	//LLamar a la funcion honda 
	SlingShot->Sling();

}

