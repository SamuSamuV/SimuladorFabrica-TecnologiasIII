#include "FactoryUI.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "TimerManager.h"

void UFactoryUI::NativeConstruct()
{
	Super::NativeConstruct();

	// Ocultar el panel de emergencia al inicio por seguridad
	if (Panel_Emergency)
	{
		Panel_Emergency->SetVisibility(ESlateVisibility::Hidden);
	}

	// Vincular la pulsación del botón de reinicio a nuestra función
	if (Btn_Restart)
	{
		Btn_Restart->OnClicked.AddDynamic(this, &UFactoryUI::OnRestartButtonClicked);
	}
}

void UFactoryUI::UpdateLineUI(int32 LineID, float Efficiency, float Resources, EProductionState State)
{
	float EffPercent = Efficiency / 100.0f;
	float ResPercent = Resources / 100.0f;

	FText StateText;
	FSlateColor StateColor;

	// Preparamos los textos y colores
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

	// Asignamos los valores a la línea correspondiente
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

	// Si el estado es critico y no estamos ya atendiendo una emergencia, mostramos el panel
	if (State == EProductionState::Critical && !bIsEmergencyActive)
	{
		ShowEmergencyPanel(LineID);
	}
}

void UFactoryUI::ShowEmergencyPanel(int32 CriticalLineID)
{
	bIsEmergencyActive = true;
	CurrentCriticalLine = CriticalLineID;

	if (Panel_Emergency && Text_EmergencyDesc)
	{
		Panel_Emergency->SetVisibility(ESlateVisibility::Visible);

		FString WarningText = FString::Printf(TEXT("¡ALERTA CRÍTICA EN LÍNEA %d!\nPulsa REINICIO antes de 10 segundos."), CriticalLineID);
		Text_EmergencyDesc->SetText(FText::FromString(WarningText));
	}

	// Arrancamos el temporizador de 10 segundos
	GetWorld()->GetTimerManager().SetTimer(EmergencyTimerHandle, this, &UFactoryUI::OnEmergencyTimeout, 10.0f, false);
}

void UFactoryUI::HideEmergencyPanel()
{
	bIsEmergencyActive = false;
	if (Panel_Emergency)
	{
		Panel_Emergency->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UFactoryUI::OnRestartButtonClicked()
{
	// Cancelamos el temporizador porque el usuario ha pulsado a tiempo
	GetWorld()->GetTimerManager().ClearTimer(EmergencyTimerHandle);

	// Avisamos al Gestor Central de que hay que curar esta línea específica
	OnEmergencyRestart.Broadcast(CurrentCriticalLine);

	// Ocultamos el panel visual
	HideEmergencyPanel();
}

void UFactoryUI::OnEmergencyTimeout()
{
	// El tiempo se ha agotado sin intervención del jugador
	HideEmergencyPanel();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("¡FALLO! No se intervino a tiempo en la línea %d."), CurrentCriticalLine));
		UE_LOG(LogTemp, Error, TEXT("Incidente registrado: Fallo en Línea %d por inactividad del usuario."), CurrentCriticalLine);
	}
}