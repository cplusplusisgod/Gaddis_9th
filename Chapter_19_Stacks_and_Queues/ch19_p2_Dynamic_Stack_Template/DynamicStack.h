#pragma once
#include <iostream>
template <class T>
class DynamicStack
{
private:
	struct StackNode {
		T Item;
		StackNode* next;
	};

	StackNode* top;


public:

	DynamicStack() { top == nullptr; }
	~DynamicStack();
	void push(T);
	void pop(T&);
	T pop();

	bool isEmpty();
};

template <class T>
DynamicStack<T>::~DynamicStack() {
	StackNode* nodePtr = nullptr;
	StackNode* nextNode = nullptr;

	nodePtr = top;
	while (nodePtr != nullptr)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}


template <class T>
bool DynamicStack<T>::isEmpty()
{
	if (!top)
		return true;
	else
		return false;
}



template <class T>
void DynamicStack<T>::push(T item)
{
	StackNode* newNode = nullptr;
	newNode = new StackNode;

	newNode->Item = item;
	if (isEmpty())
	{
		top = newNode;
		newNode->next = nullptr;
	}
	else
	{
		newNode->next = top;
		top = newNode;
	}
}

template <class T>
void DynamicStack<T>::pop(T& item)
{
	StackNode* temp = nullptr;

	if (isEmpty())
	{
		std::cout << "Error! The stack is empty!\n";
	}
	else
	{
		item = top->Item;
		temp = top->next;
		delete top;
		top = temp;
	}
}

template <class T>
T DynamicStack<T>::pop()
{
	StackNode* tempNode = nullptr;
	T temp;
	if (isEmpty())
	{
		return "Error! The stack is empty!\n";
		
	}
	else
	{
		temp = top->Item;
		tempNode = top->next;
		delete top;
		top = tempNode;
		return temp;

	}
}