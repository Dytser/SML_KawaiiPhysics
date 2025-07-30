// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/KawaiiPhysicsLimitsDataAsset.h"
#include "../../Source/Runtime/Engine/Public/Animation/BoneReference.h"
#include "KawaiiPhysics/Public/AnimNode_KawaiiPhysics.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsLimitsDataAsset() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset();
	KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FBoxLimit();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FBoxLimitData();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimit();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimitData();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitDataBase();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimit();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimitData();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimit();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimitData();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionLimitDataBase;
class UScriptStruct* FCollisionLimitDataBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionLimitDataBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionLimitDataBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionLimitDataBase, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("CollisionLimitDataBase"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionLimitDataBase.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FCollisionLimitDataBase>()
{
	return FCollisionLimitDataBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivingBoneReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingBoneReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivingBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DrivingBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Deprecated\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionLimitDataBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneReference_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneReference = { "DrivingBoneReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitDataBase, DrivingBoneReference), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneReference_MetaData), Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneReference_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneName_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneName = { "DrivingBoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitDataBase, DrivingBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneName_MetaData), Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetLocation_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetLocation = { "OffsetLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitDataBase, OffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetLocation_MetaData), Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetRotation_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitDataBase, OffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetRotation_MetaData), Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Location_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitDataBase, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Location_MetaData), Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Rotation_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitDataBase, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Rotation_MetaData), Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Guid_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionLimitDataBase, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Guid_MetaData), Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Guid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Guid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		&NewStructOps,
		"CollisionLimitDataBase",
		Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::PropPointers),
		sizeof(FCollisionLimitDataBase),
		alignof(FCollisionLimitDataBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitDataBase()
	{
		if (!Z_Registration_Info_UScriptStruct_CollisionLimitDataBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionLimitDataBase.InnerSingleton, Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollisionLimitDataBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSphericalLimitData>() == std::is_polymorphic<FCollisionLimitDataBase>(), "USTRUCT FSphericalLimitData cannot be polymorphic unless super FCollisionLimitDataBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SphericalLimitData;
class UScriptStruct* FSphericalLimitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SphericalLimitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SphericalLimitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphericalLimitData, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("SphericalLimitData"));
	}
	return Z_Registration_Info_UScriptStruct_SphericalLimitData.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FSphericalLimitData>()
{
	return FSphericalLimitData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSphericalLimitData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LimitType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LimitType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimitData_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Deprecated\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphericalLimitData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Radius of the sphere */" },
#endif
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius of the sphere" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSphericalLimitData, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius_MetaData), Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to lock bodies inside or outside of the sphere */" },
#endif
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to lock bodies inside or outside of the sphere" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType = { "LimitType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSphericalLimitData, LimitType), Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_MetaData), Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_MetaData) }; // 4205351093
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSphericalLimitData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitDataBase,
		&NewStructOps,
		"SphericalLimitData",
		Z_Construct_UScriptStruct_FSphericalLimitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::PropPointers),
		sizeof(FSphericalLimitData),
		alignof(FSphericalLimitData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSphericalLimitData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimitData()
	{
		if (!Z_Registration_Info_UScriptStruct_SphericalLimitData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SphericalLimitData.InnerSingleton, Z_Construct_UScriptStruct_FSphericalLimitData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SphericalLimitData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCapsuleLimitData>() == std::is_polymorphic<FCollisionLimitDataBase>(), "USTRUCT FCapsuleLimitData cannot be polymorphic unless super FCollisionLimitDataBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CapsuleLimitData;
class UScriptStruct* FCapsuleLimitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CapsuleLimitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CapsuleLimitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapsuleLimitData, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("CapsuleLimitData"));
	}
	return Z_Registration_Info_UScriptStruct_CapsuleLimitData.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FCapsuleLimitData>()
{
	return FCapsuleLimitData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCapsuleLimitData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Deprecated\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapsuleLimitData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCapsuleLimitData, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius_MetaData), Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCapsuleLimitData, Length), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length_MetaData), Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitDataBase,
		&NewStructOps,
		"CapsuleLimitData",
		Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers),
		sizeof(FCapsuleLimitData),
		alignof(FCapsuleLimitData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimitData()
	{
		if (!Z_Registration_Info_UScriptStruct_CapsuleLimitData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CapsuleLimitData.InnerSingleton, Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CapsuleLimitData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FBoxLimitData>() == std::is_polymorphic<FCollisionLimitDataBase>(), "USTRUCT FBoxLimitData cannot be polymorphic unless super FCollisionLimitDataBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoxLimitData;
class UScriptStruct* FBoxLimitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoxLimitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoxLimitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoxLimitData, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("BoxLimitData"));
	}
	return Z_Registration_Info_UScriptStruct_BoxLimitData.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FBoxLimitData>()
{
	return FBoxLimitData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoxLimitData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxLimitData_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Deprecated\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FBoxLimitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoxLimitData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxLimitData_Statics::NewProp_Extent_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxLimitData_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoxLimitData, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxLimitData_Statics::NewProp_Extent_MetaData), Z_Construct_UScriptStruct_FBoxLimitData_Statics::NewProp_Extent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoxLimitData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxLimitData_Statics::NewProp_Extent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoxLimitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitDataBase,
		&NewStructOps,
		"BoxLimitData",
		Z_Construct_UScriptStruct_FBoxLimitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxLimitData_Statics::PropPointers),
		sizeof(FBoxLimitData),
		alignof(FBoxLimitData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxLimitData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoxLimitData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxLimitData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBoxLimitData()
	{
		if (!Z_Registration_Info_UScriptStruct_BoxLimitData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoxLimitData.InnerSingleton, Z_Construct_UScriptStruct_FBoxLimitData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoxLimitData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPlanarLimitData>() == std::is_polymorphic<FCollisionLimitDataBase>(), "USTRUCT FPlanarLimitData cannot be polymorphic unless super FCollisionLimitDataBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlanarLimitData;
class UScriptStruct* FPlanarLimitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlanarLimitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlanarLimitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlanarLimitData, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("PlanarLimitData"));
	}
	return Z_Registration_Info_UScriptStruct_PlanarLimitData.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FPlanarLimitData>()
{
	return FPlanarLimitData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlanarLimitData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Plane_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Plane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlanarLimitData_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Deprecated\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlanarLimitData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlanarLimitData, Plane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane_MetaData), Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlanarLimitData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlanarLimitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitDataBase,
		&NewStructOps,
		"PlanarLimitData",
		Z_Construct_UScriptStruct_FPlanarLimitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::PropPointers),
		sizeof(FPlanarLimitData),
		alignof(FPlanarLimitData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlanarLimitData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimitData()
	{
		if (!Z_Registration_Info_UScriptStruct_PlanarLimitData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlanarLimitData.InnerSingleton, Z_Construct_UScriptStruct_FPlanarLimitData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlanarLimitData.InnerSingleton;
	}
	void UKawaiiPhysicsLimitsDataAsset::StaticRegisterNativesUKawaiiPhysicsLimitsDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKawaiiPhysicsLimitsDataAsset);
	UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister()
	{
		return UKawaiiPhysicsLimitsDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphericalLimitsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphericalLimitsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SphericalLimitsData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleLimitsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleLimitsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CapsuleLimitsData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxLimitsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxLimitsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoxLimitsData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlanarLimitsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanarLimitsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlanarLimitsData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphericalLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphericalLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SphericalLimits;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CapsuleLimits;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoxLimits;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlanarLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanarLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlanarLimits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "KawaiiPhysicsLimitsDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0014000800000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_Skeleton_MetaData), Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_Skeleton_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData_Inner = { "SphericalLimitsData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSphericalLimitData, METADATA_PARAMS(0, nullptr) }; // 2000682336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Deprecated\n" },
#endif
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData = { "SphericalLimitsData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, SphericalLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData_MetaData), Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData_MetaData) }; // 2000682336
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData_Inner = { "CapsuleLimitsData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCapsuleLimitData, METADATA_PARAMS(0, nullptr) }; // 3592058718
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData = { "CapsuleLimitsData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, CapsuleLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData_MetaData), Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData_MetaData) }; // 3592058718
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimitsData_Inner = { "BoxLimitsData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoxLimitData, METADATA_PARAMS(0, nullptr) }; // 556191809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimitsData_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimitsData = { "BoxLimitsData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, BoxLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimitsData_MetaData), Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimitsData_MetaData) }; // 556191809
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData_Inner = { "PlanarLimitsData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlanarLimitData, METADATA_PARAMS(0, nullptr) }; // 3888538555
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData = { "PlanarLimitsData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, PlanarLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData_MetaData), Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData_MetaData) }; // 3888538555
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_Inner = { "SphericalLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSphericalLimit, METADATA_PARAMS(0, nullptr) }; // 1532037479
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_MetaData[] = {
		{ "Category", "Spherical Limits" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits = { "SphericalLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, SphericalLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_MetaData), Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_MetaData) }; // 1532037479
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_Inner = { "CapsuleLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCapsuleLimit, METADATA_PARAMS(0, nullptr) }; // 3049493938
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_MetaData[] = {
		{ "Category", "Capsule Limits" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits = { "CapsuleLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, CapsuleLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_MetaData), Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_MetaData) }; // 3049493938
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimits_Inner = { "BoxLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoxLimit, METADATA_PARAMS(0, nullptr) }; // 38802747
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimits_MetaData[] = {
		{ "Category", "Box Limits" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimits = { "BoxLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, BoxLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimits_MetaData), Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimits_MetaData) }; // 38802747
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_Inner = { "PlanarLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlanarLimit, METADATA_PARAMS(0, nullptr) }; // 384092667
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_MetaData[] = {
		{ "Category", "Planar Limits" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits = { "PlanarLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, PlanarLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_MetaData), Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_MetaData) }; // 384092667
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimitsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimitsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_BoxLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister, (int32)VTABLE_OFFSET(UKawaiiPhysicsLimitsDataAsset, IBoneReferenceSkeletonProvider), false },  // 307433809
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKawaiiPhysicsLimitsDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::ClassParams = {
		&UKawaiiPhysicsLimitsDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset()
	{
		if (!Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.OuterSingleton, Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.OuterSingleton;
	}
	template<> KAWAIIPHYSICS_API UClass* StaticClass<UKawaiiPhysicsLimitsDataAsset>()
	{
		return UKawaiiPhysicsLimitsDataAsset::StaticClass();
	}
	UKawaiiPhysicsLimitsDataAsset::UKawaiiPhysicsLimitsDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKawaiiPhysicsLimitsDataAsset);
	UKawaiiPhysicsLimitsDataAsset::~UKawaiiPhysicsLimitsDataAsset() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FARCHIVE_SERIALIZER(UKawaiiPhysicsLimitsDataAsset)
#endif
	struct Z_CompiledInDeferFile_FID_SatisfactoryModLoader_Mods_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SatisfactoryModLoader_Mods_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ScriptStructInfo[] = {
		{ FCollisionLimitDataBase::StaticStruct, Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewStructOps, TEXT("CollisionLimitDataBase"), &Z_Registration_Info_UScriptStruct_CollisionLimitDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionLimitDataBase), 1061246198U) },
		{ FSphericalLimitData::StaticStruct, Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewStructOps, TEXT("SphericalLimitData"), &Z_Registration_Info_UScriptStruct_SphericalLimitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSphericalLimitData), 2000682336U) },
		{ FCapsuleLimitData::StaticStruct, Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewStructOps, TEXT("CapsuleLimitData"), &Z_Registration_Info_UScriptStruct_CapsuleLimitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCapsuleLimitData), 3592058718U) },
		{ FBoxLimitData::StaticStruct, Z_Construct_UScriptStruct_FBoxLimitData_Statics::NewStructOps, TEXT("BoxLimitData"), &Z_Registration_Info_UScriptStruct_BoxLimitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoxLimitData), 556191809U) },
		{ FPlanarLimitData::StaticStruct, Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewStructOps, TEXT("PlanarLimitData"), &Z_Registration_Info_UScriptStruct_PlanarLimitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlanarLimitData), 3888538555U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SatisfactoryModLoader_Mods_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset, UKawaiiPhysicsLimitsDataAsset::StaticClass, TEXT("UKawaiiPhysicsLimitsDataAsset"), &Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKawaiiPhysicsLimitsDataAsset), 386586571U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SatisfactoryModLoader_Mods_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_44257939(TEXT("/Script/KawaiiPhysics"),
		Z_CompiledInDeferFile_FID_SatisfactoryModLoader_Mods_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SatisfactoryModLoader_Mods_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SatisfactoryModLoader_Mods_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SatisfactoryModLoader_Mods_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
