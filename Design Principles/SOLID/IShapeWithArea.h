#pragma once
/**
 * @class IShapeWithArea
 * @brief Pure abstract interface for shapes with area calculation.
 */
class IShapeWithArea {
public:
    virtual ~IShapeWithArea() = default;
    virtual double area() const = 0;
};
