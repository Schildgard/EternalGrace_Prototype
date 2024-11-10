// Copyright Epic Games, Inc. All Rights Reserved.

#include "Forever_KingdomGameMode.h"
#include "Forever_KingdomCharacter.h"
#include "UObject/ConstructorHelpers.h"

AForever_KingdomGameMode::AForever_KingdomGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
