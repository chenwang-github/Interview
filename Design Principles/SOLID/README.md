# SOLID Principles in This Project

The SOLID principles are five design guidelines that help developers create maintainable, flexible, and scalable object-oriented software:

- **Single Responsibility Principle (SRP):** A class should have only one reason to change, meaning it should have only one job or responsibility.
- **Open/Closed Principle (OCP):** Software entities (classes, modules, functions, etc.) should be open for extension but closed for modification.
- **Liskov Substitution Principle (LSP):** Objects of a superclass should be replaceable with objects of a subclass without affecting the correctness of the program.
- **Interface Segregation Principle (ISP):** No client should be forced to depend on methods it does not use; interfaces should be specific to client needs.
- **Dependency Inversion Principle (DIP):** High-level modules should not depend on low-level modules; both should depend on abstractions.

This project demonstrates all five SOLID principles using C++ classes for geometric shapes. Below is an explanation of how each principle is met:


## 1. Single Responsibility Principle (SRP)
Each class has a single responsibility:
- `Square`, `Cube`, `Circle`, and `Sphere` each represent a single geometric shape and only contain logic related to that shape.
- The base class `SolidShape` defines the interface for area and volume calculations.

## 2. Open/Closed Principle (OCP)
- Each shape class (e.g., `Square`, `Cube`, `Circle`, `Sphere`) implements its own `area()` calculation logic, rather than relying on a centralized `areaCalculator` class or function.
- This means that when new shapes are added, you only need to implement the `area()` method in the new shape class, without modifying any existing area calculation logic or classes.
- The `SolidShape` base class allows new shapes to be added (by inheriting and implementing `area()` and `volume()`) without modifying existing code.

## 3. Liskov Substitution Principle (LSP)
- All derived classes (`Square`, `Cube`, `Circle`, `Sphere`) inherit from the `SolidShape` base class and implement the required `area()` and `volume()` methods.
- This ensures that any instance of a derived class can be used wherever a `SolidShape*` or reference is expected, without altering the correctness of the program.
- For example, a function that operates on `SolidShape` pointers can work with any shape without knowing the specific type, maintaining substitutability and expected behavior.

## 4. Interface Segregation Principle (ISP)
- The `SolidShape` interface only requires `area()` and `volume()`, so implementing classes are not forced to depend on methods they do not use.

## 5. Dependency Inversion Principle (DIP)
- High-level modules (such as any code using `SolidShape` pointers or references) depend on the abstraction (`SolidShape`), not on concrete shape implementations.

---

This structure ensures the code is modular, extensible, and easy to maintain, following all SOLID principles.
