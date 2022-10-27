// Fill out your copyright notice in the Description page of Project Settings.


#include "Paddle_Player_Controller.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"
#include "Paddle.h"
#include "Ball.h"

APaddle_Player_Controller::APaddle_Player_Controller()
{
}

void APaddle_Player_Controller::BeginPlay()
{
	Super::BeginPlay();
	//TArray va se un conjunto de actores y punteros de actores y decimos camera y obtenemos todas las camaras del juego
	TArray<AActor* > CameraActors;
	//Aqui las estadisticas del juego y obtener todos los actores de clase y obtener mundo por que lo vamos a meter dentro del mundo y la clase sera un actor de camara columna: clase estatica y almacenamos dentro de nuestros actores de camara
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);
	//paraetros de transicion de destino 
	FViewTargetTransitionParams Params;
	//esto es la camara para que nos muestre el juego es solo una camara y pasaremos nuestros parametros
	SetViewTarget(CameraActors[0], Params);
	SpawnNewBall();
}

void APaddle_Player_Controller::Launch()
{
	MyBall->Launch();
}
void APaddle_Player_Controller::SetupInputComponent()
{
	//lo llamamos super dos punto y configuramos la entrada componente de entrada
	Super::SetupInputComponent(); 
	//aqui habilitamos la entrada habilitamos la entrada en este controlador de reproductor para que detecte esa entrada dentro del controlador del reproductor  
	EnableInput(this);
	//ahora vinculamos nuestro movimiento horizontal a la entrada y decir guion mayor que signo por el eje 
	//en aqui vivulara para que pueda moverse
	InputComponent->BindAxis("MoveHorizontal", this, &APaddle_Player_Controller::MoveHorizontal);
	InputComponent->BindAxis("MoveVertical", this, &APaddle_Player_Controller::MoveVertical);
	InputComponent->BindAction("Lanch", IE_Pressed, this, &APaddle_Player_Controller::Launch);
}

void APaddle_Player_Controller::MoveHorizontal(float AxisValue)
{
	//moveremos nuestra paleta y lo llamamos MyPawn lo lanza eso en una paleta y voy a lanzar obtener el pawn 
	//auto va a detectar el valor o el tipo de variable que esta en el lado derecho 
	auto MyPawn = Cast<APaddle>(GetPawn());
	
	if (MyPawn) {
		//se movio horizontalmente pasando el valor del eje 
		MyPawn->MoveHorizontal(AxisValue);
	}
	//if (MyPawn) ? (MyPawn->MoveHorizontal);

}

void APaddle_Player_Controller::MoveVertical(float AxisValue)
{
	auto MyPawn = Cast<APaddle>(GetPawn());

	if (MyPawn) {
		//se movio horizontalmente pasando el valor del eje 
		MyPawn->MoveVertical(AxisValue);
	}
}


void APaddle_Player_Controller::SpawnNewBall()
{
	if (!MyBall) {
		MyBall = nullptr;
	}

	if (BallObj) {
		MyBall = GetWorld()->SpawnActor<ABall>(BallObj, SpawnLocation, SpawnRotator, SpawnInfo);
	}

}
