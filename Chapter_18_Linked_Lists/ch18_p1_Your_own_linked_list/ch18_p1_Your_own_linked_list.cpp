// ch18_p1_Your_own_linked_list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "NumberList.h"
#include "FeetInches.h"
#include <iostream>
using namespace std;
int main()
{
	FeetInches distance1(5, 4); // 5 feet 4 inches
	FeetInches distance2(6, 8); // 6 feet 8 inches
	FeetInches distance3(8, 9); // 8 feet 9 inches

	LinkedList<int> container;
	container.appendNode(1);
	container.appendNode(2);
	container.appendNode(3);
	container.appendNode(4);
	container.appendNode(5);
	cout << "Display the first containers values (1-5)\n";
	container.displayList();
	cout << "Now display the first containers values after deleting 4 and 5\n";
	container.deleteNode(4);
	container.deleteNode(5);
	container.displayList();
	cout << "Now inserting the value 2 into the first container and outputting the results.\n";
	container.insertNode(2);
	container.displayList();

	cout << "Now making a copy of the first container and outputting the new containers values. should be 1,2,2,3\n";
	LinkedList<int> container2(container);
	container2.displayList();
	cout << "Now reversing the second container.\n";
	container2.reverse();
	container2.displayList();
	cout << "Now search container2 for the position of the number '1'\n";
	cout << container2.search(1) << endl;
	cout << "Now search conntainer2 for the position of the number '10' which isnt in it. Should return -1\n";
	cout << container2.search(10) << endl;
	cout << "Now inputting 5, at position 0\n";
	container2.insertAtPos(0, 5);
	container2.displayList();
	cout << "Now inputting 77 at position 5\n";
	container2.insertAtPos(5, 77);
	container2.displayList();
	cout << "Now inputting 88 at position 7 which is out of bounds.\n";
	container2.insertAtPos(7, 88);
	cout << "Outputting container2 contents.\n";
	container2.displayList();
	cout << "Now using the deleteAtPos function to delete the value at index 0\n";
	container2.deleteAtPos(0);
	container2.displayList();
	cout << "Now deleting at index 3\n";
	container2.deleteAtPos(3);
	container2.displayList();
	cout << "Now attempting to  deleting at a index that does not exsist.\n";
	container2.deleteAtPos(5);
	container2.displayList();
	cout << "\t***** Now making containers using the class FeetInches as the type *****\n";
	LinkedList<FeetInches> container3;
	container3.appendNode(distance1);
	container3.appendNode(distance2);
	container3.appendNode(distance3);
	container3.displayList();
	cout << "Now deleting the contents at index 2\n";
	container3.deleteAtPos(2);
	container3.displayList();
	cout << "Now inserting the deleted content back into index 2 which is the end\n";
	container3.insertAtPos(2, distance3);
	container3.displayList();
	cout << "Now revering the elements\n";
	container3.reverse();
	container3.displayList();








	//NumberList container3;
	//container3.insertAtPos(0, 5);
	//container3.insertAtPos(, 6);
	//container3.displayList();



}

