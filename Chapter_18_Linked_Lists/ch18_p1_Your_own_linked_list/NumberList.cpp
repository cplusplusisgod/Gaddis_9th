#include "NumberList.h"
#include <iostream>
#include <algorithm>
////copy constructor.
//template <class T>
//NumberList<T>::NumberList(const NumberList<T>& obj)
//{
//	ListNode<T>* nodePtr = obj.head;
//	while (nodePtr)
//	{
//		appendNode(nodePtr->value);
//		nodePtr = nodePtr->next;
//	}
//}
//
//void NumberList::appendNode(int num)
//{
//	ListNode* newNode;  // To point to a new node
//	ListNode* nodePtr;  // To move through the list
//
//	// Allocate a new node and store num there.
//	newNode = new ListNode;
//	newNode->value = num;
//	newNode->next = nullptr;
//
//	// If there are no nodes in the list
//	// make newNode the first node.
//	if (!head)
//		head = newNode;
//	else  // Otherwise, insert newNode at end.
//	{
//		// Initialize nodePtr to head of list.
//		nodePtr = head;
//
//		// Find the last node in the list.
//		while (nodePtr->next)
//			nodePtr = nodePtr->next;
//
//		// Insert newNode as the last node.
//		nodePtr->next = newNode;
//	}
//}
//
//void NumberList::insertNode(int newValue)
//{
//	ListNode* newNode;
//	ListNode* nodePtr;
//	ListNode* previousNode = nullptr;
//
//	newNode = new ListNode;
//	newNode->value = newValue;
//
//	if (!head)
//	{
//		head = newNode;
//		newNode->next = nullptr;
//	}
//	else
//	{
//		nodePtr = head;
//		previousNode = nullptr;
//
//		while (nodePtr->next && nodePtr->value < newValue)
//		{
//			previousNode = nodePtr;
//			nodePtr = nodePtr->next;
//		}
//
//		if (previousNode == nullptr)
//		{
//			head = newNode;
//			newNode->next = nodePtr;
//		}
//		else
//		{
//			previousNode->next = newNode;
//			newNode->next = nodePtr;
//		}
//	}
//}
//
//void NumberList::deleteNode(int num)
//{
//	ListNode* nodePtr;
//	ListNode* previousNode = nullptr;
//	if (!head)
//		return;
//
//	if (head->value == num)
//	{
//		nodePtr = head->next;
//		delete head;
//		head = nodePtr;
//	}
//	else
//	{
//		nodePtr = head;
//		while (nodePtr != nullptr && nodePtr->value != num)
//		{
//			previousNode = nodePtr;
//			nodePtr = nodePtr->next;
//		}
//
//		if (nodePtr)
//		{
//			previousNode->next = nodePtr->next;
//			delete nodePtr;
//		}
//	}
//}
//
//void NumberList::displayList() const
//{
//	ListNode* nodePtr;
//	nodePtr = head;
//	while (nodePtr)
//	{
//		std::cout << nodePtr->value << std::endl;
//		nodePtr = nodePtr->next;
//	}
//}
//
//void NumberList::reverse()
//{
//	ListNode* curNode = head;
//	ListNode* prevNode = nullptr;
//	ListNode* nextNode =  nullptr;
//
//	if (!head)
//		return;
//	else
//	{
//		while (curNode != nullptr)
//		{
//			nextNode = curNode->next;
//			curNode->next = prevNode;
//			prevNode = curNode;
//			curNode = nextNode;
//		}
//	}
//	head = prevNode;
//}
//
//
//int NumberList::search(int num)
//{
//	int count = 0;
//	ListNode* nodePtr = head;
//	if (!head)
//		return -1;
//	else
//	{
//		while (nodePtr != nullptr && nodePtr->value != num) {
//			count++;
//			nodePtr = nodePtr->next;
//		}	
//	}
//
//	if (nodePtr == nullptr)
//		return -1;
//	else
//		return count;
//}
//
//void NumberList::insertAtPos(int pos,int num)
//{
//	int count = 0;
//	ListNode* nodePtr = head;
//	ListNode* previousNode = nullptr;
//	ListNode* newNode = new ListNode;
//	newNode->value = num;
//
//
//	if (pos == 0)
//	{
//		head = newNode;
//		newNode->next = nodePtr;
//	}
//	else
//	{
//			while (nodePtr != nullptr && count != pos)
//			{
//				count++;
//				previousNode = nodePtr;
//				nodePtr = nodePtr->next;
//			}
//			
//			if (count == pos)
//			{
//				previousNode->next = newNode;
//				newNode->next = nodePtr;
//			}
//			else
//			{
//				std::cout << "Pos is  out of bounds.\n";
//			}
//	}
//}
//
//void NumberList::deleteAtPos(int pos)
//{
//	int count = 0;
//	ListNode* nodePtr = head;
//	ListNode* previousNode = nullptr;
//
//	if (!head)
//		return;
//
//	if (pos == 0)
//	{
//		nodePtr = nodePtr->next;
//		delete head;
//		head = nodePtr;
//	}
//	else
//	{
//		while (nodePtr->next  && count != pos)
//		{
//			count++;
//			previousNode = nodePtr;
//			nodePtr = nodePtr->next;
//		}
//
//		if (count == pos)
//		{
//			previousNode->next = nodePtr->next;
//			delete nodePtr;
//		}
//		else
//		{
//			std::cout<<"Subscript out of range.\n";
//		}
//	}
//}
//
//NumberList::~NumberList() {
//
//	ListNode* nodePtr;
//	ListNode* nextNode;
//	nodePtr = head;
//
//	while (nodePtr != nullptr)
//	{
//		nextNode = nodePtr->next;
//		delete nodePtr;
//		nodePtr = nextNode;
//	}
//	std::cout << "NumberList destructor completed.\n";
//}
