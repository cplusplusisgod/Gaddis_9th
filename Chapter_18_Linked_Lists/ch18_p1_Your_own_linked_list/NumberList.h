#pragma once
#include <iostream>
template <class T>
class ListNode
{
public:
	T value;
	ListNode<T>* next;
	ListNode(T nodeValue) { value = nodeValue; next = nullptr; }
};


template <class T>
class LinkedList
{
private:
	ListNode<T>* head = nullptr;
public:

	LinkedList() { head = nullptr; } //compiler complains if its not also set to nullptr in its declaration /shrug
	~LinkedList();
	LinkedList<T>(const LinkedList<T>&);
	//ListNode<T>* head;
	void appendNode(T);
	void insertNode(T);
	void deleteNode(T);
	void reverse();
	int search(T);
	void insertAtPos(int,T);
	void deleteAtPos(int);
	void displayList() const;
};


//copy constructor.
template <class T>
LinkedList<T>::LinkedList(const LinkedList<T>& obj)
{
	ListNode<T>* nodePtr = obj.head;
	while (nodePtr)
	{
		appendNode(nodePtr->value);
		nodePtr = nodePtr->next;
	}
}

template <class T>
void LinkedList<T>::appendNode(T num)
{
	ListNode<T>* newNode;  // To point to a new node
	ListNode<T>* nodePtr;  // To move through the list

	// Allocate a new node and store num there.
	newNode = new ListNode<T>(num);
	//newNode->value = num;
	//newNode->next = nullptr;

	// If there are no nodes in the list
	// make newNode the first node.
	if (!head)
		head = newNode;
	else  // Otherwise, insert newNode at end.
	{
		// Initialize nodePtr to head of list.
		nodePtr = head;

		// Find the last node in the list.
		while (nodePtr->next)
			nodePtr = nodePtr->next;

		// Insert newNode as the last node.
		nodePtr->next = newNode;
	}
}

template <class T>
void LinkedList<T>::insertNode(T newValue)
{
	ListNode<T>* newNode;
	ListNode<T>* nodePtr;
	ListNode<T>* previousNode = nullptr;

	newNode = new ListNode<T>(newValue);
	//newNode->value = newValue;

	if (!head)
	{
		head = newNode;
		newNode->next = nullptr;
	}
	else
	{
		nodePtr = head;
		previousNode = nullptr;

		while (nodePtr->next && nodePtr->value < newValue)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		if (previousNode == nullptr)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}

template <class T>
void LinkedList<T>::deleteNode(T num)
{
	ListNode<T>* nodePtr;
	ListNode<T>* previousNode = nullptr;
	if (!head)
		return;

	if (head->value == num)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		nodePtr = head;
		while (nodePtr != nullptr && nodePtr->value != num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

template <class T>
void LinkedList<T>::displayList() const
{
	ListNode<T>* nodePtr;
	nodePtr = head;
	while (nodePtr)
	{
		std::cout << nodePtr->value << std::endl;
		nodePtr = nodePtr->next;
	}
}

template <class T>
void LinkedList<T>::reverse()
{
	ListNode<T>* curNode = head;
	ListNode<T>* prevNode = nullptr;
	ListNode<T>* nextNode = nullptr;

	if (!head)
		return;
	else
	{
		while (curNode != nullptr)
		{
			nextNode = curNode->next;
			curNode->next = prevNode;
			prevNode = curNode;
			curNode = nextNode;
		}
	}
	head = prevNode;
}

template <class T>
int LinkedList<T>::search(T num)
{
	int count = 0;
	ListNode<T>* nodePtr = head;
	if (!head)
		return -1;
	else
	{
		while (nodePtr != nullptr && nodePtr->value != num) {
			count++;
			nodePtr = nodePtr->next;
		}
	}

	if (nodePtr == nullptr)
		return -1;
	else
		return count;
}

template <class T>
void LinkedList<T>::insertAtPos(int pos, T num)
{
	int count = 0;
	ListNode<T>* nodePtr = head;
	ListNode<T>* previousNode = nullptr;
	ListNode<T>* newNode = new ListNode<T>(num);
	//newNode->value = num;


	if (pos == 0)
	{
		head = newNode;
		newNode->next = nodePtr;
	}
	else
	{
		while (nodePtr != nullptr && count != pos)
		{
			count++;
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		if (count == pos)
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
		else
		{
			std::cout << "Pos is  out of bounds.\n";
		}
	}
}

template <class T>
void LinkedList<T>::deleteAtPos(int pos)
{
	int count = 0;
	ListNode<T>* nodePtr = head;
	ListNode<T>* previousNode = nullptr;

	if (!head)
		return;

	if (pos == 0)
	{
		nodePtr = nodePtr->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		while (nodePtr->next && count != pos)
		{
			count++;
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		if (count == pos)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
		else
		{
			std::cout << "Subscript out of range.\n";
		}
	}
}

template <class T>
LinkedList<T>::~LinkedList() {

	ListNode<T>* nodePtr;
	ListNode<T>* nextNode;
	nodePtr = head;

	while (nodePtr != nullptr)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
	std::cout << "NumberList destructor completed.\n";
}
