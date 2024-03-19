// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstaculo.generated.h"


UCLASS()
class GALAGA_USFX_L01_API AObstaculo : public AActor
{
	GENERATED_BODY()
private:
	float resistencia;
	float tamano;
	float posicionX;
	float posicionY;
	float posicionZ;
	float danoChoque;
	FString material;

public:
	FORCEINLINE float GetResistecnia() const { return resistencia; }
	FORCEINLINE float GetTamano() const { return tamano; }
	FORCEINLINE float GetPosicionX() const { return posicionX; }
	FORCEINLINE float GetPosicionY() const { return posicionY; }
	FORCEINLINE float GetPosicionZ() const { return posicionZ; }
	FORCEINLINE float GetDanoChoque() const { return danoChoque; }
	FORCEINLINE FString GetMaterial() const { return material; }

	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetTamano(float _tamano) { tamano = _tamano; }
	FORCEINLINE void SetPosicionX(float _posicionX) { posicionX = _posicionX; }
	FORCEINLINE void SetPosicionY(float _posicionY) { posicionY = _posicionY; }
	FORCEINLINE void SetPosicionZ(float _posicionZ) { posicionZ = _posicionZ; }
	FORCEINLINE void SetDanoChoque(float _danoChoque) { danoChoque = _danoChoque; }
	FORCEINLINE void Material(FString _material) { material = _material; }
	
public:	
	// Sets default values for this actor's properties
	AObstaculo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
