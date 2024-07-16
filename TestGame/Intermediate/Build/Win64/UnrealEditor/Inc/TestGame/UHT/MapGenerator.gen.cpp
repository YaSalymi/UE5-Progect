// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestGame/Public/MapGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapGenerator() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
TESTGAME_API UClass* Z_Construct_UClass_AMapGenerator();
TESTGAME_API UClass* Z_Construct_UClass_AMapGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestGame();
// End Cross Module References

// Begin Class AMapGenerator
void AMapGenerator::StaticRegisterNativesAMapGenerator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapGenerator);
UClass* Z_Construct_UClass_AMapGenerator_NoRegister()
{
	return AMapGenerator::StaticClass();
}
struct Z_Construct_UClass_AMapGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MapGenerator.h" },
		{ "ModuleRelativePath", "Public/MapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XVirtexCount_MetaData[] = {
		{ "Category", "MapGenerator" },
		{ "ModuleRelativePath", "Public/MapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YVirtexCount_MetaData[] = {
		{ "Category", "MapGenerator" },
		{ "ModuleRelativePath", "Public/MapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CeilSceil_MetaData[] = {
		{ "Category", "MapGenerator" },
		{ "ModuleRelativePath", "Public/MapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerrainMaterial_MetaData[] = {
		{ "Category", "MapGenerator" },
		{ "ModuleRelativePath", "Public/MapGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_XVirtexCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_YVirtexCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CeilSceil;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TerrainMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapGenerator_Statics::NewProp_XVirtexCount = { "XVirtexCount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapGenerator, XVirtexCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XVirtexCount_MetaData), NewProp_XVirtexCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapGenerator_Statics::NewProp_YVirtexCount = { "YVirtexCount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapGenerator, YVirtexCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YVirtexCount_MetaData), NewProp_YVirtexCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapGenerator_Statics::NewProp_CeilSceil = { "CeilSceil", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapGenerator, CeilSceil), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CeilSceil_MetaData), NewProp_CeilSceil_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapGenerator_Statics::NewProp_TerrainMaterial = { "TerrainMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapGenerator, TerrainMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerrainMaterial_MetaData), NewProp_TerrainMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGenerator_Statics::NewProp_XVirtexCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGenerator_Statics::NewProp_YVirtexCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGenerator_Statics::NewProp_CeilSceil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGenerator_Statics::NewProp_TerrainMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TestGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapGenerator_Statics::ClassParams = {
	&AMapGenerator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMapGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapGenerator_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapGenerator()
{
	if (!Z_Registration_Info_UClass_AMapGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapGenerator.OuterSingleton, Z_Construct_UClass_AMapGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapGenerator.OuterSingleton;
}
template<> TESTGAME_API UClass* StaticClass<AMapGenerator>()
{
	return AMapGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapGenerator);
AMapGenerator::~AMapGenerator() {}
// End Class AMapGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestGame_Source_TestGame_Public_MapGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapGenerator, AMapGenerator::StaticClass, TEXT("AMapGenerator"), &Z_Registration_Info_UClass_AMapGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapGenerator), 947585731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestGame_Source_TestGame_Public_MapGenerator_h_2863692435(TEXT("/Script/TestGame"),
	Z_CompiledInDeferFile_FID_TestGame_Source_TestGame_Public_MapGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestGame_Source_TestGame_Public_MapGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
