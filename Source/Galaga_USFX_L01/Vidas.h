// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Vidas.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AVidas : public AActor
{
	GENERATED_BODY()
private:
	float vidas;
public:
	FORCEINLINE float GetVidas() const { return vidas; }

	FORCEINLINE void SetVidas(float _vidas) { vidas = _vidas; }
	
public:	
	// Sets default values for this actor's properties
	AVidas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
