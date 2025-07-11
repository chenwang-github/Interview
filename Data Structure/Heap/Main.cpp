/**
 * @file Main.cpp
 * @brief Example usage of the MaxHeap class.
 */
#include "Heap.h"
#include <iostream>
#include <vector>

/**
 * @brief Entry point for demonstrating the MaxHeap class.
 * @return int Exit code.
 */
int main() {
    std::vector<int> data = {3, 1, 6, 5, 2, 4};
    MaxHeap heap(data);

    std::cout << "Initial heap: ";
    heap.PrintHeap();

    std::cout << "Push 10 into heap." << std::endl;
    heap.Push(10);
    heap.PrintHeap();

    std::cout << "Pop top from heap." << std::endl;
    heap.PopTop();
    heap.PrintHeap();

    std::cout << "Current top: " << heap.GetTop() << std::endl;

    return 0;
}
