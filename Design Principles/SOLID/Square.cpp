#include "Square.h"

double Square::area() const {
    return length * length;
}

double Square::volume() const {
    // Treat as a cube for demonstration
    return length * length * length;
}