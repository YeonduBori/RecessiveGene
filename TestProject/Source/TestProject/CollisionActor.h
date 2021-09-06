// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CollisionActor.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TESTPROJECT_API UCollisionActor : public UActorComponent
{
    GENERATED_BODY()

public:
    // Sets default values for this component's properties
    UCollisionActor();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;
    virtual void NotifyHit()(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

public:
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    UPROPERTY(EditAnywhere)
    class UStaticMeshComponent* BoxMesh;

};