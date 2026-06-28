#include "Engine/Engine.h"
UEngine UEngineMock;
UEngine* GEngine = &UEngineMock;

// Emulator ko chalane ke liye main entry point
#include "GameFramework/GameModeBase.h"

// Hamare specific game mode class ko yahan declare kar dete hain takia compiler ko pata chale
class AMyGameMode : public AGameModeBase {
public:
    virtual void BeginPlay();
};

int main() {
    AMyGameMode GameModeInstance;
    GameModeInstance.BeginPlay();
    return 0;
}
