// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaTransporte : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int capacidadNaves;
public:
	FORCEINLINE int GetCapacidadNaves() const { return capacidadNaves; }

	FORCEINLINE void SetCapacidadNaves(int _capacidadNaves) { capacidadNaves = _capacidadNaves; }
	
};
