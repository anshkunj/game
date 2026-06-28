#pragma once
#include "../CoreMinimal.h"
#include <iostream>
class UEngine {
public:
    void AddOnScreenDebugMessage(int Key, float Duration, FColor Color, const char* Message) {
        std::cout << "\n========================================\n";
        std::cout << "[PIXEL STREAMING SCREEN]: " << Message << "\n";
        std::cout << "========================================\n";
    }
};
extern UEngine* GEngine;
