// ch18_p14_overload_[]_operator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "NumberList.h"
#include "FeetInches.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	LinkedList<double> list;
	LinkedList<FeetInches> list2;
	LinkedList<string> list3;

	list.appendNode(1.1);
	list.appendNode(2.2);
	list.appendNode(3.3);
	list.appendNode(4.4);
	list.appendNode(5.5);

	FeetInches distance1(5, 4); // 5 feet 4 inches
	FeetInches distance2(6, 8); // 6 feet 8 inches
	FeetInches distance3(8, 9); // 8 feet 9 inches

	list2.appendNode(distance1);
	list2.appendNode(distance2);
	list2.appendNode(distance3);

	string str1 = "first string";
	string str2 = "second string";
	string str3 = "third string";

	list3.appendNode(str1);
	list3.appendNode(str2);
	list3.appendNode(str3);
	
	//list3.insertNode(list3[1]);

	LinkedList<int> list4;
	
	try{
		cout << list[0] << endl;
		cout << list2[0] << endl;
		cout<<list3[2] << endl;
		cout << list4[0] << endl;

	}
	catch (const char* error)
	{
		cout << error;
	}


}

