// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "NC_Feb_2015HUD.generated.h"

UCLASS()
class ANC_Feb_2015HUD : public AHUD
{
	GENERATED_BODY()

public:
	ANC_Feb_2015HUD(const FObjectInitializer& ObjectInitializer);

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

