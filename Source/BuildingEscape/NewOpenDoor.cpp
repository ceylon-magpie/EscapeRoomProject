// Fill out your copyright notice in the Description page of Project Settings.

#include "NewOpenDoor.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UNewOpenDoor::UNewOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UNewOpenDoor::BeginPlay()
{
	Super::BeginPlay();
	AActor* Owner = GetOwner();
	FRotator NewRotation = FRotator(0.0f,-90.0f,0.0f);
	Owner->SetActorRotation(NewRotation);
	// ...
	
}


// Called every frame
void UNewOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

