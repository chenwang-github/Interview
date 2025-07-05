#include "Sphere.h"

double Sphere::area() const {
    // Surface area of a sphere: 4 * pi * r^2
    return 4 * M_PI * radius * radius;
}

double Sphere::volume() const {
    // Volume of a sphere: (4/3) * pi * r^3
    return (4.0 / 3.0) * M_PI * radius * radius * radius;
}
