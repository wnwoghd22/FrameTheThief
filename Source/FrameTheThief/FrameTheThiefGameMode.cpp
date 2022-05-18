// Copyright Epic Games, Inc. All Rights Reserved.

#include "FrameTheThiefGameMode.h"
#include "FrameTheThiefCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFrameTheThiefGameMode::AFrameTheThiefGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
