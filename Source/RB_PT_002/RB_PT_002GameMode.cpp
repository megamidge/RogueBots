// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "RB_PT_002GameMode.h"
#include "RB_PT_002Character.h"
#include "UObject/ConstructorHelpers.h"

ARB_PT_002GameMode::ARB_PT_002GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
