#include "ProductionLine.h"
#include "Async/Async.h"
#include "Math/UnrealMathUtility.h"

AProductionLine::AProductionLine()
{
	PrimaryActorTick.bCanEverTick = false;

	LineID = 1;
	Efficiency = 100.0f;
	Resources = 100.0f;
	CurrentState = EProductionState::Operational;
	bIsRunning = false;
}

void AProductionLine::BeginPlay()
{
	Super::BeginPlay();
	StartSimulation();
}

void AProductionLine::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// Detenemos el hilo al destruir el actor o cerrar el juego
	bIsRunning = false;
	Super::EndPlay(EndPlayReason);
}

void AProductionLine::StartSimulation()
{
	bIsRunning = true;

	// Multithreading: Hilo de fondo para los cálculos
	Async(EAsyncExecution::ThreadPool, [this]()
		{
			while (bIsRunning)
			{
				// Esperamos 1 segundo
				FPlatformProcess::Sleep(1.0f);

				// Modificamos valores aleatoriamente
				float EffChange = FMath::RandRange(-5.0f, 5.0f);
				float ResChange = FMath::RandRange(-5.0f, 5.0f);

				// Limitamos entre 0 y 100
				Efficiency = FMath::Clamp(Efficiency + EffChange, 0.0f, 100.0f);
				Resources = FMath::Clamp(Resources + ResChange, 0.0f, 100.0f);

				// Evaluamos el nuevo estado
				CurrentState = EvaluateState(Efficiency, Resources);

				// Enviamos la notificación de vuelta al Hilo Principal
				Async(EAsyncExecution::TaskGraphMainThread, [this, CapturedEff = Efficiency, CapturedRes = Resources, CapturedState = CurrentState]()
					{
						if (IsValid(this))
						{
							OnStateChanged.Broadcast(LineID, CapturedEff, CapturedRes, CapturedState);
						}
					});
			}
		});
}

EProductionState AProductionLine::EvaluateState(float InEfficiency, float InResources)
{
	if (InEfficiency < 50.0f || InResources < 50.0f)
	{
		return EProductionState::Critical;
	}
	else if (InEfficiency >= 75.0f && InResources >= 75.0f)
	{
		return EProductionState::Operational;
	}
	else
	{
		return EProductionState::Warning;
	}
}

void AProductionLine::ResetLine()
{
	// Restauramos los valores a 80 como pide el documento
	Efficiency = 80.0f;
	Resources = 80.0f;

	// Dejamos constancia en el Log interno de Unreal
	UE_LOG(LogTemp, Warning, TEXT("Intervención del usuario: Línea %d restablecida a estado Operativo (80/80)."), LineID);
}