// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ImplantGameMode.h"
#include "ImplantHUD.h"
#include "ImplantCharacter.h"
#include "UObject/ConstructorHelpers.h"

AImplantGameMode::AImplantGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AImplantHUD::StaticClass();
}
