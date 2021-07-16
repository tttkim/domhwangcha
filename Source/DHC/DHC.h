// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "EngineMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(DHC, Log, All);
#define LOG_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FSTRING::FromInt(__LINE__) + TEXT(")"))
#define LOG_S(Verbosity) UE_LOG(DHC, Verbosity, TEXT("%s"), *LOG_CALLINFO)
#define LOG(Verbosity, Format, ...) UE_LOG(DHC, Verbosity, TEXT("%s %s"), *ABLOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))