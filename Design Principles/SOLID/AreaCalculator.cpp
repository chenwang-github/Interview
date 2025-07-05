#include "AreaCalculator.h"

void AreaCalculator::calculateArea(const std::vector<Shape*>& shapes) {
	areas.clear();
	for (const auto& shape : shapes) {
		if (shape) {
			areas.push_back(shape->area());
		}
	}
}