#pragma once
#include <iostream>
class AGameModeBase {
protected:
    virtual void BeginPlay() {
        std::cout << "[Engine] Base GameMode Started." << std::endl;
    }
};
