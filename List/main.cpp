#include <iostream>
#include "ForwardList.h"
#include "List.h"

int main()
{
	List list;
	list.push_back(10);
	list.push_back(1);
	list.push_back(-5);

	list.show();

	List copy = list;
	copy.show();

	return 0;
}