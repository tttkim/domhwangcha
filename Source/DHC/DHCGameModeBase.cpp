// Copyright Epic Games, Inc. All Rights Reserved.


#include "DHCGameModeBase.h"
#include "DHCPlayerController.h"

ADHCGameModeBase::ADHCGameModeBase()
{
	PlayerControllerClass = ADHCPlayerController::StaticClass();

}