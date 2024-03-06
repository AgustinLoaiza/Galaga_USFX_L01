// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTanque.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaTanque : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int navesGeneracion;
public:
	FORCEINLINE int GetNavesGeneracion() const { return navesGeneracion; }

	FORCEINLINE void SetNavesGeneracion(int _navesGeneracion) { navesGeneracion = _navesGeneracion; }
	
};
