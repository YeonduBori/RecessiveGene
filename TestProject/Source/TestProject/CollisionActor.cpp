// Fill out your copyright notice in the Description page of Project Settings.


#include "CollisionActor.h"
#include "Engine/Classes/Components/StaticMeshComponent.h"

// Sets default values for this component's properties
UCollisionActor::UCollisionActor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	BoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoxMesh"));

}

void UCollisionActor::NotifyHit()(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override
{
	UE_LOG(LogTemp, Log, TEXT("Notify Hit"));
}

// Called when the game starts
void UCollisionActor::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void UCollisionActor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
