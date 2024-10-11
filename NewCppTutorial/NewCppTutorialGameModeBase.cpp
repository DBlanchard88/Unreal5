// Fill out your copyright notice in the Description page of Project Settings.


#include "NewCppTutorialGameModeBase.h"

void ANewCppTutorialGameModeBase::InitGameState()
{
	Super::InitGameState();
	

	// Set the default pawn
	if (DefaultPawnClass == ADefaultPawn::StaticClass())
	{
		//Update too custom implementation
		DefaultPawnClass = CustomXPPawnClass;
	}
}
