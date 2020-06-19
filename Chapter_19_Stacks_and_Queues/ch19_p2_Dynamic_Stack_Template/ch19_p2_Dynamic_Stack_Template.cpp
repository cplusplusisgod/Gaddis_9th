// ch19_p2_Dynamic_Stack_Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "DynamicStack.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string string1 = "first string";
	string string2 = "second string";
	string string3 = "third string";
	DynamicStack<string> stack;
	string test;
	stack.push(string1);
	//stack.pop(test);
	//cout << test << endl;

	cout << stack.pop() << endl;
	cout << stack.pop();

}

