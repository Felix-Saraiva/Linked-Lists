#pragma once
template <class T>
class TStack{
public:
	int maxSize;
	T* StackData;
	int top;


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

	bool IsFull()
	{
		if (top == (maxSize - 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	T Peek()
	{
		return StackData[top];

	}

	T Pop()
	{
		T topToReturn = StackData[top];
		top--;
		return topToReturn;
		//return StackData[top--];
	}

	void Push(T value)
	{
		top++;
		this->StackData[top] = value;
	}

	TStack<T>(int maxSize)
	{
		this->maxSize = maxSize;
		StackData = new T[maxSize];//instantiates the array
		top = -1;
	}


private:

};


