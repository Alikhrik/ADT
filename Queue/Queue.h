#pragma once
class Queue
{
private:
	const int MAX_SIZE = 10;
	int data[10]{};
	int size = 0;
public:
	int pop();
	int top();
	void push(int value);
	bool IsFull();
	bool IsEmpty();
	// void print();
};