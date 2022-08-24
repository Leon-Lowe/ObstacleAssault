// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	startPosition = GetActorLocation();
	moveDirection = moveDirection.GetSafeNormal();
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(canMove) {MovePlatform(DeltaTime);}
	if(canRotate) {RotatePlatform(DeltaTime);}
}

void AMovingPlatform::MovePlatform(float deltaTime)
{
	FVector currentPosition = GetActorLocation();
	currentPosition += moveDirection * (moveSpeed * deltaTime);
	SetActorLocation(currentPosition);

	if(GetDistanceTravelled() > maxMoveDistance)
	{
		startPosition = startPosition + (moveDirection * maxMoveDistance);
		SetActorLocation(startPosition);
		moveDirection = -moveDirection;
	}
}

void AMovingPlatform::RotatePlatform(float deltaTime)
{
	AddActorLocalRotation(rotationDirection * (moveSpeed * deltaTime));
}

float AMovingPlatform::GetDistanceTravelled() const
{
	return FVector::Distance(startPosition, GetActorLocation());
}