// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	int32 inputA = 10;

	UPROPERTY(EditAnywhere)
	int32 inputB = 7;

	UPROPERTY(EditAnywhere)
	int32 aPlusB = 0;

	UPROPERTY(EditAnywhere)
	float inputFloatA = 27.4f;

	UPROPERTY(EditAnywhere)
	float inputFloatB = 78.2f;

	UPROPERTY(EditAnywhere)
	float floatAPlusFloatB = 0;

};
