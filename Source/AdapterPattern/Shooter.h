// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SlingShot.h" //Tiro con honda
#include "Shooter.generated.h"

UCLASS()
class ADAPTERPATTERN_API AShooter : public AActor, public ISlingShot
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShooter(); //Tirador

private:

	//El arma del tirador, que debe ser un tiro con honda
	ISlingShot* SlingShot;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Establecer el Arma Actor
	void SetSlingShot(AActor* SlingShotObj);

	//Disparar con el tiro con honda
	void Sling() override;


};
