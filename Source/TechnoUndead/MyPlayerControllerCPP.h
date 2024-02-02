#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerControllerCPP.generated.h"

/**
 * 
 */
UCLASS()
class TECHNOUNDEAD_API AMyPlayerControllerCPP : public APlayerController
{
	GENERATED_BODY()

public:
    AMyPlayerControllerCPP();

protected:
    virtual void SetupInputComponent() override;
    void MoveRight(float Value);
};
