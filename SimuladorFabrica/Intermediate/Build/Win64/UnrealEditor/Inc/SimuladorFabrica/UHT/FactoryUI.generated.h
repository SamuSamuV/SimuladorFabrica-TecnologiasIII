// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FactoryUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMULADORFABRICA_FactoryUI_generated_h
#error "FactoryUI.generated.h already included, missing '#pragma once' in FactoryUI.h"
#endif
#define SIMULADORFABRICA_FactoryUI_generated_h

#define FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_FactoryUI_h_13_DELEGATE \
SIMULADORFABRICA_API void FOnEmergencyRestart_DelegateWrapper(const FMulticastScriptDelegate& OnEmergencyRestart, int32 LineIDToRestart);


#define FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_FactoryUI_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRestartButtonClicked);


#define FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_FactoryUI_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFactoryUI(); \
	friend struct Z_Construct_UClass_UFactoryUI_Statics; \
public: \
	DECLARE_CLASS(UFactoryUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimuladorFabrica"), NO_API) \
	DECLARE_SERIALIZER(UFactoryUI)


#define FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_FactoryUI_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFactoryUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFactoryUI(UFactoryUI&&); \
	UFactoryUI(const UFactoryUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFactoryUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFactoryUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFactoryUI) \
	NO_API virtual ~UFactoryUI();


#define FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_FactoryUI_h_15_PROLOG
#define FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_FactoryUI_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_FactoryUI_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_FactoryUI_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_FactoryUI_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMULADORFABRICA_API UClass* StaticClass<class UFactoryUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_FactoryUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
