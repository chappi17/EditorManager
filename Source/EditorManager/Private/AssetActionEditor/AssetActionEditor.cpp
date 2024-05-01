// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetActionEditor/AssetActionEditor.h"
#include "EditorManager/GlobalDebugHeader.h"
#include "EditorUtilityLibrary.h"


void UAssetActionEditor::ChangePrefix()
{
	// 선택한 에셋 Object Array로 담기
	TArray<UObject*> SelectedObject = UEditorUtilityLibrary::GetSelectedAssets();
	uint32 Counter = 0;

	for (UObject* Choice : SelectedObject)
	{
		if (!Choice) return;
		FString prefix = Choice->GetClass()->GetName();
		Print(prefix, FColor::Green);

		//클래스 구분하고 담기
		FString* prefixdata = prefixDefinition.Find(Choice->GetClass());


		// 못찾거나 비어있으면 디버그 출력
		if (!prefixdata || prefixdata->IsEmpty())
		{
			ShowNotifyInfo(L"Failed To Find Prefix Class");
			return;
		}

		// 원래 이름에서
		FString OldName = Choice->GetName();
		// 앞부분이 prefix로 시작하면 넘어가기
		if (OldName.StartsWith(*prefixdata))
		{
			ShowNotifyInfo(L"Assets Has Already Prefix");
			continue;
		}
		
		// 원래 이름에 prefixDefinition이 들어있다면
		// 원래 있는건 지우기
		for (auto name : prefixDefinition)
		{
			if (OldName.Contains(name.Value))
			{
				OldName.RemoveFromStart(name.Value);
			}
		}

		// prefix + 새로운 이름
		FString  NewNameWithPrefix = *prefixdata + OldName;

		// 이름 재설정
		UEditorUtilityLibrary::RenameAsset(Choice, NewNameWithPrefix);
		// 재설정한 에셋의 이름 카운트 하기
		Counter++;
	}

	ShowNotifyInfo(L"Successfully Renamed " + FString::FromInt(Counter) + " Assets");
}
