#pragma once
#include<vector>
class MaxHeap
{
private:
	std::vector<int> container;
	int leftChild(int index);
	int rightChild(int index);
	int parent(int index);

	void Heapify();
	void siftDown(int i); // Added for heapify

public:
	MaxHeap() = default;
	MaxHeap(std::vector<int> v);
	int GetTop();
	void PopTop();
	void Push(int value);
	void PrintHeap();
};

