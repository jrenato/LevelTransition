// Copyright Epic Games, Inc. All Rights Reserved.

#include "LevelTransitionGameMode.h"
#include "LevelTransitionCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALevelTransitionGameMode::ALevelTransitionGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
