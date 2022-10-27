// Fill out your copyright notice in the Description page of Project Settings.


#include "Paddle.h"
#include "GameFramework/FloatingPawnMovement.h" //incluir todos los componentes
#include "Components/StaticMeshComponent.h"
#include "Brick.h"
#include "Engine/World.h"
// Sets default values
APaddle::APaddle() //esto es el constructor
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//creamos un subobjeto predeterminado de tipo UStaticMesh
	SM_Paddle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM Paddle"));
	//componente raiz de nuestro SM_Padle
	RootComponent = SM_Paddle;
	//aremos algunas reglas como habilitar la gravedad y todas las cosas buenas
	SM_Paddle->SetEnableGravity(false); //no queremos habilitar la gravedad
	//restringiremos el movimiento de nuestra paleta solo en el plano x, z
	SM_Paddle->SetConstraintMode(EDOFMode::XZPlane); //esto no permite que suba y que baje
	
	//habilitares las colisiones para que sea un cuerpo fisico
	SM_Paddle->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	//aqui pondremos el nombre del perfil de colision y el nombre estara dentro de un texto como este y el nombre sera actor de fisica
	SM_Paddle->SetCollisionProfileName(TEXT("PhysicsActor"));

	//agregamos el movimiento flotante esto para que sea igual para crear un subobjeto de tipo movimiento de peon flotante como este nombre movimiento de peon flotante
	FloatingMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Floating Pawn Movement"));
}

// Called when the game starts or when spawned
void APaddle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APaddle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APaddle::MoveHorizontal(float AxisValue)
{
	//agregue movimiento para el vector f voy a decir en el eje x vamos a decir el valor del eje 0.0f va ser 0.0f para la z coma el valor flotante o de escala 1.0f y con fuerza falsa no usaremos la fuerza 
	AddMovementInput(FVector(AxisValue, 0.0f, 0.0f), 1.0f, false); //esto movera la paleta en el eje x hacia la izquierda y la derecha

}

void APaddle::MoveVertical(float AxisValue)
{
	AddMovementInput(FVector(0.0f, 0.0f, AxisValue), 1.0f, false);
}

