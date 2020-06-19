// p1_static_stack_template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Stack.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string string1 = "first string";
	string string2 = "second string";
	Stack<string> stack(2);

	stack.push(string1);
	stack.push(string2);
	string empty_str;
	stack.pop(empty_str);
	cout << empty_str << endl;
	cout << stack.pop();

}

