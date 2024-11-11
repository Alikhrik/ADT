#include <iostream>
#include "Queue.h"

// реалізувати роботу черги з динамічним масивом

int Queue::pop()
{
	int result = data[0];
	int new_size = size - 1;
	for (int i = 0; i < size; i++)
	{
		data[i] = data[i + 1];
	}
	size--;
	return result;
}
// O(n) O(1)

int Queue::top()
{
	return data[0];
}

void Queue::push(int value)
{
	int new_size = size + 1;
	int last = new_size - 1;
	data[last] = value;
	size += 1;
}

bool Queue::IsFull()
{
	return size == 10;
}

bool Queue::IsEmpty()
{
	return size == 0;
}

//void Queue::print()
//{
//	if (size == 0)
//		return;
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << data[i] << ' ';
//	}
//	std::cout << std::endl;
//}