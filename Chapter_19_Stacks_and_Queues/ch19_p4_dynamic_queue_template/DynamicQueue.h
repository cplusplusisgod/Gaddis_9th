#pragma once
#include <iostream>
template <class T>
class DynamicQueue
{
private:
	struct QueueNode {
		T Item;
		QueueNode* Next;
	};

	QueueNode* Front;
	QueueNode* Rear;
	int NumItems;
	bool isEmpty() const;
	

public:
	DynamicQueue();
	~DynamicQueue();
	void clear();
	void enqueue(T);
	void dequeue(T&);
	T dequeue();
};

template <class T>
DynamicQueue<T>::DynamicQueue() {
	Front = nullptr;
	Rear = nullptr;
	NumItems = 0;
}

template <class T>
DynamicQueue<T>::~DynamicQueue() {
	clear();
}

template <class T>
void DynamicQueue<T>::clear()
{
	T item;
	while (!isEmpty())
	{
		dequeue(item);
	}
	std::cout << "Destructor completed.\n";
}

template <class T>
bool DynamicQueue<T>::isEmpty() const {

	bool status;

	if (NumItems > 0)
		status = false;
	else
		status = true;

	return status;
}

template <class T>
void DynamicQueue<T>::enqueue(T item)
{
	QueueNode* newNode = nullptr;

	newNode = new QueueNode;
	newNode->Item = item;
	newNode->Next = nullptr;

	if (isEmpty())
	{
		Front = newNode;
		Rear = newNode;
	}
	else
	{
		Rear->Next = newNode;
		Rear = newNode;
	}

	NumItems++;
}

template <class T>
void DynamicQueue<T>::dequeue(T& item)
{
	QueueNode* temp = nullptr;
	if (isEmpty())
	{
		std::cout << "Error! Queue is empty!\n";
	}
	else
	{
		item = Front->Item;

		//remove the front node and delete it.
		temp = Front;
		Front = Front->Next;
		delete temp;

		//update the NumItems
		NumItems--;
	}
}

template <class T>
T DynamicQueue<T>::dequeue() {

	QueueNode* temp = nullptr;
	T item;
	if (isEmpty()) {
		return "Error! Queue is empty!\n";
	}
	else
	{
		item = Front->Item;
		temp = Front;
		Front = Front->Next;
		delete temp;
		NumItems--;
		return item;
	}
}