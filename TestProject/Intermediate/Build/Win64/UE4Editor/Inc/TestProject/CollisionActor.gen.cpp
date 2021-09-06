// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/CollisionActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollisionActor() {}
// Cross Module References
	TESTPROJECT_API UClass* Z_Construct_UClass_UCollisionActor_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_UCollisionActor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TestProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void UCollisionActor::StaticRegisterNativesUCollisionActor()
	{
	}
	UClass* Z_Construct_UClass_UCollisionActor_NoRegister()
	{
		return UCollisionActor::StaticClass();
	}
	struct Z_Construct_UClass_UCollisionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollisionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CollisionActor.h" },
		{ "ModuleRelativePath", "CollisionActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionActor_Statics::NewProp_BoxMesh_MetaData[] = {
		{ "Category", "CollisionActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CollisionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionActor_Statics::NewProp_BoxMesh = { "BoxMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollisionActor, BoxMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCollisionActor_Statics::NewProp_BoxMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionActor_Statics::NewProp_BoxMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollisionActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionActor_Statics::NewProp_BoxMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollisionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollisionActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCollisionActor_Statics::ClassParams = {
		&UCollisionActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCollisionActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionActor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCollisionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCollisionActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCollisionActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCollisionActor, 1227155192);
	template<> TESTPROJECT_API UClass* StaticClass<UCollisionActor>()
	{
		return UCollisionActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCollisionActor(Z_Construct_UClass_UCollisionActor, &UCollisionActor::StaticClass, TEXT("/Script/TestProject"), TEXT("UCollisionActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollisionActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
