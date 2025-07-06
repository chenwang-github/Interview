#pragma once
#include <iostream>
/**
 * @class CustomOperation
 * @brief Demonstrates operator overloading for a custom class in C++.
 */
class CustomOperation {
private:
    int value;
public:
    CustomOperation(int v = 0) : value(v) {}

    // Arithmetic operators
    CustomOperation operator+(const CustomOperation& rhs) const;
    CustomOperation operator-(const CustomOperation& rhs) const;
    CustomOperation operator*(const CustomOperation& rhs) const;
    CustomOperation operator/(const CustomOperation& rhs) const;
    CustomOperation operator%(const CustomOperation& rhs) const;

    // Compound assignment operators
    CustomOperation& operator+=(const CustomOperation& rhs);
    CustomOperation& operator-=(const CustomOperation& rhs);
    CustomOperation& operator*=(const CustomOperation& rhs);
    CustomOperation& operator/=(const CustomOperation& rhs);
    CustomOperation& operator%=(const CustomOperation& rhs);

    // Increment/Decrement
    CustomOperation& operator++();    // Prefix
    CustomOperation operator++(int);  // Postfix
    CustomOperation& operator--();
    CustomOperation operator--(int);

    // Comparison operators
    bool operator==(const CustomOperation& rhs) const;
    bool operator!=(const CustomOperation& rhs) const;
    bool operator<(const CustomOperation& rhs) const;
    bool operator<=(const CustomOperation& rhs) const;
    bool operator>(const CustomOperation& rhs) const;
    bool operator>=(const CustomOperation& rhs) const;

    // Logical not
    bool operator!() const;

    // Bitwise operators
    CustomOperation operator&(const CustomOperation& rhs) const;
    CustomOperation operator|(const CustomOperation& rhs) const;
    CustomOperation operator^(const CustomOperation& rhs) const;
    CustomOperation operator~() const;
    CustomOperation operator<<(int shift) const;
    CustomOperation operator>>(int shift) const;

    // Assignment
    CustomOperation& operator=(const CustomOperation& rhs);

    // Subscript (for demonstration, returns value for index 0)
    int operator[](int index) const;

    // Function call operator
    int operator()() const;

    // Stream operators
    friend std::ostream& operator<<(std::ostream& os, const CustomOperation& obj);
    friend std::istream& operator>>(std::istream& is, CustomOperation& obj);
};
