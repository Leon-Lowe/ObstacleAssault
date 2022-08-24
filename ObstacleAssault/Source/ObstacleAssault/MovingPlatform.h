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

private:
	void MovePlatform(float deltaTime);
	void RotatePlatform(float deltaTime);

	UPROPERTY(EditAnywhere, Category="Movement")
	FVector moveDirection = FVector(1, 0, 0);

	UPROPERTY(EditAnywhere, Category="Movement")
	float moveSpeed = 5.0f;

	UPROPERTY(EditAnywhere, Category="Movement")
	float maxMoveDistance = 100.0f;

	UPROPERTY(VisibleAnywhere, Category="Movement")
	float distanceTravelled;

	FVector startPosition;
};
