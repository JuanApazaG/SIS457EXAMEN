// Copyright Epic Games, Inc. All Rights Reserved.


#include "Arcanoid02GameModeBase.h"

AArcanoid02GameModeBase::AArcanoid02GameModeBase()
{
}

void AArcanoid02GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Spawn de bricks"));

	//Spawn de los bricks en las coordenadas indicadas

	FVector Location(-140.0f, 4.0f, 400.0f);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	SpawnBrick = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass(), Location, Rotation);

	FVector Location2(-85.0f, 4.0f, 400.0f);
	FRotator Rotation2(0.0f, 0.0f, 0.0f);
	SpawnBrick = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass(), Location2, Rotation2);

	FVector Location3(-30.0f, 4.0f, 400.0f);
	FRotator Rotation3(0.0f, 0.0f, 0.0f);
	SpawnBrick = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass(), Location3, Rotation3);

	FVector Location4(25.0f, 4.0f, 400.0f);
	FRotator Rotation4(0.0f, 0.0f, 0.0f);
	SpawnBrick = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass(), Location4, Rotation4);

	FVector Location5(80.0f, 4.0f, 400.0f);
	FRotator Rotation5(0.0f, 0.0f, 0.0f);
	SpawnBrick = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass(), Location5, Rotation5);

	FVector Location6(135.0f, 4.0f, 400.0f);
	FRotator Rotation6(0.0f, 0.0f, 0.0f);
	SpawnBrick = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass(), Location6, Rotation6);
	for (int i = 0; i < BrickSpawn; i++)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Spawn aleatorio de bricks"));
		int SpawnBricksNumber = FMath::RandRange(0, 2);

		FVector SpawnLocation{ 0 };
		SpawnLocation.Y = FMath::RandRange(MinSpawnY, MaxSpawnY);
		SpawnLocation.Z = FMath::RandRange(MinSpawnZ, MaxSpawnZ);

		SpawnBrick = GetWorld()->SpawnActor<ABrick>(SpawnLocation, FRotator::ZeroRotator);
	}

}
