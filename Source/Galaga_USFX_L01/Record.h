// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Record.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ARecord : public AActor
{
	GENERATED_BODY()
private:
	float puntaje;
	float recordMayor;
	float recordMayorJugador;
	FString nombreUsuario;
public:
	FORCEINLINE float GetPuntaje() const { return puntaje; }
	FORCEINLINE float GetRecordMayor() const { return recordMayor; }
	FORCEINLINE float GetRecordMayorJugador() const { return recordMayorJugador; }
	FORCEINLINE FString GetNombreUsuario() const { return nombreUsuario; }

	FORCEINLINE void SetPuntaje(float _puntaje) { puntaje = _puntaje; }
	FORCEINLINE void SetRecordMayor(float _recordMayor) { recordMayor = _recordMayor; }
	FORCEINLINE void SetRecordMayorJugador(float _recordMayorJugador) { recordMayorJugador = _recordMayorJugador; }
	FORCEINLINE void SetNombreUsuario(FString _nombreUsuario) { nombreUsuario = _nombreUsuario; }
	
public:	
	// Sets default values for this actor's properties
	ARecord();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
