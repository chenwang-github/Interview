/**
 * @file Main.cpp
 * @brief Test all operator overloads of CustomOperation class.
 */
#include "CustomOperation.h"
#include <iostream>

int main() {
    CustomOperation a(10), b(3);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "a + b = " << (a + b) << std::endl;
    std::cout << "a - b = " << (a - b) << std::endl;
    std::cout << "a * b = " << (a * b) << std::endl;
    std::cout << "a / b = " << (a / b) << std::endl;
    std::cout << "a % b = " << (a % b) << std::endl;
    a += b; std::cout << "a += b: " << a << std::endl;
    a -= b; std::cout << "a -= b: " << a << std::endl;
    a *= b; std::cout << "a *= b: " << a << std::endl;
    a /= b; std::cout << "a /= b: " << a << std::endl;
    a %= b; std::cout << "a %= b: " << a << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a++: " << a++ << ", after a++: " << a << std::endl;
    std::cout << "--a: " << --a << std::endl;
    std::cout << "a--: " << a-- << ", after a--: " << a << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "!a: " << (!a) << std::endl;
    std::cout << "a & b: " << (a & b) << std::endl;
    std::cout << "a | b: " << (a | b) << std::endl;
    std::cout << "a ^ b: " << (a ^ b) << std::endl;
    std::cout << "~a: " << (~a) << std::endl;
    std::cout << "a << 1: " << (a << 1) << std::endl;
    std::cout << "a >> 1: " << (a >> 1) << std::endl;
    std::cout << "a[0]: " << a[0] << std::endl;
    std::cout << "a(): " << a() << std::endl;
    std::cout << "Enter a value for b: ";
    std::cin >> b;
    std::cout << "You entered: " << b << std::endl;
    return 0;
}
