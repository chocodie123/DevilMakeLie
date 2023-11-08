// Copyright Epic Games, Inc. All Rights Reserved.

#include "DevilMakeLieGameMode.h"
#include "DevilMakeLieCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADevilMakeLieGameMode::ADevilMakeLieGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
