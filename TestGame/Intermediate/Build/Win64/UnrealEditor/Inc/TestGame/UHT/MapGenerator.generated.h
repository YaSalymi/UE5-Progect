// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTGAME_MapGenerator_generated_h
#error "MapGenerator.generated.h already included, missing '#pragma once' in MapGenerator.h"
#endif
#define TESTGAME_MapGenerator_generated_h

#define FID_TestGame_Source_TestGame_Public_MapGenerator_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapGenerator(); \
	friend struct Z_Construct_UClass_AMapGenerator_Statics; \
public: \
	DECLARE_CLASS(AMapGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestGame"), NO_API) \
	DECLARE_SERIALIZER(AMapGenerator)


#define FID_TestGame_Source_TestGame_Public_MapGenerator_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMapGenerator(AMapGenerator&&); \
	AMapGenerator(const AMapGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapGenerator) \
	NO_API virtual ~AMapGenerator();


#define FID_TestGame_Source_TestGame_Public_MapGenerator_h_11_PROLOG
#define FID_TestGame_Source_TestGame_Public_MapGenerator_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestGame_Source_TestGame_Public_MapGenerator_h_14_INCLASS_NO_PURE_DECLS \
	FID_TestGame_Source_TestGame_Public_MapGenerator_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTGAME_API UClass* StaticClass<class AMapGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestGame_Source_TestGame_Public_MapGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
