#include "Singleton.h"

// Initialize the static member
Singleton* Singleton::Instance = nullptr;

Singleton* Singleton::getInstance() {
    if (Instance == nullptr) {
        Instance = new Singleton();
    }
    return Instance;
}