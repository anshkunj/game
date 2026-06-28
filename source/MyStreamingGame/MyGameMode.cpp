#include "MyGameMode.h"
#include "Engine/Engine.h"

void AMyGameMode::BeginPlay()
{
	Super::BeginPlay();

	// Yeh message aapko browser screen par green color mein dikhega
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Hello World from Android Pixel Streaming!"));
	}
}
