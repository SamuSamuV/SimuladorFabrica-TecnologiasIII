#include "FactoryUI.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UFactoryUI::UpdateLineUI(int32 LineID, float Efficiency, float Resources, EProductionState State)
{
	float EffPercent = Efficiency / 100.0f;
	float ResPercent = Resources / 100.0f;

	FText StateText;
	FSlateColor StateColor;

	switch (State)
	{
	case EProductionState::Operational:
		StateText = FText::FromString("OPERATIVO");
		StateColor = FSlateColor(FLinearColor::Green);
		break;
	case EProductionState::Warning:
		StateText = FText::FromString("ADVERTENCIA");
		StateColor = FSlateColor(FLinearColor::Yellow);
		break;
	case EProductionState::Critical:
		StateText = FText::FromString("CRITICO");
		StateColor = FSlateColor(FLinearColor::Red);
		break;
	}

	if (LineID == 1)
	{
		if (Bar_Eff_A) Bar_Eff_A->SetPercent(EffPercent);
		if (Bar_Res_A) Bar_Res_A->SetPercent(ResPercent);
		if (Text_State_A)
		{
			Text_State_A->SetText(StateText);
			Text_State_A->SetColorAndOpacity(StateColor);
		}
	}
	else if (LineID == 2)
	{
		if (Bar_Eff_B) Bar_Eff_B->SetPercent(EffPercent);
		if (Bar_Res_B) Bar_Res_B->SetPercent(ResPercent);
		if (Text_State_B)
		{
			Text_State_B->SetText(StateText);
			Text_State_B->SetColorAndOpacity(StateColor);
		}
	}
	else if (LineID == 3)
	{
		if (Bar_Eff_C) Bar_Eff_C->SetPercent(EffPercent);
		if (Bar_Res_C) Bar_Res_C->SetPercent(ResPercent);
		if (Text_State_C)
		{
			Text_State_C->SetText(StateText);
			Text_State_C->SetColorAndOpacity(StateColor);
		}
	}
}