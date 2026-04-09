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

	// Creamos la Interfaz si hemos asignado la clase en el editor
	if (FactoryUIClass)
	{
		FactoryUIInstance = CreateWidget<UFactoryUI>(GetWorld(), FactoryUIClass);
		if (FactoryUIInstance)
		{
			FactoryUIInstance->AddToViewport();
		}
	}

	// Creamos las 3 líneas de producción
	LineA = CreateProductionLine(1);
	LineB = CreateProductionLine(2);
	LineC = CreateProductionLine(3);
}

AProductionLine* AFactoryManager::CreateProductionLine(int32 InLineID)
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;

	AProductionLine* NewLine = GetWorld()->SpawnActor<AProductionLine>(AProductionLine::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);

	if (NewLine)
	{
		// Nos suscribimos al delegado
		NewLine->OnStateChanged.AddDynamic(this, &AFactoryManager::OnLineStateChanged);

		// Un pequeño truco rápido para forzar el ID por código si hace falta:
		// *(En un proyecto real, usaríamos un Setter)*
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
	// Mandamos los datos actualizados a la interfaz
	if (FactoryUIInstance)
	{
		FactoryUIInstance->UpdateLineUI(LineID, Efficiency, Resources, NewState);
	}
}