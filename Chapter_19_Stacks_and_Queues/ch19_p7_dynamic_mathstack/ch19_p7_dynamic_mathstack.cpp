// ch19_p7_dynamic_mathstack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "MathStack.h"
#include <iostream>
using namespace std;
int main()
{ 
	int temp;
	MathStack stack(2);
	MathStack stack2(4);
	stack.push(5);
	stack.push(4);
	stack.add();
	stack.pop(temp);
	cout << temp << endl;
	//stack.add();
	stack.push(10);
	stack.push(10);
	stack.add();
	stack.pop(temp);
	cout << temp << endl;
	stack.push(5);
	stack.push(5);
	stack.mult();
	stack.pop(temp);
	cout << temp << endl;
	stack.push(10);
	stack.push(5);
	stack.div();
	stack.pop(temp);
	cout << temp << endl;
	cout << "here\n";
	stack2.push(2);
	stack2.push(2);
	stack2.push(2);
	stack2.push(2);
	stack2.push(2);
	stack2.addAll();
	stack2.pop(temp);
	cout << temp << endl;
	stack2.push(5);
	stack2.push(5);
	stack2.push(2);
	stack2.push(2);
	stack2.multAll();
	stack2.pop(temp);
	cout << temp << endl;
	stack2.pop(temp);


	//stack.pop(temp);
	//cout << temp;
}
