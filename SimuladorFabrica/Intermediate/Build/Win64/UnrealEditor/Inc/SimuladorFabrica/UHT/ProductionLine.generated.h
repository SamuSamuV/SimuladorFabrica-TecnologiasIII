// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProductionLine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EProductionState : uint8;
#ifdef SIMULADORFABRICA_ProductionLine_generated_h
#error "ProductionLine.generated.h already included, missing '#pragma once' in ProductionLine.h"
#endif
#define SIMULADORFABRICA_ProductionLine_generated_h

#define FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_ProductionLine_h_18_DELEGATE \
SIMULADORFABRICA_API void FOnProductionStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnProductionStateChanged, int32 LineID, float Efficiency, float Resources, EProductionState NewState);


#define FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_ProductionLine_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProductionLine(); \
	friend struct Z_Construct_UClass_AProductionLine_Statics; \
public: \
	DECLARE_CLASS(AProductionLine, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimuladorFabrica"), NO_API) \
	DECLARE_SERIALIZER(AProductionLine)


#define FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_ProductionLine_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProductionLine(AProductionLine&&); \
	AProductionLine(const AProductionLine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProductionLine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProductionLine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProductionLine) \
	NO_API virtual ~AProductionLine();


#define FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_ProductionLine_h_21_PROLOG
#define FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_ProductionLine_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_ProductionLine_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_ProductionLine_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMULADORFABRICA_API UClass* StaticClass<class AProductionLine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alumno_Documents_GitHub_SimuladorFabrica_TecnologiasIII_SimuladorFabrica_Source_SimuladorFabrica_Public_ProductionLine_h


#define FOREACH_ENUM_EPRODUCTIONSTATE(op) \
	op(EProductionState::Operational) \
	op(EProductionState::Warning) \
	op(EProductionState::Critical) 

enum class EProductionState : uint8;
template<> struct TIsUEnumClass<EProductionState> { enum { Value = true }; };
template<> SIMULADORFABRICA_API UEnum* StaticEnum<EProductionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
