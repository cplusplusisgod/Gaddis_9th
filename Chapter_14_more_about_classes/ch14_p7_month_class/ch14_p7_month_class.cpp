// ch14_p7_month_class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "Month.h"
#include <iostream>
using namespace std;
int main()
{
	Month first;
	Month second;

	
	second = first++;
	std::cout << "first ";
	first.getMonthInfo();
	std::cout << "Second ";
	second.getMonthInfo();

	std::cout << "\n***********************\n";




	second = ++first;
	std::cout << "first ";
	first.getMonthInfo();
	std::cout << "Second ";
	second.getMonthInfo();
	std::cout << "\n***********************\n";

	second = first++;
	std::cout << "first ";
	first.getMonthInfo();
	std::cout << "Second ";
	second.getMonthInfo();

	std::cout << "\n***********************\n";

}
