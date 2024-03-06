// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaVida.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaVida : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int numeroVidas;
public:
	FORCEINLINE int GetNumeroVidas() const { return numeroVidas; }

	FORCEINLINE void SetNumeroVidas(int _numeroVidas) { numeroVidas = _numeroVidas; }
	
};
