#include "CustomOperation.h"

// Arithmetic operators
CustomOperation CustomOperation::operator+(const CustomOperation& rhs) const { return CustomOperation(value + rhs.value); }
CustomOperation CustomOperation::operator-(const CustomOperation& rhs) const { return CustomOperation(value - rhs.value); }
CustomOperation CustomOperation::operator*(const CustomOperation& rhs) const { return CustomOperation(value * rhs.value); }
CustomOperation CustomOperation::operator/(const CustomOperation& rhs) const { return CustomOperation(value / rhs.value); }
CustomOperation CustomOperation::operator%(const CustomOperation& rhs) const { return CustomOperation(value % rhs.value); }

// Compound assignment
CustomOperation& CustomOperation::operator+=(const CustomOperation& rhs) { value += rhs.value; return *this; }
CustomOperation& CustomOperation::operator-=(const CustomOperation& rhs) { value -= rhs.value; return *this; }
CustomOperation& CustomOperation::operator*=(const CustomOperation& rhs) { value *= rhs.value; return *this; }
CustomOperation& CustomOperation::operator/=(const CustomOperation& rhs) { value /= rhs.value; return *this; }
CustomOperation& CustomOperation::operator%=(const CustomOperation& rhs) { value %= rhs.value; return *this; }

// Increment/Decrement
CustomOperation& CustomOperation::operator++() { ++value; return *this; }
CustomOperation CustomOperation::operator++(int) { CustomOperation tmp(*this); ++value; return tmp; }
CustomOperation& CustomOperation::operator--() { --value; return *this; }
CustomOperation CustomOperation::operator--(int) { CustomOperation tmp(*this); --value; return tmp; }

// Comparison
bool CustomOperation::operator==(const CustomOperation& rhs) const { return value == rhs.value; }
bool CustomOperation::operator!=(const CustomOperation& rhs) const { return value != rhs.value; }
bool CustomOperation::operator<(const CustomOperation& rhs) const { return value < rhs.value; }
bool CustomOperation::operator<=(const CustomOperation& rhs) const { return value <= rhs.value; }
bool CustomOperation::operator>(const CustomOperation& rhs) const { return value > rhs.value; }
bool CustomOperation::operator>=(const CustomOperation& rhs) const { return value >= rhs.value; }

// Logical not
bool CustomOperation::operator!() const { return !value; }

// Bitwise
CustomOperation CustomOperation::operator&(const CustomOperation& rhs) const { return CustomOperation(value & rhs.value); }
CustomOperation CustomOperation::operator|(const CustomOperation& rhs) const { return CustomOperation(value | rhs.value); }
CustomOperation CustomOperation::operator^(const CustomOperation& rhs) const { return CustomOperation(value ^ rhs.value); }
CustomOperation CustomOperation::operator~() const { return CustomOperation(~value); }
CustomOperation CustomOperation::operator<<(int shift) const { return CustomOperation(value << shift); }
CustomOperation CustomOperation::operator>>(int shift) const { return CustomOperation(value >> shift); }

// Assignment
CustomOperation& CustomOperation::operator=(const CustomOperation& rhs) { value = rhs.value; return *this; }

// Subscript
int CustomOperation::operator[](int index) const { return (index == 0) ? value : 0; }

// Function call
int CustomOperation::operator()() const { return value; }

// Stream operators
std::ostream& operator<<(std::ostream& os, const CustomOperation& obj) { os << obj.value; return os; }
std::istream& operator>>(std::istream& is, CustomOperation& obj) { is >> obj.value; return is; }
