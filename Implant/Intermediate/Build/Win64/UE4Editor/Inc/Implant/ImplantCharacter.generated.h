// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IMPLANT_ImplantCharacter_generated_h
#error "ImplantCharacter.generated.h already included, missing '#pragma once' in ImplantCharacter.h"
#endif
#define IMPLANT_ImplantCharacter_generated_h

#define Implant_Source_Implant_ImplantCharacter_h_14_RPC_WRAPPERS
#define Implant_Source_Implant_ImplantCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Implant_Source_Implant_ImplantCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAImplantCharacter(); \
	friend IMPLANT_API class UClass* Z_Construct_UClass_AImplantCharacter(); \
public: \
	DECLARE_CLASS(AImplantCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Implant"), NO_API) \
	DECLARE_SERIALIZER(AImplantCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Implant_Source_Implant_ImplantCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAImplantCharacter(); \
	friend IMPLANT_API class UClass* Z_Construct_UClass_AImplantCharacter(); \
public: \
	DECLARE_CLASS(AImplantCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Implant"), NO_API) \
	DECLARE_SERIALIZER(AImplantCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Implant_Source_Implant_ImplantCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AImplantCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AImplantCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AImplantCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AImplantCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AImplantCharacter(AImplantCharacter&&); \
	NO_API AImplantCharacter(const AImplantCharacter&); \
public:


#define Implant_Source_Implant_ImplantCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AImplantCharacter(AImplantCharacter&&); \
	NO_API AImplantCharacter(const AImplantCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AImplantCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AImplantCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AImplantCharacter)


#define Implant_Source_Implant_ImplantCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AImplantCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AImplantCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AImplantCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AImplantCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AImplantCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AImplantCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AImplantCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AImplantCharacter, L_MotionController); }


#define Implant_Source_Implant_ImplantCharacter_h_11_PROLOG
#define Implant_Source_Implant_ImplantCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Implant_Source_Implant_ImplantCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Implant_Source_Implant_ImplantCharacter_h_14_RPC_WRAPPERS \
	Implant_Source_Implant_ImplantCharacter_h_14_INCLASS \
	Implant_Source_Implant_ImplantCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Implant_Source_Implant_ImplantCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Implant_Source_Implant_ImplantCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Implant_Source_Implant_ImplantCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Implant_Source_Implant_ImplantCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Implant_Source_Implant_ImplantCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Implant_Source_Implant_ImplantCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
