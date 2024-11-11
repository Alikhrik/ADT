#include <iostream>
#include "Stack.h"


int main()
{
	char str[] = { "(x+1{s=3}()[)" };
	Stack obj1;
	obj1.push(1);
	obj1.push(2);
	obj1.push(3);
	int size = obj1.length();
	for (int i = 0; i < size; i++)
	{
		std::cout << obj1.pop() << ' ';
	}
	if (obj1.length() == 0)
	{
		std::cout << "\nstack is empty\n";
	}

	return 0;
}