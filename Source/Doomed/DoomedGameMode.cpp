// Copyright Epic Games, Inc. All Rights Reserved.

#include "DoomedGameMode.h"
#include "DoomedCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADoomedGameMode::ADoomedGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
