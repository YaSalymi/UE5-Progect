// Created by Alex06

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapGenerator.generated.h"

class UProceduralMeshComponent;

UCLASS()
class TESTGAME_API AMapGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	AMapGenerator();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	int XVirtexCount;

	UPROPERTY(EditAnywhere)
	int YVirtexCount;

	UPROPERTY(EditAnywhere)
	int CeilSceil;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* TerrainMaterial;

	float RandomFloat;

	UProceduralMeshComponent* TerrainMesh;

	TArray<FVector> Vertices;
	TArray<int32> Triangles;

	float PerlinNoise2D(float inX, float inY, float Ampletude, float inScale);

	void GenerateTerrain();

public:	
	virtual void Tick(float DeltaTime) override;

};
