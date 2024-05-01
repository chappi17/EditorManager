// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetActionUtility.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstanceConstant.h"
	#include "Materials/MaterialFunction.h"
#include "Particles/ParticleSystem.h"	
#include "Sound/SoundCue.h"
#include "Sound/SoundWave.h"
#include "Engine/Texture.h"
#include "Blueprint/UserWidget.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/DataTable.h"
#include "NiagaraSystem.h"
#include "NiagaraEmitter.h"	
#include "Engine/Level.h"

#include "Animation/AnimBlueprint.h"
#include "Animation/AnimMontage.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "Animation/BlendSpace.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Retargeter/IKRetargeter.h"
#include "Rig/IKRigDefinition.h"

#include "BehaviorTree/BlackboardData.h"
#include "LevelSequence.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "AssetActionEditor.generated.h"

/**
 * 
 */
UCLASS()
class EDITORMANAGER_API UAssetActionEditor : public UAssetActionUtility
{
	GENERATED_BODY()

public:

	// Editor에서 호출할 수 있는 함수 제작
	UFUNCTION(CallInEditor)
	void ChangePrefix();

private:
	// prefix를 식별할 수 있는 TMap 소환(키-값 연결 데이터구조)
	TMap<UClass*, FString> prefixDefinition
		=
	{
		{UBlueprint::StaticClass(), TEXT("BP_")},
		{UStaticMesh::StaticClass(),TEXT("SM_")},
		{UMaterial::StaticClass(), TEXT("M_")},
		{UMaterialInstanceConstant::StaticClass(),TEXT("MI_")},
		{UMaterialFunction::StaticClass(), TEXT("MF_")},
		{UParticleSystem::StaticClass(), TEXT("PS_")},
		{USoundCue::StaticClass(), TEXT("SC_")},
		{USoundWave::StaticClass(), TEXT("SW_")},
		{UTexture::StaticClass(), TEXT("T_")},
		{UTexture2D::StaticClass(), TEXT("T2D_")},
		{UUserWidget::StaticClass(), TEXT("WBP_")},
		{USkeletalMeshComponent::StaticClass(), TEXT("SK_")},
		{UDataTable::StaticClass(), TEXT("DT_")},
		{UNiagaraSystem::StaticClass(), TEXT("NS_")},
		{UNiagaraEmitter::StaticClass(), TEXT("NE_")},
		{UWorld::StaticClass(), TEXT("LV_")},
		{UAnimBlueprint::StaticClass(), TEXT("ABP_")},
		{UAnimMontage::StaticClass(), TEXT("AM_")},
		{UInputAction::StaticClass(), TEXT("IA_")},
		{UInputMappingContext::StaticClass(), TEXT("IMC_")},
		{UBlendSpace::StaticClass(), TEXT("BS_")},
		{UBehaviorTree::StaticClass(), TEXT("BT_")},
		{UIKRetargeter::StaticClass(), TEXT("RTG_")},
		{UIKRigDefinition::StaticClass(), TEXT("IK_")},
		{UBlackboardData::StaticClass(), TEXT("BBD_")},
		{ULevelSequence::StaticClass(), TEXT("LS_")},
		{UPhysicalMaterial::StaticClass(), TEXT("PM_")},


	};

	
};
