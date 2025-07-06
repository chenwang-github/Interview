/**
 * @file Main.cpp
 * @brief Demonstrates usage of the Singleton class.
 */
#include "Singleton.h"
#include <iostream>

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    std::cout << "Address of s1: " << s1 << std::endl;
    std::cout << "Address of s2: " << s2 << std::endl;

    if (s1 == s2) {
        std::cout << "Singleton works: Both pointers are the same instance." << std::endl;
    } else {
        std::cout << "Singleton failed: Different instances exist!" << std::endl;
    }

    return 0;
}
