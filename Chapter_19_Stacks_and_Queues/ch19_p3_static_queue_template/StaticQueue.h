#pragma once
#include <iostream>
template <class T>
class StaticQueue
{
private:
	T* QueueArray;
	int QueueSize;
	int Front;
	int Rear;
	int NumItems;

public:
	StaticQueue(int);
	~StaticQueue();
	bool isEmpty();
	bool isFull();
	void enqueue(T);
	void dequeue(T&);
	T dequeue();
	void clear();
};

template <class T>
StaticQueue<T>::StaticQueue(int Size) {
	QueueSize = Size;
	QueueArray = new T[Size];
	Front = -1;
	Rear = -1;
	NumItems = 0;
}

template <class T>
StaticQueue<T>::~StaticQueue() {
	delete[] QueueArray;
}

template <class T>
bool StaticQueue<T>::isEmpty()
{
	bool status;

	if (NumItems == 0)
		status = true;
	else
		status = false;

	return status;
}

template <class T>
bool StaticQueue<T>::isFull() {
	bool status;

	
			
	if (NumItems < QueueSize)
		status = false;
	else
		status = true;

	return status;
			
		
	

}

template <class T>
void StaticQueue<T>::enqueue(T item)
{
	if (isFull())
	{
		std::cout << "Error! Queue is full.\n";
	}
	else
	{
		//Calculate the new rear position
		Rear = (Rear + 1) % QueueSize;
		//insert new item
		QueueArray[Rear] = item;
		//update item count
		NumItems++;
	}
}

template <class T>
void StaticQueue<T>::dequeue(T& item)
{
	if (isEmpty()) {
		std::cout << "Error! Queue is empty.\n";
	}
	else
	{
		//move front
		Front = (Front + 1) % QueueSize;
		//get the front item
		item = QueueArray[Front];
		//update item count
		NumItems--;
	}
}

template <class T>
T StaticQueue<T>::dequeue() {
	T temp;
	if (isEmpty())
	{
		return "Error! Queue is empty.\n";
	}
	else
	{
		//Move front
		Front = (Front + 1) % QueueSize;
		//get front item
		temp = QueueArray[Front];
		NumItems--;
		return temp;
	}
}

template <class T>
void StaticQueue<T>::clear()
{
	Front = QueueSize - 1;
	Rear = QueueSize - 1;
	NumItems = 0;
}