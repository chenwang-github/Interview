#include "Heap.h"
#include <iostream>

int MaxHeap::leftChild(int index) {
	return 2 * index + 1;
}
int MaxHeap::rightChild(int index) {
	return 2 * index + 2;
}
int MaxHeap::parent(int index) {
	return (index - 1) / 2;
}

void MaxHeap::siftDown(int i) {
    int size = container.size();
    while (true) {
        int largest = i;
        int left = leftChild(i);
        int right = rightChild(i);
        if (left < size && container[left] > container[largest]) {
            largest = left;
        }
        if (right < size && container[right] > container[largest]) {
            largest = right;
        }
        if (largest != i) {
            std::swap(container[i], container[largest]);
            i = largest;
        } else {
            break;
        }
    }
}

void MaxHeap::Heapify() {
    int lastNodeWithChildren = container.size() / 2 - 1;
    for (int i = lastNodeWithChildren; i >= 0; --i) {
        siftDown(i);
    }
}

void MaxHeap::PrintHeap() {
	for(auto& value : container) {
		std::cout << value << ",";
	}
	std::cout << std::endl;
}

MaxHeap::MaxHeap(std::vector<int> v)
{
	container = v;
	Heapify();
}

int MaxHeap::GetTop() {
    if (container.empty()) throw std::out_of_range("Heap is empty");
    return container.front();
}

void MaxHeap::PopTop() {
    if (container.empty()) throw std::out_of_range("Heap is empty");
    std::swap(container.front(), container.back());
    container.pop_back();
    if (!container.empty()) siftDown(0);
}

void MaxHeap::Push(int value) {
    container.push_back(value);
    int i = container.size() - 1;
    while (i > 0 && container[parent(i)] < container[i]) {
        std::swap(container[i], container[parent(i)]);
        i = parent(i);
    }
}

