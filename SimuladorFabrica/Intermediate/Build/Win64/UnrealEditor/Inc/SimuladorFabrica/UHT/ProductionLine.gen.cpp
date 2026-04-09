// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimuladorFabrica/Public/ProductionLine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProductionLine() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SIMULADORFABRICA_API UClass* Z_Construct_UClass_AProductionLine();
SIMULADORFABRICA_API UClass* Z_Construct_UClass_AProductionLine_NoRegister();
SIMULADORFABRICA_API UEnum* Z_Construct_UEnum_SimuladorFabrica_EProductionState();
SIMULADORFABRICA_API UFunction* Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SimuladorFabrica();
// End Cross Module References

// Begin Enum EProductionState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProductionState;
static UEnum* EProductionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProductionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProductionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimuladorFabrica_EProductionState, (UObject*)Z_Construct_UPackage__Script_SimuladorFabrica(), TEXT("EProductionState"));
	}
	return Z_Registration_Info_UEnum_EProductionState.OuterSingleton;
}
template<> SIMULADORFABRICA_API UEnum* StaticEnum<EProductionState>()
{
	return EProductionState_StaticEnum();
}
struct Z_Construct_UEnum_SimuladorFabrica_EProductionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- ENUMERADOR DE ESTADOS ---\n" },
#endif
		{ "Critical.DisplayName", "Critical" },
		{ "Critical.Name", "EProductionState::Critical" },
		{ "ModuleRelativePath", "Public/ProductionLine.h" },
		{ "Operational.DisplayName", "Operational" },
		{ "Operational.Name", "EProductionState::Operational" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- ENUMERADOR DE ESTADOS ---" },
#endif
		{ "Warning.DisplayName", "Warning" },
		{ "Warning.Name", "EProductionState::Warning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProductionState::Operational", (int64)EProductionState::Operational },
		{ "EProductionState::Warning", (int64)EProductionState::Warning },
		{ "EProductionState::Critical", (int64)EProductionState::Critical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimuladorFabrica_EProductionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimuladorFabrica,
	nullptr,
	"EProductionState",
	"EProductionState",
	Z_Construct_UEnum_SimuladorFabrica_EProductionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimuladorFabrica_EProductionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimuladorFabrica_EProductionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimuladorFabrica_EProductionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimuladorFabrica_EProductionState()
{
	if (!Z_Registration_Info_UEnum_EProductionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProductionState.InnerSingleton, Z_Construct_UEnum_SimuladorFabrica_EProductionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProductionState.InnerSingleton;
}
// End Enum EProductionState

// Begin Delegate FOnProductionStateChanged
struct Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics
{
	struct _Script_SimuladorFabrica_eventOnProductionStateChanged_Parms
	{
		int32 LineID;
		float Efficiency;
		float Resources;
		EProductionState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- DELEGADO MULTICAST ---\n" },
#endif
		{ "ModuleRelativePath", "Public/ProductionLine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- DELEGADO MULTICAST ---" },
#endif
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::NewProp_LineID = { "LineID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimuladorFabrica_eventOnProductionStateChanged_Parms, LineID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::NewProp_Efficiency = { "Efficiency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimuladorFabrica_eventOnProductionStateChanged_Parms, Efficiency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::NewProp_Resources = { "Resources", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimuladorFabrica_eventOnProductionStateChanged_Parms, Resources), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimuladorFabrica_eventOnProductionStateChanged_Parms, NewState), Z_Construct_UEnum_SimuladorFabrica_EProductionState, METADATA_PARAMS(0, nullptr) }; // 539001135
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::NewProp_LineID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::NewProp_Efficiency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::NewProp_Resources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimuladorFabrica, nullptr, "OnProductionStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::_Script_SimuladorFabrica_eventOnProductionStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::_Script_SimuladorFabrica_eventOnProductionStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnProductionStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnProductionStateChanged, int32 LineID, float Efficiency, float Resources, EProductionState NewState)
{
	struct _Script_SimuladorFabrica_eventOnProductionStateChanged_Parms
	{
		int32 LineID;
		float Efficiency;
		float Resources;
		EProductionState NewState;
	};
	_Script_SimuladorFabrica_eventOnProductionStateChanged_Parms Parms;
	Parms.LineID=LineID;
	Parms.Efficiency=Efficiency;
	Parms.Resources=Resources;
	Parms.NewState=NewState;
	OnProductionStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnProductionStateChanged

// Begin Class AProductionLine
void AProductionLine::StaticRegisterNativesAProductionLine()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProductionLine);
UClass* Z_Construct_UClass_AProductionLine_NoRegister()
{
	return AProductionLine::StaticClass();
}
struct Z_Construct_UClass_AProductionLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProductionLine.h" },
		{ "ModuleRelativePath", "Public/ProductionLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStateChanged_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// El altavoz que avisa a otros de los cambios\n" },
#endif
		{ "ModuleRelativePath", "Public/ProductionLine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "El altavoz que avisa a otros de los cambios" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineID_MetaData[] = {
		{ "Category", "Production" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Identificador de la l\xef\xbf\xbdnea\n" },
#endif
		{ "ModuleRelativePath", "Public/ProductionLine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Identificador de la l\xef\xbf\xbdnea" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LineID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProductionLine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AProductionLine_Statics::NewProp_OnStateChanged = { "OnStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProductionLine, OnStateChanged), Z_Construct_UDelegateFunction_SimuladorFabrica_OnProductionStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStateChanged_MetaData), NewProp_OnStateChanged_MetaData) }; // 2513740592
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProductionLine_Statics::NewProp_LineID = { "LineID", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProductionLine, LineID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineID_MetaData), NewProp_LineID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProductionLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProductionLine_Statics::NewProp_OnStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProductionLine_Statics::NewProp_LineID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProductionLine_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProductionLine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SimuladorFabrica,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProductionLine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProductionLine_Statics::ClassParams = {
	&AProductionLine::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProductionLine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProductionLine_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProductionLine_Statics::Class_MetaDataParams), Z_Construct_UClass_AProductionLine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProductionLine()
{
	if (!Z_Registration_Info_UClass_AProductionLine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProductionLine.OuterSingleton, Z_Construct_UClass_AProductionLine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProductionLine.OuterSingleton;
}
template<> SIMULADORFABRICA_API UClass* StaticClass<AProductionLine>()
{
	return AProductionLine::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProductionLine);
AProductionLine::~AProductionLine() {}
// End Class AProductionLine

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_ProductionLine_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProductionState_StaticEnum, TEXT("EProductionState"), &Z_Registration_Info_UEnum_EProductionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 539001135U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProductionLine, AProductionLine::StaticClass, TEXT("AProductionLine"), &Z_Registration_Info_UClass_AProductionLine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProductionLine), 3287729585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_ProductionLine_h_3918098271(TEXT("/Script/SimuladorFabrica"),
	Z_CompiledInDeferFile_FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_ProductionLine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_ProductionLine_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_ProductionLine_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_ProductionLine_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
