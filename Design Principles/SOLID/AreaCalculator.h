#pragma once  
#include "Shape.h"  
#include <vector>  

/**
 * @class AreaCalculator
 * @brief Utility class to calculate areas of multiple shapes.
 *
 * AreaCalculator manages a collection of Shape pointers and provides
 * functionality to calculate and store the area of each shape.
 *
 * Example usage:
 * @code
 * std::vector<Shape*> shapes = { new Square(2), new Circle(3) };
 * AreaCalculator calc(shapes);
 * calc.calculateArea(shapes);
 * for (double a : calc.areas) {
 *     std::cout << a << std::endl;
 * }
 * @endcode
 */

class AreaCalculator  
{  
public:
    /**
     * @brief Stores the calculated areas of the shapes.
     */
    std::vector<double> areas;
    /**
     * @brief Stores pointers to the shapes managed by the calculator.
     */
    std::vector<Shape*> shapes;  

    /**
     * @brief Default constructor.
     */
    AreaCalculator() = default;
    /**
     * @brief Constructor that initializes the calculator with a vector of shapes.
     * @param shapes Vector of pointers to Shape objects.
     */
    AreaCalculator(std::vector<Shape*>& shapes) : shapes(shapes) {}

    /**
     * @brief Calculates and stores the area of each shape in the provided vector.
     * @param shapes Vector of pointers to Shape objects.
     */
    void calculateArea(const std::vector<Shape*>& shapes);
};
