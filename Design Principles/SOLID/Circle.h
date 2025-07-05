#pragma once
#include "SolidShape.h"

#define M_PI 3.14159265358979323846

class Circle : public SolidShape {
private:
    double radius;
public:
    Circle() : radius(0.0) {}
    Circle(double r) : radius(r) {}

    double area() const override;
    double volume() const override;
};