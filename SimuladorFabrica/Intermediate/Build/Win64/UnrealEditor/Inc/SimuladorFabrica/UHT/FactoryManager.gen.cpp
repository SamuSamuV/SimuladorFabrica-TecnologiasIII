// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimuladorFabrica/Public/FactoryManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactoryManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SIMULADORFABRICA_API UClass* Z_Construct_UClass_AFactoryManager();
SIMULADORFABRICA_API UClass* Z_Construct_UClass_AFactoryManager_NoRegister();
SIMULADORFABRICA_API UClass* Z_Construct_UClass_AProductionLine_NoRegister();
SIMULADORFABRICA_API UClass* Z_Construct_UClass_UFactoryUI_NoRegister();
SIMULADORFABRICA_API UEnum* Z_Construct_UEnum_SimuladorFabrica_EProductionState();
UPackage* Z_Construct_UPackage__Script_SimuladorFabrica();
// End Cross Module References

// Begin Class AFactoryManager Function OnLineStateChanged
struct Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics
{
	struct FactoryManager_eventOnLineStateChanged_Parms
	{
		int32 LineID;
		float Efficiency;
		float Resources;
		EProductionState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FactoryManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LineID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Efficiency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Resources;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::NewProp_LineID = { "LineID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryManager_eventOnLineStateChanged_Parms, LineID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::NewProp_Efficiency = { "Efficiency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryManager_eventOnLineStateChanged_Parms, Efficiency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::NewProp_Resources = { "Resources", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryManager_eventOnLineStateChanged_Parms, Resources), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryManager_eventOnLineStateChanged_Parms, NewState), Z_Construct_UEnum_SimuladorFabrica_EProductionState, METADATA_PARAMS(0, nullptr) }; // 539001135
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::NewProp_LineID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::NewProp_Efficiency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::NewProp_Resources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFactoryManager, nullptr, "OnLineStateChanged", nullptr, nullptr, Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::FactoryManager_eventOnLineStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::FactoryManager_eventOnLineStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFactoryManager_OnLineStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFactoryManager_OnLineStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFactoryManager::execOnLineStateChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LineID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Efficiency);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Resources);
	P_GET_ENUM(EProductionState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLineStateChanged(Z_Param_LineID,Z_Param_Efficiency,Z_Param_Resources,EProductionState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class AFactoryManager Function OnLineStateChanged

// Begin Class AFactoryManager
void AFactoryManager::StaticRegisterNativesAFactoryManager()
{
	UClass* Class = AFactoryManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnLineStateChanged", &AFactoryManager::execOnLineStateChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFactoryManager);
UClass* Z_Construct_UClass_AFactoryManager_NoRegister()
{
	return AFactoryManager::StaticClass();
}
struct Z_Construct_UClass_AFactoryManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FactoryManager.h" },
		{ "ModuleRelativePath", "Public/FactoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineA_MetaData[] = {
		{ "Category", "Factory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referencias a las l\xef\xbf\xbdneas\n" },
#endif
		{ "ModuleRelativePath", "Public/FactoryManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referencias a las l\xef\xbf\xbdneas" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineB_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "Public/FactoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineC_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "Public/FactoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactoryUIClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referencias a la UI\n" },
#endif
		{ "ModuleRelativePath", "Public/FactoryManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referencias a la UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactoryUIInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FactoryManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineC;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FactoryUIClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactoryUIInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFactoryManager_OnLineStateChanged, "OnLineStateChanged" }, // 1123262800
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFactoryManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFactoryManager_Statics::NewProp_LineA = { "LineA", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFactoryManager, LineA), Z_Construct_UClass_AProductionLine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineA_MetaData), NewProp_LineA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFactoryManager_Statics::NewProp_LineB = { "LineB", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFactoryManager, LineB), Z_Construct_UClass_AProductionLine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineB_MetaData), NewProp_LineB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFactoryManager_Statics::NewProp_LineC = { "LineC", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFactoryManager, LineC), Z_Construct_UClass_AProductionLine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineC_MetaData), NewProp_LineC_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFactoryManager_Statics::NewProp_FactoryUIClass = { "FactoryUIClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFactoryManager, FactoryUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UFactoryUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactoryUIClass_MetaData), NewProp_FactoryUIClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFactoryManager_Statics::NewProp_FactoryUIInstance = { "FactoryUIInstance", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFactoryManager, FactoryUIInstance), Z_Construct_UClass_UFactoryUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactoryUIInstance_MetaData), NewProp_FactoryUIInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFactoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFactoryManager_Statics::NewProp_LineA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFactoryManager_Statics::NewProp_LineB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFactoryManager_Statics::NewProp_LineC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFactoryManager_Statics::NewProp_FactoryUIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFactoryManager_Statics::NewProp_FactoryUIInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFactoryManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SimuladorFabrica,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFactoryManager_Statics::ClassParams = {
	&AFactoryManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFactoryManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AFactoryManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFactoryManager()
{
	if (!Z_Registration_Info_UClass_AFactoryManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFactoryManager.OuterSingleton, Z_Construct_UClass_AFactoryManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFactoryManager.OuterSingleton;
}
template<> SIMULADORFABRICA_API UClass* StaticClass<AFactoryManager>()
{
	return AFactoryManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFactoryManager);
AFactoryManager::~AFactoryManager() {}
// End Class AFactoryManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_FactoryManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFactoryManager, AFactoryManager::StaticClass, TEXT("AFactoryManager"), &Z_Registration_Info_UClass_AFactoryManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFactoryManager), 3390579039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_FactoryManager_h_2216034000(TEXT("/Script/SimuladorFabrica"),
	Z_CompiledInDeferFile_FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_FactoryManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_FactoryManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
