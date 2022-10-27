// Fill out your copyright notice in the Description page of Project Settings.


#include "BallBound2.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Paddle_Player_Controller.h"

// Sets default values
ABallBound2::ABallBound2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box collision"));
}

// Called when the game starts or when spawned
void ABallBound2::BeginPlay()
{
	Super::BeginPlay();
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ABallBound2::OnOverlapBegin);

	PlayerControllerREF = Cast<APaddle_Player_Controller>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
}

void ABallBound2::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Ball")) {
		OtherActor->Destroy();
		PlayerControllerREF->SpawnNewBall();
	}

}

// Called every frame
void ABallBound2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

