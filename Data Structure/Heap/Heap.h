#pragma once
#include<vector>

/**
 * @class MaxHeap
 * @brief Implements a max-heap data structure using a vector.
 *
 * Provides standard heap operations such as insert, delete, heapify, and access to the top element.
 */
class MaxHeap
{
private:
    std::vector<int> container; ///< Internal container for heap elements

    /**
     * @brief Returns the index of the left child of a node.
     * @param index Index of the parent node.
     * @return Index of the left child.
     */
    int leftChild(int index);

    /**
     * @brief Returns the index of the right child of a node.
     * @param index Index of the parent node.
     * @return Index of the right child.
     */
    int rightChild(int index);

    /**
     * @brief Returns the index of the parent of a node.
     * @param index Index of the child node.
     * @return Index of the parent node.
     */
    int parent(int index);

    /**
     * @brief Converts the container into a valid max-heap.
     */
    void Heapify();

    /**
     * @brief Sifts down the element at index i to maintain the heap property.
     * @param i Index to sift down from.
     */
    void siftDown(int i);

public:
    /**
     * @brief Default constructor.
     */
    MaxHeap() = default;

    /**
     * @brief Constructs a max-heap from a vector of integers.
     * @param v Vector of integers to build the heap from.
     */
    MaxHeap(std::vector<int> v);

    /**
     * @brief Returns the top (maximum) element of the heap.
     * @return The maximum element.
     * @throws std::out_of_range if the heap is empty.
     */
    int GetTop();

    /**
     * @brief Removes the top (maximum) element from the heap.
     * @throws std::out_of_range if the heap is empty.
     */
    void PopTop();

    /**
     * @brief Inserts a new value into the heap.
     * @param value The value to insert.
     */
    void Push(int value);

    /**
     * @brief Prints the elements of the heap to standard output.
     */
    void PrintHeap();
};

