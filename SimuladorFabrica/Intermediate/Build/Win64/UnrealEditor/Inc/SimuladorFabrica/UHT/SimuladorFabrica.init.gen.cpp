// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimuladorFabrica_init() {}
	SIMULADORFABRICA_API UFunction* Z_Construct_UDelegateFunction_SimuladorFabrica_OnEmergencyRestart__DelegateSignature();
	SIMULADORFABRICA_API UFunction* Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimuladorFabrica;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimuladorFabrica()
	{
		if (!Z_Registration_Info_UPackage__Script_SimuladorFabrica.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SimuladorFabrica_OnEmergencyRestart__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimuladorFabrica",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDFB9206C,
				0xEA538CC5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimuladorFabrica.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SimuladorFabrica.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimuladorFabrica(Z_Construct_UPackage__Script_SimuladorFabrica, TEXT("/Script/SimuladorFabrica"), Z_Registration_Info_UPackage__Script_SimuladorFabrica, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDFB9206C, 0xEA538CC5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
