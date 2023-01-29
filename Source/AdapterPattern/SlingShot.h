// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SlingShot.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USlingShot : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ADAPTERPATTERN_API ISlingShot
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//The pure virtual function of the SlingShot
	virtual void Sling() = 0;
};
