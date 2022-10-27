// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Paddle.generated.h"


class UFloatingPawnMovement;
UCLASS()
class ARCANOID02_API APaddle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APaddle();

protected:

	virtual void BeginPlay() override;
	//el visibleAnywhere es que sera visible en cualquier lugar... blueprint de solo lectura
	//componente de malla estatica puntero y lo llamara SM_Padle	
	//el visibleAnywhere es que sera visible en cualquier lugar... blueprint de solo lectura
	//movimiento de peon flotatne puntero y lo llamare FloatingMovement	usaremos esto para movernos.
	// Called when the game starts or when spawned
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UStaticMeshComponent* SM_Paddle;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UFloatingPawnMovement* FloatingMovement;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//creamos un vacio virtual y esto va moverse horizontalmente y esto va flotar y llamamos a este valor de un eje este es un parametro para nuestro movimiento de entrada
	virtual void MoveHorizontal(float AxisValue);
	virtual void MoveVertical(float AxisValue);
};
