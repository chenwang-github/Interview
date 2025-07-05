#pragma once
#include "Shape.h"
#include "IShapeWithVolume.h"
/**
 * @class SolidShape
 * @brief Abstract shape with both area and volume.
 */
class SolidShape : public Shape, public IShapeWithVolume {
public:
    virtual ~SolidShape() = default;
};
