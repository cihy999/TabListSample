// Copyright Epic Games, Inc. All Rights Reserved.

#include "TabListSampleGameMode.h"
#include "TabListSampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATabListSampleGameMode::ATabListSampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
