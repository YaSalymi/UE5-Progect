// Created by Alex06

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TileGenerator.generated.h"

UCLASS()
class TESTGAME_API ATileGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	ATileGenerator();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	UBlueprint* BP;

public:	
	virtual void Tick(float DeltaTime) override;

};
