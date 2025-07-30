// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/KawaiiPhysicsExternalForce.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveVector.h"
#include "../../Source/Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsExternalForce() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeVectorCurve();
	KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType();
	KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EExternalForceSpace;
	static UEnum* EExternalForceSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EExternalForceSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EExternalForceSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("EExternalForceSpace"));
		}
		return Z_Registration_Info_UEnum_EExternalForceSpace.OuterSingleton;
	}
	template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EExternalForceSpace>()
	{
		return EExternalForceSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace_Statics::Enumerators[] = {
		{ "EExternalForceSpace::ComponentSpace", (int64)EExternalForceSpace::ComponentSpace },
		{ "EExternalForceSpace::WorldSpace", (int64)EExternalForceSpace::WorldSpace },
		{ "EExternalForceSpace::BoneSpace", (int64)EExternalForceSpace::BoneSpace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BoneSpace.Comment", "/** Simulate in another bone space. Moving the entire skeletal mesh and individually modifying the base bone will have no affect on velocities */" },
		{ "BoneSpace.Name", "EExternalForceSpace::BoneSpace" },
		{ "BoneSpace.ToolTip", "Simulate in another bone space. Moving the entire skeletal mesh and individually modifying the base bone will have no affect on velocities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum representing the space in which external forces are simulated.\n */" },
#endif
		{ "ComponentSpace.Comment", "/** Simulate in component space. Moving the entire skeletal mesh will have no affect on velocities */" },
		{ "ComponentSpace.Name", "EExternalForceSpace::ComponentSpace" },
		{ "ComponentSpace.ToolTip", "Simulate in component space. Moving the entire skeletal mesh will have no affect on velocities" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum representing the space in which external forces are simulated." },
#endif
		{ "WorldSpace.Comment", "/** Simulate in world space. Moving the skeletal mesh will generate velocity changes */" },
		{ "WorldSpace.Name", "EExternalForceSpace::WorldSpace" },
		{ "WorldSpace.ToolTip", "Simulate in world space. Moving the skeletal mesh will generate velocity changes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		"EExternalForceSpace",
		"EExternalForceSpace",
		Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace()
	{
		if (!Z_Registration_Info_UEnum_EExternalForceSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EExternalForceSpace.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EExternalForceSpace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EExternalForceCurveEvaluateType;
	static UEnum* EExternalForceCurveEvaluateType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EExternalForceCurveEvaluateType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EExternalForceCurveEvaluateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("EExternalForceCurveEvaluateType"));
		}
		return Z_Registration_Info_UEnum_EExternalForceCurveEvaluateType.OuterSingleton;
	}
	template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EExternalForceCurveEvaluateType>()
	{
		return EExternalForceCurveEvaluateType_StaticEnum();
	}
	struct Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType_Statics::Enumerators[] = {
		{ "EExternalForceCurveEvaluateType::Single", (int64)EExternalForceCurveEvaluateType::Single },
		{ "EExternalForceCurveEvaluateType::Average", (int64)EExternalForceCurveEvaluateType::Average },
		{ "EExternalForceCurveEvaluateType::Max", (int64)EExternalForceCurveEvaluateType::Max },
		{ "EExternalForceCurveEvaluateType::Min", (int64)EExternalForceCurveEvaluateType::Min },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType_Statics::Enum_MetaDataParams[] = {
		{ "Average.Comment", "/** Evaluate the curve by averaging multiple points */" },
		{ "Average.Name", "EExternalForceCurveEvaluateType::Average" },
		{ "Average.ToolTip", "Evaluate the curve by averaging multiple points" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum representing the evaluation type for external force curves.\n */" },
#endif
		{ "Max.Comment", "/** Evaluate the curve by taking the maximum value from multiple points */" },
		{ "Max.Name", "EExternalForceCurveEvaluateType::Max" },
		{ "Max.ToolTip", "Evaluate the curve by taking the maximum value from multiple points" },
		{ "Min.Comment", "/** Evaluate the curve by taking the minimum value from multiple points */" },
		{ "Min.Name", "EExternalForceCurveEvaluateType::Min" },
		{ "Min.ToolTip", "Evaluate the curve by taking the minimum value from multiple points" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
		{ "Single.Comment", "/** Evaluate the curve at a single point */" },
		{ "Single.Name", "EExternalForceCurveEvaluateType::Single" },
		{ "Single.ToolTip", "Evaluate the curve at a single point" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum representing the evaluation type for external force curves." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		"EExternalForceCurveEvaluateType",
		"EExternalForceCurveEvaluateType",
		Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType()
	{
		if (!Z_Registration_Info_UEnum_EExternalForceCurveEvaluateType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EExternalForceCurveEvaluateType.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EExternalForceCurveEvaluateType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce;
class UScriptStruct* FKawaiiPhysics_ExternalForce::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysics_ExternalForce"));
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysics_ExternalForce>()
{
	return FKawaiiPhysics_ExternalForce::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ApplyBoneFilter_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyBoneFilter_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ApplyBoneFilter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IgnoreBoneFilter_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreBoneFilter_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoreBoneFilter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExternalForceSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalForceSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExternalForceSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomForceScaleRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomForceScaleRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExternalOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOneShot_MetaData[];
#endif
		static void NewProp_bIsOneShot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOneShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomizedForceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomizedForceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanSelectForceSpace_MetaData[];
#endif
		static void NewProp_bCanSelectForceSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSelectForceSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///\n/// Base\n///\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysics_ExternalForce>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the external force is enabled */" },
#endif
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the external force is enabled" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((FKawaiiPhysics_ExternalForce*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysics_ExternalForce), &Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsEnabled_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to draw debug information for the external force */" },
#endif
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to draw debug information for the external force" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((FKawaiiPhysics_ExternalForce*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysics_ExternalForce), &Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bDrawDebug_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bDrawDebug_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ApplyBoneFilter_Inner = { "ApplyBoneFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ApplyBoneFilter_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe5\xa4\x96\xe5\x8a\x9b\xe3\x82\x92\xe9\x81\xa9\xe5\xbf\x9c\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xef\xbc\x88\xef\xbc\x9d\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x8b\xe3\x81\xa3\xe3\x81\x9f\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe3\x81\xaf\xe9\x81\xa9\xe5\xbf\x9c\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xef\xbc\x89\n\x09* Specify the bones to which the external force will be applied (= the force will not be applied to bones that are not specified)\n\x09*/" },
#endif
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x96\xe5\x8a\x9b\xe3\x82\x92\xe9\x81\xa9\xe5\xbf\x9c\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xef\xbc\x88\xef\xbc\x9d\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x8b\xe3\x81\xa3\xe3\x81\x9f\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe3\x81\xaf\xe9\x81\xa9\xe5\xbf\x9c\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xef\xbc\x89\nSpecify the bones to which the external force will be applied (= the force will not be applied to bones that are not specified)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ApplyBoneFilter = { "ApplyBoneFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce, ApplyBoneFilter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ApplyBoneFilter_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ApplyBoneFilter_MetaData) }; // 1286936164
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_IgnoreBoneFilter_Inner = { "IgnoreBoneFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_IgnoreBoneFilter_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe5\xa4\x96\xe5\x8a\x9b\xe3\x82\x92\xe9\x81\xa9\xe5\xbf\x9c\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\n\x09* Specify the bones to which the external force will be NOT applied\n\x09*/" },
#endif
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x96\xe5\x8a\x9b\xe3\x82\x92\xe9\x81\xa9\xe5\xbf\x9c\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\nSpecify the bones to which the external force will be NOT applied" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_IgnoreBoneFilter = { "IgnoreBoneFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce, IgnoreBoneFilter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_IgnoreBoneFilter_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_IgnoreBoneFilter_MetaData) }; // 1286936164
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ExternalForceSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ExternalForceSpace_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The space in which the external force is simulated */" },
#endif
		{ "DisplayPriority", "1" },
		{ "EditCondition", "bCanSelectForceSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The space in which the external force is simulated" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ExternalForceSpace = { "ExternalForceSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce, ExternalForceSpace), Z_Construct_UEnum_KawaiiPhysics_EExternalForceSpace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ExternalForceSpace_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ExternalForceSpace_MetaData) }; // 2391464276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_RandomForceScaleRange_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Range for randomizing the force scale */" },
#endif
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Range for randomizing the force scale" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_RandomForceScaleRange = { "RandomForceScaleRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce, RandomForceScaleRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_RandomForceScaleRange_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_RandomForceScaleRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ExternalOwner_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Owner of the external force */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Owner of the external force" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ExternalOwner = { "ExternalOwner", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce, ExternalOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ExternalOwner_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ExternalOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsOneShot_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the external force is applied only once */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the external force is applied only once" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsOneShot_SetBit(void* Obj)
	{
		((FKawaiiPhysics_ExternalForce*)Obj)->bIsOneShot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsOneShot = { "bIsOneShot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysics_ExternalForce), &Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsOneShot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsOneShot_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsOneShot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_RandomizedForceScale_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Randomized scale of the force */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Randomized scale of the force" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_RandomizedForceScale = { "RandomizedForceScale", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce, RandomizedForceScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_RandomizedForceScale_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_RandomizedForceScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_Force_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The force vector */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The force vector" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_Force_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_Force_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ComponentTransform_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Transform of the component */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform of the component" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ComponentTransform = { "ComponentTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce, ComponentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ComponentTransform_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ComponentTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bCanSelectForceSpace_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the force space can be selected */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the force space can be selected" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bCanSelectForceSpace_SetBit(void* Obj)
	{
		((FKawaiiPhysics_ExternalForce*)Obj)->bCanSelectForceSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bCanSelectForceSpace = { "bCanSelectForceSpace", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysics_ExternalForce), &Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bCanSelectForceSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bCanSelectForceSpace_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bCanSelectForceSpace_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ApplyBoneFilter_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ApplyBoneFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_IgnoreBoneFilter_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_IgnoreBoneFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ExternalForceSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ExternalForceSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_RandomForceScaleRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ExternalOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bIsOneShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_RandomizedForceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_Force,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_ComponentTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewProp_bCanSelectForceSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		&NewStructOps,
		"KawaiiPhysics_ExternalForce",
		Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::PropPointers),
		sizeof(FKawaiiPhysics_ExternalForce),
		alignof(FKawaiiPhysics_ExternalForce),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce()
	{
		if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce.InnerSingleton;
	}

static_assert(std::is_polymorphic<FKawaiiPhysics_ExternalForce_Basic>() == std::is_polymorphic<FKawaiiPhysics_ExternalForce>(), "USTRUCT FKawaiiPhysics_ExternalForce_Basic cannot be polymorphic unless super FKawaiiPhysics_ExternalForce is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Basic;
class UScriptStruct* FKawaiiPhysics_ExternalForce_Basic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Basic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Basic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysics_ExternalForce_Basic"));
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Basic.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysics_ExternalForce_Basic>()
{
	return FKawaiiPhysics_ExternalForce_Basic::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForceDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceRateByBoneLengthRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForceRateByBoneLengthRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Interval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PrevTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///\n/// Basic\n///\n" },
#endif
		{ "DisplayName", "Basic" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysics_ExternalForce_Basic>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_ForceDir_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Direction of the force */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direction of the force" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_ForceDir = { "ForceDir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Basic, ForceDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_ForceDir_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_ForceDir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_ForceRateByBoneLengthRate_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b""Force Rate\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\x09* \xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92""ForceRate\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\n\x09* Corrects the Force Rate applied to each bone.\n\x09* Multiplies the ForceRate by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b""Force Rate\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92""ForceRate\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\nCorrects the Force Rate applied to each bone.\nMultiplies the ForceRate by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_ForceRateByBoneLengthRate = { "ForceRateByBoneLengthRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Basic, ForceRateByBoneLengthRate), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_ForceRateByBoneLengthRate_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_ForceRateByBoneLengthRate_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_Interval_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interval for applying the force */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interval for applying the force" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Basic, Interval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_Interval_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_Interval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_Time_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current time */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current time" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Basic, Time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_Time_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_Time_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_PrevTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Previous time */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Previous time" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_PrevTime = { "PrevTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Basic, PrevTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_PrevTime_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_PrevTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_ForceDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_ForceRateByBoneLengthRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_Interval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewProp_PrevTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce,
		&NewStructOps,
		"KawaiiPhysics_ExternalForce_Basic",
		Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::PropPointers),
		sizeof(FKawaiiPhysics_ExternalForce_Basic),
		alignof(FKawaiiPhysics_ExternalForce_Basic),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic()
	{
		if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Basic.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Basic.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Basic.InnerSingleton;
	}

static_assert(std::is_polymorphic<FKawaiiPhysics_ExternalForce_Gravity>() == std::is_polymorphic<FKawaiiPhysics_ExternalForce>(), "USTRUCT FKawaiiPhysics_ExternalForce_Gravity cannot be polymorphic unless super FKawaiiPhysics_ExternalForce is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Gravity;
class UScriptStruct* FKawaiiPhysics_ExternalForce_Gravity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Gravity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Gravity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysics_ExternalForce_Gravity"));
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Gravity.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysics_ExternalForce_Gravity>()
{
	return FKawaiiPhysics_ExternalForce_Gravity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceRateByBoneLengthRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForceRateByBoneLengthRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCharacterGravityDirection_MetaData[];
#endif
		static void NewProp_bUseCharacterGravityDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCharacterGravityDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCharacterGravityScale_MetaData[];
#endif
		static void NewProp_bUseCharacterGravityScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCharacterGravityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideGravityDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideGravityDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseOverrideGravityDirection_MetaData[];
#endif
		static void NewProp_bUseOverrideGravityDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOverrideGravityDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///\n/// Gravity\n///\n" },
#endif
		{ "DisplayName", "Gravity" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gravity" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysics_ExternalForce_Gravity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_ForceRateByBoneLengthRate_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b""Force Rate\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\x09* \xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92""ForceRate\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\n\x09* Corrects the Force Rate applied to each bone.\n\x09* Multiplies the ForceRate by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b""Force Rate\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92""ForceRate\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\nCorrects the Force Rate applied to each bone.\nMultiplies the ForceRate by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_ForceRateByBoneLengthRate = { "ForceRateByBoneLengthRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Gravity, ForceRateByBoneLengthRate), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_ForceRateByBoneLengthRate_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_ForceRateByBoneLengthRate_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityDirection_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Character\xe5\x81\xb4\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f""CustomGravityDirection\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0(UE5.4\xe4\xbb\xa5\xe9\x99\x8d)\n\x09* Flag to use CustomGravityDirection set on the Character side (UE5.4 and later)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character\xe5\x81\xb4\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f""CustomGravityDirection\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0(UE5.4\xe4\xbb\xa5\xe9\x99\x8d)\nFlag to use CustomGravityDirection set on the Character side (UE5.4 and later)" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityDirection_SetBit(void* Obj)
	{
		((FKawaiiPhysics_ExternalForce_Gravity*)Obj)->bUseCharacterGravityDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityDirection = { "bUseCharacterGravityDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysics_ExternalForce_Gravity), &Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityDirection_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityScale_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Character\xe5\x81\xb4\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9fGravityScale\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\n\x09* Flag to use GravityScale set on the Character side\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character\xe5\x81\xb4\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9fGravityScale\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\nFlag to use GravityScale set on the Character side" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityScale_SetBit(void* Obj)
	{
		((FKawaiiPhysics_ExternalForce_Gravity*)Obj)->bUseCharacterGravityScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityScale = { "bUseCharacterGravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysics_ExternalForce_Gravity), &Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityScale_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_OverrideGravityDirection_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Direction to override the gravity.\n\x09 * This direction is used when bUseOverrideGravityDirection is true.\n\x09 */" },
#endif
		{ "EditCondition", "bUseOverrideGravityDirection" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direction to override the gravity.\nThis direction is used when bUseOverrideGravityDirection is true." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_OverrideGravityDirection = { "OverrideGravityDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Gravity, OverrideGravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_OverrideGravityDirection_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_OverrideGravityDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseOverrideGravityDirection_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Flag to determine whether to use the override gravity direction.\n\x09 * If true, the gravity direction will be overridden by OverrideGravityDirection.\n\x09 */" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag to determine whether to use the override gravity direction.\nIf true, the gravity direction will be overridden by OverrideGravityDirection." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseOverrideGravityDirection_SetBit(void* Obj)
	{
		((FKawaiiPhysics_ExternalForce_Gravity*)Obj)->bUseOverrideGravityDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseOverrideGravityDirection = { "bUseOverrideGravityDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKawaiiPhysics_ExternalForce_Gravity), &Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseOverrideGravityDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseOverrideGravityDirection_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseOverrideGravityDirection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_ForceRateByBoneLengthRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseCharacterGravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_OverrideGravityDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewProp_bUseOverrideGravityDirection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce,
		&NewStructOps,
		"KawaiiPhysics_ExternalForce_Gravity",
		Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::PropPointers),
		sizeof(FKawaiiPhysics_ExternalForce_Gravity),
		alignof(FKawaiiPhysics_ExternalForce_Gravity),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity()
	{
		if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Gravity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Gravity.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Gravity.InnerSingleton;
	}

static_assert(std::is_polymorphic<FKawaiiPhysics_ExternalForce_Curve>() == std::is_polymorphic<FKawaiiPhysics_ExternalForce>(), "USTRUCT FKawaiiPhysics_ExternalForce_Curve cannot be polymorphic unless super FKawaiiPhysics_ExternalForce is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Curve;
class UScriptStruct* FKawaiiPhysics_ExternalForce_Curve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Curve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Curve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysics_ExternalForce_Curve"));
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Curve.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysics_ExternalForce_Curve>()
{
	return FKawaiiPhysics_ExternalForce_Curve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForceCurve;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveEvaluateType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveEvaluateType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveEvaluateType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubstepCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubstepCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceRateByBoneLengthRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForceRateByBoneLengthRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PrevTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCurveTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCurveTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///\n/// Curve\n///\n" },
#endif
		{ "DisplayName", "Curve" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysics_ExternalForce_Curve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_ForceCurve_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe6\x99\x82\xe9\x96\x93\xe3\x81\xab\xe5\xbf\x9c\xe3\x81\x98\xe3\x81\xa6\xe5\xa4\x89\xe5\x8c\x96\xe3\x81\x99\xe3\x82\x8b\xe5\xa4\x96\xe5\x8a\x9b\xe3\x82\x92\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x80\x82X\xe8\xbb\xb8:Time Y\xe8\xbb\xb8:Force\n\x09* Set the external force that changes over time using a curve. X-axis: Time Y-axis: Force\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x99\x82\xe9\x96\x93\xe3\x81\xab\xe5\xbf\x9c\xe3\x81\x98\xe3\x81\xa6\xe5\xa4\x89\xe5\x8c\x96\xe3\x81\x99\xe3\x82\x8b\xe5\xa4\x96\xe5\x8a\x9b\xe3\x82\x92\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x80\x82X\xe8\xbb\xb8:Time Y\xe8\xbb\xb8:Force\nSet the external force that changes over time using a curve. X-axis: Time Y-axis: Force" },
#endif
		{ "XAxisName", "Time" },
		{ "YAxisName", "Force" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_ForceCurve = { "ForceCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Curve, ForceCurve), Z_Construct_UScriptStruct_FRuntimeVectorCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_ForceCurve_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_ForceCurve_MetaData) }; // 429390256
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_CurveEvaluateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_CurveEvaluateType_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe8\xa9\x95\xe4\xbe\xa1\xe6\x96\xb9\xe5\xbc\x8f\xe3\x80\x82\n\x09* Single\xe4\xbb\xa5\xe5\xa4\x96\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xef\xbc\x9a\xe5\x89\x8d\xe3\x83\x95\xe3\x83\xac\xe3\x83\xbc\xe3\x83\xa0\xe3\x81\x8b\xe3\x82\x89\xe3\x81\xae\xe7\xb5\x8c\xe9\x81\x8e\xe6\x99\x82\xe9\x96\x93\xe3\x82\x92SubstepCount\xe3\x81\xa7\xe5\x88\x86\xe5\x89\xb2\xe3\x81\x97\xe3\x80\x81\n\x09* \xe5\x88\x86\xe5\x89\xb2\xe5\xbe\x8c\xe3\x81\xae\xe5\x90\x84\xe6\x99\x82\xe9\x96\x93\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xae\xe5\xb9\xb3\xe5\x9d\x87\xe3\x83\xbb\xe6\x9c\x80\xe5\xa4\xa7\xe5\x80\xa4\xe3\x83\xbb\xe6\x9c\x80\xe5\xb0\x8f\xe5\x80\xa4\xe3\x82\x92\xe5\xa4\x96\xe5\x8a\x9b\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe4\xbd\xbf\xe7\x94\xa8\n\x09* Curve evaluation method\n\x09* If set to anything other than Single: The time elapsed from the previous frame is divided by SubstepCount,\n\x09* and the Average, Maximum, or Minimum values of the curve at each time point after division are used as external forces.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe8\xa9\x95\xe4\xbe\xa1\xe6\x96\xb9\xe5\xbc\x8f\xe3\x80\x82\nSingle\xe4\xbb\xa5\xe5\xa4\x96\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xef\xbc\x9a\xe5\x89\x8d\xe3\x83\x95\xe3\x83\xac\xe3\x83\xbc\xe3\x83\xa0\xe3\x81\x8b\xe3\x82\x89\xe3\x81\xae\xe7\xb5\x8c\xe9\x81\x8e\xe6\x99\x82\xe9\x96\x93\xe3\x82\x92SubstepCount\xe3\x81\xa7\xe5\x88\x86\xe5\x89\xb2\xe3\x81\x97\xe3\x80\x81\n\xe5\x88\x86\xe5\x89\xb2\xe5\xbe\x8c\xe3\x81\xae\xe5\x90\x84\xe6\x99\x82\xe9\x96\x93\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xae\xe5\xb9\xb3\xe5\x9d\x87\xe3\x83\xbb\xe6\x9c\x80\xe5\xa4\xa7\xe5\x80\xa4\xe3\x83\xbb\xe6\x9c\x80\xe5\xb0\x8f\xe5\x80\xa4\xe3\x82\x92\xe5\xa4\x96\xe5\x8a\x9b\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe4\xbd\xbf\xe7\x94\xa8\nCurve evaluation method\nIf set to anything other than Single: The time elapsed from the previous frame is divided by SubstepCount,\nand the Average, Maximum, or Minimum values of the curve at each time point after division are used as external forces." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_CurveEvaluateType = { "CurveEvaluateType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Curve, CurveEvaluateType), Z_Construct_UEnum_KawaiiPhysics_EExternalForceCurveEvaluateType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_CurveEvaluateType_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_CurveEvaluateType_MetaData) }; // 2614753141
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_SubstepCount_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe7\xb5\x8c\xe9\x81\x8e\xe6\x99\x82\xe9\x96\x93\xe3\x81\xae\xe5\x88\x86\xe5\x89\xb2\xe6\x95\xb0\n\x09* Number of divisions of elapsed time\n\x09*/" },
#endif
		{ "EditCondition", "CurveEvaluateType!=EExternalForceCurveEvaluateType::Single" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb5\x8c\xe9\x81\x8e\xe6\x99\x82\xe9\x96\x93\xe3\x81\xae\xe5\x88\x86\xe5\x89\xb2\xe6\x95\xb0\nNumber of divisions of elapsed time" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_SubstepCount = { "SubstepCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Curve, SubstepCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_SubstepCount_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_SubstepCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_TimeScale_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Scale factor for the time.\n\x09 * This value is used to scale the time for the external force.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale factor for the time.\nThis value is used to scale the time for the external force." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Curve, TimeScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_TimeScale_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_TimeScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_ForceRateByBoneLengthRate_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b""Force Rate\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\x09* \xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92""ForceRate\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\n\x09* Corrects the Force Rate applied to each bone.\n\x09* Multiplies the ForceRate by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b""Force Rate\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92""ForceRate\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\nCorrects the Force Rate applied to each bone.\nMultiplies the ForceRate by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_ForceRateByBoneLengthRate = { "ForceRateByBoneLengthRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Curve, ForceRateByBoneLengthRate), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_ForceRateByBoneLengthRate_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_ForceRateByBoneLengthRate_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_Time_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Current time.\n\x09 * This value is used to track the current time for the external force.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current time.\nThis value is used to track the current time for the external force." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Curve, Time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_Time_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_Time_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_PrevTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Previous time.\n\x09 * This value is used to track the previous time for the external force.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Previous time.\nThis value is used to track the previous time for the external force." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_PrevTime = { "PrevTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Curve, PrevTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_PrevTime_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_PrevTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_MaxCurveTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Maximum curve time.\n\x09 * This value is used to track the maximum time for the force curve.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum curve time.\nThis value is used to track the maximum time for the force curve." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_MaxCurveTime = { "MaxCurveTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Curve, MaxCurveTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_MaxCurveTime_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_MaxCurveTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_ForceCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_CurveEvaluateType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_CurveEvaluateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_SubstepCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_TimeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_ForceRateByBoneLengthRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_PrevTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewProp_MaxCurveTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce,
		&NewStructOps,
		"KawaiiPhysics_ExternalForce_Curve",
		Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::PropPointers),
		sizeof(FKawaiiPhysics_ExternalForce_Curve),
		alignof(FKawaiiPhysics_ExternalForce_Curve),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve()
	{
		if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Curve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Curve.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Curve.InnerSingleton;
	}

static_assert(std::is_polymorphic<FKawaiiPhysics_ExternalForce_Wind>() == std::is_polymorphic<FKawaiiPhysics_ExternalForce>(), "USTRUCT FKawaiiPhysics_ExternalForce_Wind cannot be polymorphic unless super FKawaiiPhysics_ExternalForce is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Wind;
class UScriptStruct* FKawaiiPhysics_ExternalForce_Wind::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Wind.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Wind.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysics_ExternalForce_Wind"));
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Wind.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysics_ExternalForce_Wind>()
{
	return FKawaiiPhysics_ExternalForce_Wind::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceRateByBoneLengthRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForceRateByBoneLengthRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///\n/// Wind\n///\n" },
#endif
		{ "DisplayName", "Wind" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wind" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysics_ExternalForce_Wind>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewProp_ForceRateByBoneLengthRate_MetaData[] = {
		{ "Category", "KawaiiPhysics|ExternalForce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* \xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b""Force Rate\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\x09* \xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92""ForceRate\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\n\x09* Corrects the Force Rate applied to each bone.\n\x09* Multiplies the ForceRate by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x84\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b""Force Rate\xe3\x82\x92\xe8\xa3\x9c\xe6\xad\xa3\xe3\x80\x82\n\xe3\x80\x8cRootBone\xe3\x81\x8b\xe3\x82\x89\xe7\x89\xb9\xe5\xae\x9a\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95 / RootBone\xe3\x81\x8b\xe3\x82\x89\xe6\x9c\xab\xe7\xab\xaf\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe9\x95\xb7\xe3\x81\x95\xe3\x80\x8d(0.0~1.0)\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xab\xe3\x81\x8a\xe3\x81\x91\xe3\x82\x8b\xe3\x82\xab\xe3\x83\xbc\xe3\x83\x96\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92""ForceRate\xe3\x81\xab\xe4\xb9\x97\xe7\xae\x97\nCorrects the Force Rate applied to each bone.\nMultiplies the ForceRate by the curve value for \"Length from RootBone to specific bone / Length from RootBone to end bone\" (0.0~1.0)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewProp_ForceRateByBoneLengthRate = { "ForceRateByBoneLengthRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Wind, ForceRateByBoneLengthRate), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewProp_ForceRateByBoneLengthRate_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewProp_ForceRateByBoneLengthRate_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewProp_World_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Pointer to the world.\n\x09 * This is used to access the world context for the external force.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsExternalForce.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the world.\nThis is used to access the world context for the external force." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKawaiiPhysics_ExternalForce_Wind, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewProp_World_MetaData), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewProp_World_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewProp_ForceRateByBoneLengthRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewProp_World,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce,
		&NewStructOps,
		"KawaiiPhysics_ExternalForce_Wind",
		Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::PropPointers),
		sizeof(FKawaiiPhysics_ExternalForce_Wind),
		alignof(FKawaiiPhysics_ExternalForce_Wind),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind()
	{
		if (!Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Wind.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Wind.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Wind.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SatisfactoryModLoader_Mods_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsExternalForce_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SatisfactoryModLoader_Mods_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsExternalForce_h_Statics::EnumInfo[] = {
		{ EExternalForceSpace_StaticEnum, TEXT("EExternalForceSpace"), &Z_Registration_Info_UEnum_EExternalForceSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2391464276U) },
		{ EExternalForceCurveEvaluateType_StaticEnum, TEXT("EExternalForceCurveEvaluateType"), &Z_Registration_Info_UEnum_EExternalForceCurveEvaluateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2614753141U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SatisfactoryModLoader_Mods_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsExternalForce_h_Statics::ScriptStructInfo[] = {
		{ FKawaiiPhysics_ExternalForce::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Statics::NewStructOps, TEXT("KawaiiPhysics_ExternalForce"), &Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysics_ExternalForce), 2068973164U) },
		{ FKawaiiPhysics_ExternalForce_Basic::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Basic_Statics::NewStructOps, TEXT("KawaiiPhysics_ExternalForce_Basic"), &Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Basic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysics_ExternalForce_Basic), 4010937177U) },
		{ FKawaiiPhysics_ExternalForce_Gravity::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Gravity_Statics::NewStructOps, TEXT("KawaiiPhysics_ExternalForce_Gravity"), &Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Gravity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysics_ExternalForce_Gravity), 1442392869U) },
		{ FKawaiiPhysics_ExternalForce_Curve::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Curve_Statics::NewStructOps, TEXT("KawaiiPhysics_ExternalForce_Curve"), &Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Curve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysics_ExternalForce_Curve), 2828905013U) },
		{ FKawaiiPhysics_ExternalForce_Wind::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysics_ExternalForce_Wind_Statics::NewStructOps, TEXT("KawaiiPhysics_ExternalForce_Wind"), &Z_Registration_Info_UScriptStruct_KawaiiPhysics_ExternalForce_Wind, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysics_ExternalForce_Wind), 3495263247U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SatisfactoryModLoader_Mods_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsExternalForce_h_1245540136(TEXT("/Script/KawaiiPhysics"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SatisfactoryModLoader_Mods_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsExternalForce_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SatisfactoryModLoader_Mods_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsExternalForce_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_SatisfactoryModLoader_Mods_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsExternalForce_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SatisfactoryModLoader_Mods_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsExternalForce_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
