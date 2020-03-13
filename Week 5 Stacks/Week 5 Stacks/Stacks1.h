#pragma once

class Stacks1
{
public:
	int maxSize;
	int* StackData;
	int top;

	bool IsEmpty();
	bool IsFull();
	int Peek();
	int Pop();
	void Push(int value);
	Stacks1(int maxSize);


private:

};

