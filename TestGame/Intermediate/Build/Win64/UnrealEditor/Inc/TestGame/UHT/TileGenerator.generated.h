// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TileGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTGAME_TileGenerator_generated_h
#error "TileGenerator.generated.h already included, missing '#pragma once' in TileGenerator.h"
#endif
#define TESTGAME_TileGenerator_generated_h

#define FID_TestGame_Source_TestGame_Public_TileGenerator_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATileGenerator(); \
	friend struct Z_Construct_UClass_ATileGenerator_Statics; \
public: \
	DECLARE_CLASS(ATileGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestGame"), NO_API) \
	DECLARE_SERIALIZER(ATileGenerator)


#define FID_TestGame_Source_TestGame_Public_TileGenerator_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATileGenerator(ATileGenerator&&); \
	ATileGenerator(const ATileGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATileGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATileGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATileGenerator) \
	NO_API virtual ~ATileGenerator();


#define FID_TestGame_Source_TestGame_Public_TileGenerator_h_9_PROLOG
#define FID_TestGame_Source_TestGame_Public_TileGenerator_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestGame_Source_TestGame_Public_TileGenerator_h_12_INCLASS_NO_PURE_DECLS \
	FID_TestGame_Source_TestGame_Public_TileGenerator_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTGAME_API UClass* StaticClass<class ATileGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestGame_Source_TestGame_Public_TileGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
