#include <iostream>
#include "Queue.h"

int main()
{
	Queue obj1;
	obj1.push(1);
	obj1.push(2);
	obj1.push(3);

	while (!obj1.IsEmpty())
	{
		std::cout << obj1.pop() << ' ';
	}

	return 0;
}