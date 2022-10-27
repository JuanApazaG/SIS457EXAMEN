// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ABall::ABall()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(TEXT("StaticMesh'/Game/Assets/Meshes/SM_Ball.SM_Ball'"));
	//contructor
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//SM_Ball sera igual para crear un dubobjeto predeterminado de tipo UstaticMeshComponent y ahi camos con el nombre dentro de un texto y el nombre solo sera bola
	SM_Ball = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ball"));
	//el componente raiz sera igual a nuestro SM_Ball
	RootComponent = SM_Ball;
	//SM_Ball simular fisica haci que establece simular fisica que esta aqui  es que simule es para crear el efecto de rebote
	SM_Ball->SetSimulatePhysics(true);
	//SM_Ball habilita la garves eso va ser falso esto es para que la gravedad no tire hacia abajo la pelota
	SM_Ball->SetEnableGravity(false);
	// SM_Ball modo de restriccion y ese modo EDOFMode en los ejes x y z 
	SM_Ball->SetConstraintMode(EDOFMode::XZPlane);
	//y queremos que sea un cuerpo fisico haci que habilitamos las colisiones
	SM_Ball->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SM_Ball->SetCollisionProfileName(TEXT("PhysicsActor"));
	// desde aqui lo comence a hacer de la guia

	SM_Ball->SetStaticMesh(BallMesh.Object);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->bShouldBounce = true; //Tiene que rebotar
	ProjectileMovement->Bounciness = 1.1f; //Rebote
	ProjectileMovement->Friction = 0.0f; //Friccion
	ProjectileMovement->Velocity.X = 200.0f; //Velocidad
	
}

void ABall::Launch()
{
	if (!BallLaunched) {
		SM_Ball->AddImpulse(FVector(140.0f, 0.0f, 130.0f), FName(), true);
		BallLaunched = true;
	}

}

UStaticMeshComponent* ABall::GetBall()
{
	return SM_Ball;
}
// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


