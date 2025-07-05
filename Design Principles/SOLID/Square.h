#pragma once
#include "SolidShape.h"

class Square : public SolidShape {
private:
    int length;
public:
    Square() : length(0) {}
    Square(int l) : length(l) {}

    double area() const override;
    double volume() const override;
};