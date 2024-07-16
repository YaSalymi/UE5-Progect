// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestGame/Public/TileGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileGenerator() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
TESTGAME_API UClass* Z_Construct_UClass_ATileGenerator();
TESTGAME_API UClass* Z_Construct_UClass_ATileGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestGame();
// End Cross Module References

// Begin Class ATileGenerator
void ATileGenerator::StaticRegisterNativesATileGenerator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATileGenerator);
UClass* Z_Construct_UClass_ATileGenerator_NoRegister()
{
	return ATileGenerator::StaticClass();
}
struct Z_Construct_UClass_ATileGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TileGenerator.h" },
		{ "ModuleRelativePath", "Public/TileGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_MetaData[] = {
		{ "Category", "TileGenerator" },
		{ "ModuleRelativePath", "Public/TileGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATileGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileGenerator_Statics::NewProp_BP = { "BP", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileGenerator, BP), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_MetaData), NewProp_BP_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATileGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGenerator_Statics::NewProp_BP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATileGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TestGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATileGenerator_Statics::ClassParams = {
	&ATileGenerator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATileGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATileGenerator_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATileGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_ATileGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATileGenerator()
{
	if (!Z_Registration_Info_UClass_ATileGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATileGenerator.OuterSingleton, Z_Construct_UClass_ATileGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATileGenerator.OuterSingleton;
}
template<> TESTGAME_API UClass* StaticClass<ATileGenerator>()
{
	return ATileGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATileGenerator);
ATileGenerator::~ATileGenerator() {}
// End Class ATileGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestGame_Source_TestGame_Public_TileGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATileGenerator, ATileGenerator::StaticClass, TEXT("ATileGenerator"), &Z_Registration_Info_UClass_ATileGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATileGenerator), 2732373657U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestGame_Source_TestGame_Public_TileGenerator_h_1705309457(TEXT("/Script/TestGame"),
	Z_CompiledInDeferFile_FID_TestGame_Source_TestGame_Public_TileGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestGame_Source_TestGame_Public_TileGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
