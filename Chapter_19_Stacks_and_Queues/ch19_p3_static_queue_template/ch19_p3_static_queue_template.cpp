// ch19_p3_static_queue_template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "StaticQueue.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string string1 = "first string";
	string string2 = "second string";
	string string3 = "third string";
	StaticQueue<string> queue(3);

	queue.enqueue(string1);
	queue.enqueue(string2);
	queue.enqueue(string3);

	cout << queue.dequeue() << endl;
	cout << queue.dequeue() << endl;
	cout << queue.dequeue() << endl;


}

