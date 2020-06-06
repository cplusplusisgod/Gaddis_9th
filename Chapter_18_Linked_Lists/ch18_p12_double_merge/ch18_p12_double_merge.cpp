// ch18_p12_double_merge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "NumberList.h"
#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 5;
    double doubleArr[SIZE] = { 1,3,5,7,8 };
    NumberList list;
    list.appendNode(2);
    list.appendNode(4);
    list.appendNode(6);

    list.mergArray(doubleArr,SIZE);

    list.displayList();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
