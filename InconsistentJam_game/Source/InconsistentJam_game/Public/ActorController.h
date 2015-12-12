// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "ActorController.generated.h"

UCLASS()
class INCONSISTENTJAM_GAME_API AActorController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorController();

    UFUNCTION(BlueprintNativeEvent, Category = "Fuck")
    void TestFunc(float testFloat);


    /*
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
    */
	
	
};
