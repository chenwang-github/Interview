#pragma once
/**
 * @class IShapeWithVolume
 * @brief Pure abstract interface for shapes with volume calculation.
 */
class IShapeWithVolume {
public:
    virtual ~IShapeWithVolume() = default;
    virtual double volume() const = 0;
};
