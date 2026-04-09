#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProductionLine.h"
#include "FactoryUI.h" 
#include "FactoryManager.generated.h"

UCLASS()
class SIMULADORFABRICA_API AFactoryManager : public AActor
{
	GENERATED_BODY()

public:
	AFactoryManager();

protected:
	virtual void BeginPlay() override;

	// Referencias a las líneas
	UPROPERTY(VisibleAnywhere, Category = "Factory")
	AProductionLine* LineA;

	UPROPERTY(VisibleAnywhere, Category = "Factory")
	AProductionLine* LineB;

	UPROPERTY(VisibleAnywhere, Category = "Factory")
	AProductionLine* LineC;

	// Referencias a la UI
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UFactoryUI> FactoryUIClass;

	UPROPERTY()
	UFactoryUI* FactoryUIInstance;

	// Funciones del Gestor
	AProductionLine* CreateProductionLine(int32 InLineID);

	UFUNCTION()
	void OnLineStateChanged(int32 LineID, float Efficiency, float Resources, EProductionState NewState);

	UFUNCTION()
	void HandleEmergencyRestart(int32 LineIDToRestart);
};