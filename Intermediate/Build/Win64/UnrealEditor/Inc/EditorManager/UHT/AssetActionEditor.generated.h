// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetActionEditor/AssetActionEditor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDITORMANAGER_AssetActionEditor_generated_h
#error "AssetActionEditor.generated.h already included, missing '#pragma once' in AssetActionEditor.h"
#endif
#define EDITORMANAGER_AssetActionEditor_generated_h

#define FID_Test5_4_Plugins_EditorManager_Source_EditorManager_Public_AssetActionEditor_AssetActionEditor_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangePrefix);


#define FID_Test5_4_Plugins_EditorManager_Source_EditorManager_Public_AssetActionEditor_AssetActionEditor_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetActionEditor(); \
	friend struct Z_Construct_UClass_UAssetActionEditor_Statics; \
public: \
	DECLARE_CLASS(UAssetActionEditor, UAssetActionUtility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorManager"), NO_API) \
	DECLARE_SERIALIZER(UAssetActionEditor)


#define FID_Test5_4_Plugins_EditorManager_Source_EditorManager_Public_AssetActionEditor_AssetActionEditor_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetActionEditor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetActionEditor(UAssetActionEditor&&); \
	UAssetActionEditor(const UAssetActionEditor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetActionEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetActionEditor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetActionEditor) \
	NO_API virtual ~UAssetActionEditor();


#define FID_Test5_4_Plugins_EditorManager_Source_EditorManager_Public_AssetActionEditor_AssetActionEditor_h_38_PROLOG
#define FID_Test5_4_Plugins_EditorManager_Source_EditorManager_Public_AssetActionEditor_AssetActionEditor_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Test5_4_Plugins_EditorManager_Source_EditorManager_Public_AssetActionEditor_AssetActionEditor_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Test5_4_Plugins_EditorManager_Source_EditorManager_Public_AssetActionEditor_AssetActionEditor_h_41_INCLASS_NO_PURE_DECLS \
	FID_Test5_4_Plugins_EditorManager_Source_EditorManager_Public_AssetActionEditor_AssetActionEditor_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORMANAGER_API UClass* StaticClass<class UAssetActionEditor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Test5_4_Plugins_EditorManager_Source_EditorManager_Public_AssetActionEditor_AssetActionEditor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
