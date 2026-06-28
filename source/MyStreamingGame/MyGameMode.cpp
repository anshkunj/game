#include "MyGameMode.h"
#include "Engine/Engine.h"
#include <iostream>

// Player Data
struct FPlayerState {
    int Health = 100;
    bool bIsAlive = true;
};

// Enemy AI System
class AEnemyAI {
public:
    FString EnemyName = "Goblin_Brute";
    int DamagePower = 30;

    // Enemy Attack Function (Jaise backend function)
    void AttackPlayer(FPlayerState& TargetPlayer) {
        if (!TargetPlayer.bIsAlive) return;

        std::cout << "\n[👾 ENEMY SPOTTED]: " << EnemyName << " is attacking!\n";
        TargetPlayer.Health -= DamagePower;
        std::cout << "[💥 HIT]: Player took " << DamagePower << " damage. Current Health: " << TargetPlayer.Health << "\n";

        if (TargetPlayer.Health <= 0) {
            TargetPlayer.Health = 0;
            TargetPlayer.bIsAlive = false;
            std::cout << "[💀 GAME OVER]: Player has been eliminated by " << EnemyName << "!\n";
        }
    }
};

void AMyGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		std::cout << "=== GAME BACKEND SIMULATION STARTED ===\n";

		FPlayerState MyPlayer;
		AEnemyAI EnemyBot;

		// Game Loop ke andar events simulate ho rahe hain (Jaise real-time frame updating)
		EnemyBot.AttackPlayer(MyPlayer); // Pehla Attack
		EnemyBot.AttackPlayer(MyPlayer); // Dusra Attack
		EnemyBot.AttackPlayer(MyPlayer); // Tisra Attack
		EnemyBot.AttackPlayer(MyPlayer); // Chautha Attack (Isme Player khatam ho jana chahiye)
	}
}
