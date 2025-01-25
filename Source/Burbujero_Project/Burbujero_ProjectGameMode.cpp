// Copyright Epic Games, Inc. All Rights Reserved.

#include "Burbujero_ProjectGameMode.h"
#include "Burbujero_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABurbujero_ProjectGameMode::ABurbujero_ProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
