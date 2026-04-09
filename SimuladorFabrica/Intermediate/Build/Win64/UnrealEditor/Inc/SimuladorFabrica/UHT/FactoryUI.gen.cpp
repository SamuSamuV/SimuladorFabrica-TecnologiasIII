// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimuladorFabrica/Public/FactoryUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactoryUI() {}

// Begin Cross Module References
SIMULADORFABRICA_API UClass* Z_Construct_UClass_UFactoryUI();
SIMULADORFABRICA_API UClass* Z_Construct_UClass_UFactoryUI_NoRegister();
SIMULADORFABRICA_API UFunction* Z_Construct_UDelegateFunction_SimuladorFabrica_OnEmergencyRestart__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SimuladorFabrica();
// End Cross Module References

// Begin Delegate FOnEmergencyRestart
struct Z_Construct_UDelegateFunction_SimuladorFabrica_OnEmergencyRestart__DelegateSignature_Statics
{
	struct _Script_SimuladorFabrica_eventOnEmergencyRestart_Parms
	{
		int32 LineIDToRestart;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FactoryUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LineIDToRestart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SimuladorFabrica_OnEmergencyRestart__DelegateSignature_Statics::NewProp_LineIDToRestart = { "LineIDToRestart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimuladorFabrica_eventOnEmergencyRestart_Parms, LineIDToRestart), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimuladorFabrica_OnEmergencyRestart__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimuladorFabrica_OnEmergencyRestart__DelegateSignature_Statics::NewProp_LineIDToRestart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimuladorFabrica_OnEmergencyRestart__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimuladorFabrica_OnEmergencyRestart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimuladorFabrica, nullptr, "OnEmergencyRestart__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SimuladorFabrica_OnEmergencyRestart__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimuladorFabrica_OnEmergencyRestart__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SimuladorFabrica_OnEmergencyRestart__DelegateSignature_Statics::_Script_SimuladorFabrica_eventOnEmergencyRestart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimuladorFabrica_OnEmergencyRestart__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimuladorFabrica_OnEmergencyRestart__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SimuladorFabrica_OnEmergencyRestart__DelegateSignature_Statics::_Script_SimuladorFabrica_eventOnEmergencyRestart_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SimuladorFabrica_OnEmergencyRestart__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimuladorFabrica_OnEmergencyRestart__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEmergencyRestart_DelegateWrapper(const FMulticastScriptDelegate& OnEmergencyRestart, int32 LineIDToRestart)
{
	struct _Script_SimuladorFabrica_eventOnEmergencyRestart_Parms
	{
		int32 LineIDToRestart;
	};
	_Script_SimuladorFabrica_eventOnEmergencyRestart_Parms Parms;
	Parms.LineIDToRestart=LineIDToRestart;
	OnEmergencyRestart.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEmergencyRestart

// Begin Class UFactoryUI Function OnRestartButtonClicked
struct Z_Construct_UFunction_UFactoryUI_OnRestartButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FactoryUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactoryUI_OnRestartButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactoryUI, nullptr, "OnRestartButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryUI_OnRestartButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFactoryUI_OnRestartButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFactoryUI_OnRestartButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactoryUI_OnRestartButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFactoryUI::execOnRestartButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRestartButtonClicked();
	P_NATIVE_END;
}
// End Class UFactoryUI Function OnRestartButtonClicked

// Begin Class UFactoryUI
void UFactoryUI::StaticRegisterNativesUFactoryUI()
{
	UClass* Class = UFactoryUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRestartButtonClicked", &UFactoryUI::execOnRestartButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactoryUI);
UClass* Z_Construct_UClass_UFactoryUI_NoRegister()
{
	return UFactoryUI::StaticClass();
}
struct Z_Construct_UClass_UFactoryUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FactoryUI.h" },
		{ "ModuleRelativePath", "Public/FactoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEmergencyRestart_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// El altavoz de la UI para el Gestor Central\n" },
#endif
		{ "ModuleRelativePath", "Public/FactoryUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "El altavoz de la UI para el Gestor Central" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Panel_Emergency_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FactoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_EmergencyDesc_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FactoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Btn_Restart_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FactoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bar_Eff_A_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FactoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bar_Res_A_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FactoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_State_A_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FactoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bar_Eff_B_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FactoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bar_Res_B_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FactoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_State_B_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FactoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bar_Eff_C_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FactoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bar_Res_C_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FactoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_State_C_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FactoryUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEmergencyRestart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Panel_Emergency;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_EmergencyDesc;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Btn_Restart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bar_Eff_A;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bar_Res_A;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_State_A;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bar_Eff_B;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bar_Res_B;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_State_B;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bar_Eff_C;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bar_Res_C;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_State_C;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFactoryUI_OnRestartButtonClicked, "OnRestartButtonClicked" }, // 3934969700
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactoryUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFactoryUI_Statics::NewProp_OnEmergencyRestart = { "OnEmergencyRestart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactoryUI, OnEmergencyRestart), Z_Construct_UDelegateFunction_SimuladorFabrica_OnEmergencyRestart__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEmergencyRestart_MetaData), NewProp_OnEmergencyRestart_MetaData) }; // 3348987751
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFactoryUI_Statics::NewProp_Panel_Emergency = { "Panel_Emergency", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactoryUI, Panel_Emergency), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Panel_Emergency_MetaData), NewProp_Panel_Emergency_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFactoryUI_Statics::NewProp_Text_EmergencyDesc = { "Text_EmergencyDesc", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactoryUI, Text_EmergencyDesc), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_EmergencyDesc_MetaData), NewProp_Text_EmergencyDesc_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFactoryUI_Statics::NewProp_Btn_Restart = { "Btn_Restart", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactoryUI, Btn_Restart), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Btn_Restart_MetaData), NewProp_Btn_Restart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFactoryUI_Statics::NewProp_Bar_Eff_A = { "Bar_Eff_A", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactoryUI, Bar_Eff_A), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bar_Eff_A_MetaData), NewProp_Bar_Eff_A_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFactoryUI_Statics::NewProp_Bar_Res_A = { "Bar_Res_A", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactoryUI, Bar_Res_A), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bar_Res_A_MetaData), NewProp_Bar_Res_A_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFactoryUI_Statics::NewProp_Text_State_A = { "Text_State_A", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactoryUI, Text_State_A), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_State_A_MetaData), NewProp_Text_State_A_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFactoryUI_Statics::NewProp_Bar_Eff_B = { "Bar_Eff_B", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactoryUI, Bar_Eff_B), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bar_Eff_B_MetaData), NewProp_Bar_Eff_B_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFactoryUI_Statics::NewProp_Bar_Res_B = { "Bar_Res_B", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactoryUI, Bar_Res_B), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bar_Res_B_MetaData), NewProp_Bar_Res_B_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFactoryUI_Statics::NewProp_Text_State_B = { "Text_State_B", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactoryUI, Text_State_B), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_State_B_MetaData), NewProp_Text_State_B_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFactoryUI_Statics::NewProp_Bar_Eff_C = { "Bar_Eff_C", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactoryUI, Bar_Eff_C), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bar_Eff_C_MetaData), NewProp_Bar_Eff_C_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFactoryUI_Statics::NewProp_Bar_Res_C = { "Bar_Res_C", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactoryUI, Bar_Res_C), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bar_Res_C_MetaData), NewProp_Bar_Res_C_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFactoryUI_Statics::NewProp_Text_State_C = { "Text_State_C", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactoryUI, Text_State_C), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_State_C_MetaData), NewProp_Text_State_C_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFactoryUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactoryUI_Statics::NewProp_OnEmergencyRestart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactoryUI_Statics::NewProp_Panel_Emergency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactoryUI_Statics::NewProp_Text_EmergencyDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactoryUI_Statics::NewProp_Btn_Restart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactoryUI_Statics::NewProp_Bar_Eff_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactoryUI_Statics::NewProp_Bar_Res_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactoryUI_Statics::NewProp_Text_State_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactoryUI_Statics::NewProp_Bar_Eff_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactoryUI_Statics::NewProp_Bar_Res_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactoryUI_Statics::NewProp_Text_State_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactoryUI_Statics::NewProp_Bar_Eff_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactoryUI_Statics::NewProp_Bar_Res_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactoryUI_Statics::NewProp_Text_State_C,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactoryUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFactoryUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SimuladorFabrica,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactoryUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactoryUI_Statics::ClassParams = {
	&UFactoryUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFactoryUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFactoryUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactoryUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactoryUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactoryUI()
{
	if (!Z_Registration_Info_UClass_UFactoryUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactoryUI.OuterSingleton, Z_Construct_UClass_UFactoryUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactoryUI.OuterSingleton;
}
template<> SIMULADORFABRICA_API UClass* StaticClass<UFactoryUI>()
{
	return UFactoryUI::StaticClass();
}
UFactoryUI::UFactoryUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactoryUI);
UFactoryUI::~UFactoryUI() {}
// End Class UFactoryUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_FactoryUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactoryUI, UFactoryUI::StaticClass, TEXT("UFactoryUI"), &Z_Registration_Info_UClass_UFactoryUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactoryUI), 833182217U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_FactoryUI_h_19690694(TEXT("/Script/SimuladorFabrica"),
	Z_CompiledInDeferFile_FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_FactoryUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_FactoryUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
