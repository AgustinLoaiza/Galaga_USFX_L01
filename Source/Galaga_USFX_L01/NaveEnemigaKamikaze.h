// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaKamikaze.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaKamikaze : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int danoMortal;
public:
	FORCEINLINE int GetDanoMortal() const { return danoMortal; }

	FORCEINLINE void SetDanoMortal(int _danoMortal) { danoMortal = _danoMortal; }
	
};
