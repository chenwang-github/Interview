#pragma once
#include "AreaCalculator.h"

class SumCalculatorOutputter
{
public:
    AreaCalculator areaCalculator;

    SumCalculatorOutputter(AreaCalculator c) : areaCalculator(c) {}

    void outputJSON() const;
    void outputHTML() const;
};

