// Copyright Epic Games, Inc. All Rights Reserved.


#include "DHCGameModeBase.h"
#include "DHCPawn.h"
#include "DHCPlayerController.h"

ADHCGameModeBase::ADHCGameModeBase()
{
	DefaultPawnClass = ADHCPawn::StaticClass();
	PlayerControllerClass = ADHCPlayerController::StaticClass();
	static ConstructorHelpers::FClassFinder<APawn> BP_PAWN_C(TEXT("/Game/ThirdPersonBP/Blueprints/ThirdPersonCharacter.ThirdPersonCharacter_C"));
	if (BP_PAWN_C.Succeeded())
	{
		DefaultPawnClass = BP_PAWN_C.Class;
	}
}