#include "MyPlayerControllerCPP.h"
#include "Engine/Engine.h"

AMyPlayerControllerCPP::AMyPlayerControllerCPP()
{
    // Constructor logic

    // Bind MoveRight function to input
    InputComponent->BindAxis("IA_Move", this, &AMyPlayerControllerCPP::MoveRight);
}

void AMyPlayerControllerCPP::SetupInputComponent()
{
    Super::SetupInputComponent();

    // Bind MoveRight function to input
    InputComponent->BindAxis("IA_Move", this, &AMyPlayerControllerCPP::MoveRight);
}

void AMyPlayerControllerCPP::MoveRight(float Value)
{
    // Handle movement based on the input axis value
    FVector Movement = FVector(Value, 0.f, 0.f);
    AddInputVector(Movement);
}
