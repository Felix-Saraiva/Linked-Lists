#pragma once
#include <iostream>
#include "Link.h"
#include "LinkedList.h"

using namespace std;

class LinkedStack
{
public:
	LinkedList* stackData;
	int top;
	
	LinkedStack() {
		stackData = new LinkedList();
		top = -1;
	}


	bool IsEmpty()
	{
		if (top == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}


	int Peek()
	{
		return stackData->first->data;

	}

	Link* Pop()
	{
		top--;
		return stackData->DeleteFirst();
		//return StackData[top--];
	}

	void Push(int value)
	{
		top++;
		stackData->Insert(new Link(value));
	}



private:

};

