// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ball.generated.h"
class UProjectileMovementComponent;

UCLASS()
class ARCANOID02_API ABall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABall(); //constructor
	//usaremos esto para lanzar o impulsar nuestar bola 
	virtual void Launch();
	//bola lanzada que denotara si hemos lanzado la bola o no declaramos esto por que no queremos lanzar la bola varias veces
	bool BallLaunched;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//sera visible en cualquier lugar  y va a ser un plano leido o solo 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		//este sera tu componente de malla estatica que es puntero y voy a llamar a este SM_Ball
		UStaticMeshComponent* SM_Ball;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		//movimiento de proyecto o un componente de movimiento de proyectiles es un puntero y lo llamare ProjectilMovement 
		UProjectileMovementComponent* ProjectileMovement;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		//esto sera un componente de malla estatica que bien devuelve un componente de malla estatica  y aqui obtener bola 
		UStaticMeshComponent* GetBall();
};
