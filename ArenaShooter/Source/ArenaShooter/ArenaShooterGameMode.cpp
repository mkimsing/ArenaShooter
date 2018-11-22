// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ArenaShooterGameMode.h"
#include "ArenaShooterPlayerController.h"
#include "ArenaShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArenaShooterGameMode::AArenaShooterGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AArenaShooterPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}