#include "Circle.h"

double Circle::area() const {
    return M_PI * radius * radius;
}

double Circle::volume() const {
    // Treat as a sphere for demonstration
    return (4.0 / 3.0) * M_PI * radius * radius * radius;
}
