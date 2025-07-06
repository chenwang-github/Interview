#pragma once
/**
 * @class Singleton
 * @brief Demonstrates the Singleton design pattern in C++.
 *
 * This class ensures only one instance exists and provides a global point of access to it.
 */
class Singleton {
private:
    static Singleton* Instance; ///< Pointer to the singleton instance
    Singleton() = default; ///< Private constructor
public:
    // Delete copy constructor and assignment operator to prevent copies
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    static Singleton* getInstance();
};

