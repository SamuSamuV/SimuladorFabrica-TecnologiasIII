#include "FactoryManager.h"
#include "Engine/World.h"
#include "Blueprint/UserWidget.h"

AFactoryManager::AFactoryManager()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AFactoryManager::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PC = GetWorld()->GetFirstPlayerController();

	if (PC && FactoryUIClass)
	{
		FactoryUIInstance = CreateWidget<UFactoryUI>(PC, FactoryUIClass);
		if (FactoryUIInstance)
		{
			FactoryUIInstance->AddToViewport();

			FactoryUIInstance->OnEmergencyRestart.AddDynamic(this, &AFactoryManager::HandleEmergencyRestart);
		}
	}

	LineA = CreateProductionLine(1);
	LineB = CreateProductionLine(2);
	LineC = CreateProductionLine(3);
}

void AFactoryManager::HandleEmergencyRestart(int32 LineIDToRestart)
{
	if (LineIDToRestart == 1 && LineA) LineA->ResetLine();
	else if (LineIDToRestart == 2 && LineB) LineB->ResetLine();
	else if (LineIDToRestart == 3 && LineC) LineC->ResetLine();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Cyan, FString::Printf(TEXT("¡LÍNEA %d SALVADA POR EL USUARIO!"), LineIDToRestart));
	}
}

AProductionLine* AFactoryManager::CreateProductionLine(int32 InLineID)
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;

	AProductionLine* NewLine = GetWorld()->SpawnActor<AProductionLine>(AProductionLine::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);

	if (NewLine)
	{
		NewLine->OnStateChanged.AddDynamic(this, &AFactoryManager::OnLineStateChanged);

		FProperty* LineIDProp = NewLine->GetClass()->FindPropertyByName(FName("LineID"));
		if (LineIDProp)
		{
			int32* IDPtr = LineIDProp->ContainerPtrToValuePtr<int32>(NewLine);
			if (IDPtr) *IDPtr = InLineID;
		}
	}

	return NewLine;
}

void AFactoryManager::OnLineStateChanged(int32 LineID, float Efficiency, float Resources, EProductionState NewState)
{
	if (FactoryUIInstance)
	{
		FactoryUIInstance->UpdateLineUI(LineID, Efficiency, Resources, NewState);
	}
}