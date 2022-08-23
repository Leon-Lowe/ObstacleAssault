// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstacleAssault/MovingPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatform() {}
// Cross Module References
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister();
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AMovingPlatform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ObstacleAssault();
// End Cross Module References
	void AMovingPlatform::StaticRegisterNativesAMovingPlatform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlatform);
	UClass* Z_Construct_UClass_AMovingPlatform_NoRegister()
	{
		return AMovingPlatform::StaticClass();
	}
	struct Z_Construct_UClass_AMovingPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inputA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_inputA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inputB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_inputB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aPlusB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_aPlusB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inputFloatA_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_inputFloatA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inputFloatB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_inputFloatB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floatAPlusFloatB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_floatAPlusFloatB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ObstacleAssault,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatform.h" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputA_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputA = { "inputA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, inputA), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputB_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputB = { "inputB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, inputB), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_aPlusB_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_aPlusB = { "aPlusB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, aPlusB), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_aPlusB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_aPlusB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputFloatA_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputFloatA = { "inputFloatA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, inputFloatA), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputFloatA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputFloatA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputFloatB_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputFloatB = { "inputFloatB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, inputFloatB), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputFloatB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputFloatB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_floatAPlusFloatB_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_floatAPlusFloatB = { "floatAPlusFloatB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, floatAPlusFloatB), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_floatAPlusFloatB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_floatAPlusFloatB_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_aPlusB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputFloatA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_inputFloatB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_floatAPlusFloatB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatform_Statics::ClassParams = {
		&AMovingPlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovingPlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingPlatform()
	{
		if (!Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton, Z_Construct_UClass_AMovingPlatform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton;
	}
	template<> OBSTACLEASSAULT_API UClass* StaticClass<AMovingPlatform>()
	{
		return AMovingPlatform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform);
	struct Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatform, AMovingPlatform::StaticClass, TEXT("AMovingPlatform"), &Z_Registration_Info_UClass_AMovingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatform), 1950949841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_3005515564(TEXT("/Script/ObstacleAssault"),
		Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
