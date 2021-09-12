// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/Classes/Components/StaticMeshComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollisionTestActor.generated.h"


UCLASS()
class TESTPROJECT_API ACollisionTestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACollisionTestActor();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected: 
	virtual void NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
public:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BoxMesh;
	int hitCount;
};
