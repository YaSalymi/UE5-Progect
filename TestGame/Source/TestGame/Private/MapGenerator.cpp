// Created by Alex06


#include "MapGenerator.h"
#include "ProceduralMeshComponent.h"

AMapGenerator::AMapGenerator()
{
	PrimaryActorTick.bCanEverTick = false;

	RandomFloat = FMath::RandRange(-10000.0F, 10000.0F);

	TerrainMesh = CreateDefaultSubobject<UProceduralMeshComponent>("TestMesh");
	SetRootComponent(TerrainMesh);
}

void AMapGenerator::BeginPlay()
{
	Super::BeginPlay();
	GenerateTerrain();
}

void AMapGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMapGenerator::GenerateTerrain()
{
	for (int y = 0; y < YVirtexCount; y++) {
		for (int x = 0; x < XVirtexCount; x++) {
			Vertices.Add(FVector(x * CeilSceil, y * CeilSceil, PerlinNoise2D(x * CeilSceil, y * CeilSceil, 1000.0F, 0.0001F) +
															   PerlinNoise2D(x * CeilSceil, y * CeilSceil, 100.0F, 0.001F) +
															   PerlinNoise2D(x * CeilSceil, y * CeilSceil, 10.0F, 0.01F)));
		}
	}

	for (int y = 0; y < YVirtexCount - 1; y++) {
		for (int x = 0; x < XVirtexCount - 1; x++) {
			int pos = y * XVirtexCount + x;
			Triangles.Add(pos);
			Triangles.Add(pos + XVirtexCount);
			Triangles.Add(pos + 1);
			Triangles.Add(pos + XVirtexCount + 1);
			Triangles.Add(pos + 1);
			Triangles.Add(pos + XVirtexCount);
		}
	}

	TerrainMesh->CreateMeshSection(0, Vertices, Triangles, TArray<FVector>(), TArray<FVector2D>(), TArray<FColor>(), TArray<FProcMeshTangent>(), true);
	TerrainMesh->SetMaterial(0, TerrainMaterial);
}

float AMapGenerator::PerlinNoise2D(float inX, float inY, float Ampletude, float inScale)
{
	float ZVertices = FMath::PerlinNoise1D(inScale * inX + RandomFloat) * FMath::PerlinNoise1D(inScale * inY + RandomFloat);
	return ZVertices * Ampletude;
}
