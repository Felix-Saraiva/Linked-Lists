#include "Stacks1.h"

using namespace std;

bool Stacks1::IsEmpty()
{
	if (top==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Stacks1::IsFull()
{
	if (top==(maxSize-1))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Stacks1::Peek()
{
	return StackData[top];

}

int Stacks1::Pop()
{
	int topToReturn = StackData[top];
	top--;
	return topToReturn;
	//return StackData[top--];
}

void Stacks1::Push(int value)
{
	top++;
	this->StackData[top] = value;
}

Stacks1::Stacks1(int maxSize)
{
	this->maxSize = maxSize;
	StackData = new int[maxSize];//instantiates the array
	top = -1;
}
