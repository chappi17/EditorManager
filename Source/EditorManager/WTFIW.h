#pragma once

#include "Misc/MessageDialog.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Framework/Notifications/NotificationManager.h"

//AddOnScreenDebugMessage를 다양한 데이터형으로 바로바로 출력해서 볼 수있도록 돕는 헤더

template<typename T>
static void Print(const T& Message, const FColor& Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, Color, Message);
	}
}

template<>
void Print<FRotator>(const FRotator& InValue, const FColor& Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, Color, InValue.ToString());
	}
}

template<>
void Print<FTransform>(const FTransform& InValue, const FColor& Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, Color, InValue.ToString());
	}
}

template<>
void Print<FVector>(const FVector& InValue, const FColor& Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, Color, InValue.ToString());
	}
}

template<>
void Print<UClass>(const UClass& InValue, const FColor& Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, Color, InValue.GetName());
	}

}

static void Log(const FString& Message)
{
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Message);
}



EAppReturnType::Type ShowMsgDialog(EAppMsgType::Type MsgType, const FString& Msg, bool bShowMsgAsWarning = true)
{
	if (bShowMsgAsWarning)
	{
		FText MsgTitle = FText::FromString(TEXT("Warning"));
		return 	FMessageDialog::Open(MsgType, FText::FromString(Msg), MsgTitle);
	}
	else
	{
		return 	FMessageDialog::Open(MsgType, FText::FromString(Msg));
	}
}

void ShowNotifyInfo(const FString& Msg)
{
	// 들어온 메세지 NotificationInfo에 저장
	FNotificationInfo NotifyInfo(FText::FromString(Msg));

	// 설정
	NotifyInfo.bUseLargeFont = true;
	NotifyInfo.FadeOutDuration = 5.f;

	// SlateNotifucationManager에서 추가하기 
	FSlateNotificationManager::Get().AddNotification(NotifyInfo);
}
