// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "NC_Feb_2015.h"
#include "NC_Feb_2015GameMode.h"
#include "NC_Feb_2015HUD.h"
#include "NC_Feb_2015Character.h"

ANC_Feb_2015GameMode::ANC_Feb_2015GameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/MyCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANC_Feb_2015HUD::StaticClass();
}
