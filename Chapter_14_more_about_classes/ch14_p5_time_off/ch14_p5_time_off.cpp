// ch14_p5_time_off.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "NumDays.h"
#include "TimeOff.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	TimeOff first;
	cout << first.GetName() << std::endl;
	cout << first.GetId() << std::endl;
	first.SetName();
	cout << first.GetName() << std::endl;

	first.AdjustSickHrs(49);
	cout << "\n";
	first.AdjustSickTaken(6);
	cout << "\n";
	first.AdjustVacationHrs(20);
	cout << "\n";
	first.AdjustVacationTaken(5);
	


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
