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
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector currentPosition = GetActorLocation();
	currentPosition += velocity * (moveSpeed * DeltaTime);
	SetActorLocation(currentPosition);

	distanceTravelled = FVector::Distance(startPosition, currentPosition);
	if(distanceTravelled > maxMoveDistance)
	{
		velocity = -velocity;
		startPosition = currentPosition;
	}

	/*	
	Move platform forward
		* Get current position
		* Add a vector to this position
		* Set position
	Reverse direction
		* Check if gone too far
		* Multiply the direction vector by -1
	*/
}

