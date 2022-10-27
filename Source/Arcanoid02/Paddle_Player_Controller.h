// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Paddle_Player_Controller.generated.h"

class ABall;

UCLASS()
class ARCANOID02_API APaddle_Player_Controller : public APlayerController
{
	GENERATED_BODY()
		//creamos un controlador donde el constructor
		APaddle_Player_Controller();

	UFUNCTION()
		//diremos anular porque vamos para anular  configurar el componente de entrada
		virtual void SetupInputComponent() override;
protected:
	//esto tambien se anulara
	virtual void BeginPlay() override;
	//va a tomar un eje flotante de valor
	void Launch();
	//ball references
	UPROPERTY(EditAnywhere)
		TSubclassOf<ABall> BallObj;

	ABall* MyBall;
	FVector SpawnLocation = FVector(10.0f, 0.0f, 40.0f);
	FRotator SpawnRotator = FRotator(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	void MoveHorizontal(float AxisValue);
	void MoveVertical(float AxisValue);
public:
	void SpawnNewBall();

};
