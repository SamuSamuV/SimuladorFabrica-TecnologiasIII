#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ProductionLine.h" 
#include "FactoryUI.generated.h"

class UProgressBar;
class UTextBlock;

UCLASS()
class SIMULADORFABRICA_API UFactoryUI : public UUserWidget
{
	GENERATED_BODY()

public:
	// Función para actualizar las barras y textos
	void UpdateLineUI(int32 LineID, float Efficiency, float Resources, EProductionState State);

protected:
	// --- LÍNEA A (ID 1) ---
	UPROPERTY(meta = (BindWidget))
	UProgressBar* Bar_Eff_A;

	UPROPERTY(meta = (BindWidget))
	UProgressBar* Bar_Res_A;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_State_A;

	// --- LÍNEA B (ID 2) ---
	UPROPERTY(meta = (BindWidget))
	UProgressBar* Bar_Eff_B;

	UPROPERTY(meta = (BindWidget))
	UProgressBar* Bar_Res_B;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_State_B;

	// --- LÍNEA C (ID 3) ---
	UPROPERTY(meta = (BindWidget))
	UProgressBar* Bar_Eff_C;

	UPROPERTY(meta = (BindWidget))
	UProgressBar* Bar_Res_C;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_State_C;
};