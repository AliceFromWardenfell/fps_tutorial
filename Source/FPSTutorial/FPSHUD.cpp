// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSHUD.h"

void AFPSHUD::DrawHUD()
{
	Super::DrawHUD();

	if (CrosshairTexture)
	{
		FVector2D Center(Canvas->ClipX * 0.5, Canvas->ClipY * 0.5);
		FVector2D CrosshairDrawPos(Center.X - CrosshairTexture->GetSurfaceWidth() * 0.5f,
									Center.Y - CrosshairTexture->GetSurfaceHeight() * 0.5f);
		FCanvasTileItem TileItem(CrosshairDrawPos, CrosshairTexture->Resource, FLinearColor::Green);
		TileItem.BlendMode = SE_BLEND_Translucent;
		Canvas->DrawItem(TileItem);
	}
}
