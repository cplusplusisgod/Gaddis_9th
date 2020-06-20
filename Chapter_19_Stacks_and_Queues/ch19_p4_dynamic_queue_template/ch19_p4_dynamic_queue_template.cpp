// ch19_p4_dynamic_queue_template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "DynamicQueue.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string string1 = "first string";
	string string2 = "second string";
	string string3 = "third string";
	DynamicQueue<string> queue;
	queue.enqueue(string1);
	queue.enqueue(string2);
	queue.enqueue(string3);

	cout << queue.dequeue() << endl;
	cout << queue.dequeue() << endl;
	cout << queue.dequeue() << endl;
	cout << queue.dequeue() << endl;


}


