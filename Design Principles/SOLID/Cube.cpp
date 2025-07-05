#include "Cube.h"

double Cube::area() const {
    // Surface area of a cube: 6 * l^2
    return 6 * length * length;
}

double Cube::volume() const {
    // Volume of a cube: l^3
    return length * length * length;
}
