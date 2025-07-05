#include "SumCalculatorOutputter.h"
#include <iostream>

void SumCalculatorOutputter::outputJSON() const {
	std::cout << "outputJson format" << std::endl;
	for(auto area : areaCalculator.areas) {
		std::cout << area << std::endl;
	}
}
void SumCalculatorOutputter::outputHTML() const {
	std::cout << "outputHTML format" << std::endl;
	for (auto area : areaCalculator.areas) {
		std::cout << area << std::endl;
	}
}