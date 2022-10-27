// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Brick.h"
#include "Arcanoid02GameModeBase.generated.h"
/**
 * 
 */
UCLASS()
class ARCANOID02_API AArcanoid02GameModeBase : public AGameModeBase
{
	GENERATED_BODY()


public:

	AArcanoid02GameModeBase();
	//Spawn Location support
	const float MinSpawnY{ 4.0 };
	const float MaxSpawnY{ 4.0 };
	const float MinSpawnX{ -140 };
	const float MaxSpawnX{ 140 };
	const float MinSpawnZ{ 100 };
	const float MaxSpawnZ{ 400 };

	//How many teddy bears to spawn each time
	const int BrickSpawn = 4;
private:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
		ABrick * SpawnBrick;

};
