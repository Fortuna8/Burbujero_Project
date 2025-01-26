// Fill out your copyright notice in the Description page of Project Settings.


#include "SquareBubble.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
ASquareBubble::ASquareBubble()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Create and attach the bubble mesh
    BubbleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BubbleMesh"));
    RootComponent = BubbleMesh;

    // Create and attach the invisible box
    LifeBox = CreateDefaultSubobject<UBoxComponent>(TEXT("LifeBox"));
    LifeBox->SetupAttachment(BubbleMesh);

    // Set the size of the box
    LifeBox->SetBoxExtent(FVector(200.f, 200.f, 200.f)); // Adjust as needed
    LifeBox->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

}

// Called when the game starts or when spawned
void ASquareBubble::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASquareBubble::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

