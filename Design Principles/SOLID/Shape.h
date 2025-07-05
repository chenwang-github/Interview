#pragma once

/**
 * @class Shape
 * @brief Abstract base class for geometric shapes with area.
 */
class Shape {
public:
    virtual ~Shape() = default;
    virtual double area() const = 0;
};
