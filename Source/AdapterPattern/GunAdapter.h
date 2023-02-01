// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SlingShot.h" //Tiro con Honda
#include "GunAdapter.generated.h"

UCLASS()
class ADAPTERPATTERN_API AGunAdapter : public AActor, public ISlingShot
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGunAdapter(); //Adaptador de pistola

private: 

	//El arma actor
	UPROPERTY()
		class AGun* Weapon;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Disparar el arma
	void Sling() override; //Honda
};
