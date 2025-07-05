#pragma once
#include "SolidShape.h"
#define M_PI 3.14159265358979323846

class Sphere : public SolidShape {
private:
    double radius;
public:
    Sphere() : radius(0.0) {}
    Sphere(double r) : radius(r) {}

    double area() const override;
    double volume() const override;
};
