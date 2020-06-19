#pragma once
#include <iostream>
template <class T>
class Stack
{
private:
	T* StackArray;
	int StackSize;
	int top;

public:
	Stack(int);
	~Stack();
	void push(T);
	void pop(T&);
	T pop();
	bool isFull();
	bool isEmpty();
};

template <class T>
Stack<T>::Stack<T>(int Size)
{

	StackArray = new T[Size];
	StackSize = Size;
	top = -1;
}

template <class T>
Stack<T>::~Stack() {
	if (StackArray > 0)
		delete[] StackArray;
}

template <class T>
bool Stack<T>::isEmpty()
{
	if (top == -1)
		return true;
	else
		return false;
}

template <class T>
bool Stack<T>::isFull()
{
	if (top == StackSize - 1)
		return true;
	else
		return false;
}

template <class T>
void Stack<T>::push(T item)
{
	if (isFull())
	{
		std::cout << "Error! The stack is full!\n";
	}
	else
	{
		top++;
		StackArray[top] = item;
	}
}

template <class T>
T Stack<T>::pop()
{
	T temp;
	if (isEmpty())
	{
		std::cout << "Error! The stack is empty!\n";

	}
	else
	{
		temp = StackArray[top];
		top--;
		return temp;
	}
}

template <class T>
void Stack<T>::pop(T& item)
{
	if (isEmpty())
	{
		std::cout << "Error! The stack is empty!\n";
	}
	else
	{
		item = StackArray[top];
		top--;
	}
}