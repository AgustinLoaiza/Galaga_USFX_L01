// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaFugaz.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaFugaz : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int velocidadProyectil;
public:
	FORCEINLINE int GetVelocidadProyectil() const { return velocidadProyectil; }

	FORCEINLINE void SetVelocidadProyectil(int _velocidadProyectil) { velocidadProyectil = _velocidadProyectil; }
	
};
