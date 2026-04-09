#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <atomic>
#include "ProductionLine.generated.h"

UENUM(BlueprintType)
enum class EProductionState : uint8
{
	Operational	UMETA(DisplayName = "Operational"),
	Warning		UMETA(DisplayName = "Warning"),
	Critical	UMETA(DisplayName = "Critical")
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnProductionStateChanged, int32, LineID, float, Efficiency, float, Resources, EProductionState, NewState);


UCLASS()
class SIMULADORFABRICA_API AProductionLine : public AActor
{
	GENERATED_BODY()

public:
	AProductionLine();

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnProductionStateChanged OnStateChanged;

	void ResetLine();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// Identificador de la línea
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Production")
	int32 LineID;

	// Parámetros a simular (0 a 100)
	float Efficiency;
	float Resources;
	EProductionState CurrentState;

	// Variable para controlar el hilo secundario
	std::atomic<bool> bIsRunning;

	// Funciones de control
	void StartSimulation();
	EProductionState EvaluateState(float InEfficiency, float InResources);
};