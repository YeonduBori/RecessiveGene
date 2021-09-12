// Fill out your copyright notice in the Description page of Project Settings.


#include "CollisionTestActor.h"
#include "..\Public\CollisionTestActor.h"

// Sets default values
ACollisionTestActor::ACollisionTestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoxMesh"));
	RootComponent = BoxMesh;
	hitCount = 0;
}

// Called when the game starts or when spawned
void ACollisionTestActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollisionTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACollisionTestActor::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Log, TEXT("NotifyHit [%d] times"), ++hitCount);
}

