// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorManager/Public/AssetActionEditor/AssetActionEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetActionEditor() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UAssetActionUtility();
EDITORMANAGER_API UClass* Z_Construct_UClass_UAssetActionEditor();
EDITORMANAGER_API UClass* Z_Construct_UClass_UAssetActionEditor_NoRegister();
UPackage* Z_Construct_UPackage__Script_EditorManager();
// End Cross Module References

// Begin Class UAssetActionEditor Function ChangePrefix
struct Z_Construct_UFunction_UAssetActionEditor_ChangePrefix_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Editor\xec\x97\x90\xec\x84\x9c \xed\x98\xb8\xec\xb6\x9c\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98 \xec\xa0\x9c\xec\x9e\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/AssetActionEditor/AssetActionEditor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editor\xec\x97\x90\xec\x84\x9c \xed\x98\xb8\xec\xb6\x9c\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98 \xec\xa0\x9c\xec\x9e\x91" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetActionEditor_ChangePrefix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetActionEditor, nullptr, "ChangePrefix", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetActionEditor_ChangePrefix_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetActionEditor_ChangePrefix_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAssetActionEditor_ChangePrefix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetActionEditor_ChangePrefix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetActionEditor::execChangePrefix)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangePrefix();
	P_NATIVE_END;
}
// End Class UAssetActionEditor Function ChangePrefix

// Begin Class UAssetActionEditor
void UAssetActionEditor::StaticRegisterNativesUAssetActionEditor()
{
	UClass* Class = UAssetActionEditor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangePrefix", &UAssetActionEditor::execChangePrefix },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetActionEditor);
UClass* Z_Construct_UClass_UAssetActionEditor_NoRegister()
{
	return UAssetActionEditor::StaticClass();
}
struct Z_Construct_UClass_UAssetActionEditor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "AssetActionEditor/AssetActionEditor.h" },
		{ "ModuleRelativePath", "Public/AssetActionEditor/AssetActionEditor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetActionEditor_ChangePrefix, "ChangePrefix" }, // 2045093758
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetActionEditor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetActionEditor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetActionUtility,
	(UObject* (*)())Z_Construct_UPackage__Script_EditorManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetActionEditor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetActionEditor_Statics::ClassParams = {
	&UAssetActionEditor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetActionEditor_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetActionEditor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetActionEditor()
{
	if (!Z_Registration_Info_UClass_UAssetActionEditor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetActionEditor.OuterSingleton, Z_Construct_UClass_UAssetActionEditor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetActionEditor.OuterSingleton;
}
template<> EDITORMANAGER_API UClass* StaticClass<UAssetActionEditor>()
{
	return UAssetActionEditor::StaticClass();
}
UAssetActionEditor::UAssetActionEditor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetActionEditor);
UAssetActionEditor::~UAssetActionEditor() {}
// End Class UAssetActionEditor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Test5_4_Plugins_EditorManager_Source_EditorManager_Public_AssetActionEditor_AssetActionEditor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetActionEditor, UAssetActionEditor::StaticClass, TEXT("UAssetActionEditor"), &Z_Registration_Info_UClass_UAssetActionEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetActionEditor), 4285766162U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test5_4_Plugins_EditorManager_Source_EditorManager_Public_AssetActionEditor_AssetActionEditor_h_1096726858(TEXT("/Script/EditorManager"),
	Z_CompiledInDeferFile_FID_Test5_4_Plugins_EditorManager_Source_EditorManager_Public_AssetActionEditor_AssetActionEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test5_4_Plugins_EditorManager_Source_EditorManager_Public_AssetActionEditor_AssetActionEditor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
