// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestGame()
	{
		if (!Z_Registration_Info_UPackage__Script_TestGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5051AC60,
				0x5EB101CB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestGame(Z_Construct_UPackage__Script_TestGame, TEXT("/Script/TestGame"), Z_Registration_Info_UPackage__Script_TestGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5051AC60, 0x5EB101CB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
