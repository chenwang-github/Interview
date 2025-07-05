#pragma once
#include "SolidShape.h"

class Cube : public SolidShape {
private:
    double length;
public:
    Cube() : length(0) {}
    Cube(double l) : length(l) {}

    double area() const override;
    double volume() const override;
};
