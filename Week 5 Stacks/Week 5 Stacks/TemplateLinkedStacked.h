#pragma once
#include "LinkedList.h"
#include "Link.h"
#include "LinkedStack.h"
#include "TLinkedList.h"

template <class T>

class TemplateLinkedStack
{

public:
	TLinkedList<T>* stackData;
	int top;

	TemplateLinkedStack<T>() {
		stackData = new TLinkedList<T>();
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


	T* Peek()
	{
		return stackData->first;

	}

	T* Pop()
	{
		top--;
		return stackData->DeleteFirst();
		//return StackData[top--];
	}

	void Push(T* node)
	{
		top++;
		stackData->Insert(node);
	}



private:

};