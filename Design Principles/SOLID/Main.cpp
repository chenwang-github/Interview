#include <iostream>
#include "Square.h"
#include "Circle.h"
#include "Cube.h"
#include "Sphere.h"
#include "AreaCalculator.h"
#include "SumCalculatorOutputter.h"
#include <vector>

int main() {
    // 2D shapes
    Square* square = new Square(2);
    Circle* circle = new Circle(3);
    std::vector<Shape*> shapes = { square, circle };

    std::cout << "Testing Shape* (area only, 2D shapes):" << std::endl;
    for (const auto* s : shapes) {
        std::cout << "Area: " << s->area() << std::endl;
    }

    // 3D solid shapes
    Cube* cube = new Cube(2);
    Sphere* sphere = new Sphere(3);
    std::vector<SolidShape*> solidShapes = { cube, sphere };
    std::cout << "\nTesting SolidShape* (area and volume, 3D shapes):" << std::endl;
    for (const auto* s : solidShapes) {
        std::cout << "Area: " << s->area() << ", Volume: " << s->volume() << std::endl;
    }

    // Calculate areas using AreaCalculator (for all shapes)
    std::vector<Shape*> allShapes = { square, circle, cube, sphere };
    AreaCalculator calc(allShapes);
    calc.calculateArea(allShapes);
    SumCalculatorOutputter outputter(calc);
    outputter.outputJSON();
    outputter.outputHTML();

    // Clean up
    for (auto s : allShapes) delete s;
    return 0;
}
