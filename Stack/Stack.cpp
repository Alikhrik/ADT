#include "Stack.h"
#include <iostream>

Stack::Stack()
	: data(nullptr), size(0)
{}

Stack::~Stack()
{
	delete[] data;
}

void Stack::push(int value)
{
	int new_size = size + 1;
	int* new_data = new int[new_size]{};
	if (data != nullptr)
	{
		for (int i = 0; i < size; i++)
		{
			new_data[i] = data[i];
		}
	}
	new_data[new_size - 1] = value;
	delete[] data;
	data = new_data;
	size += 1;
}

int Stack::top()
{
	return data[size - 1];
}

int Stack::pop()
{
	int result = data[size - 1];
	int new_size = size - 1;
	int* new_data = new int[new_size] {};
	for (int i = 0; i < new_size; i++)
	{
		new_data[i] = data[i];
	}
	delete[] data;
	data = new_data;
	size -= 1;
	return result;
}
// O(n) O(1)

int Stack::length()
{
	return size;
}
