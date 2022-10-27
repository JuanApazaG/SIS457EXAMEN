// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BallBound2.generated.h"
class UBoxComponent;
class APaddlePlayerController;

UCLASS()
class ARCANOID02_API ABallBound2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABallBound2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UBoxComponent* BoxCollision;

	class APaddle_Player_Controller* PlayerControllerREF;
	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, 
			class UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, 
			const FHitResult& SweepResult);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
