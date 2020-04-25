// ch14_p10_corporate_sales.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once

#include <iostream>
#include <cctype>
#include <string>
#include "DivSales.h"
void Validator(double&, const std::string);  //ensures proper number input of only positive nums.
int main()
{
	DivSales CorpSales[3];

	for (DivSales& DV : CorpSales)
	{
		static int div_counter = 1;
		double q1 = 0, q2 = 0, q3 = 0, q4 = 0;
		std::cout << "Enter Division #" << div_counter << " Quarterly sales\n";
		Validator(q1, "Q1");
		Validator(q2, "Q2");
		Validator(q3, "Q3");
		Validator(q4, "Q4");
		DV.inputQsales(q1, q2, q3, q4);
		div_counter++;
	}

	std::cout << "\tSales recorded:\n";
	for (DivSales DV : CorpSales)
	{
		static int div_counter = 1;
		int q_counter = 1;
		std::cout << "Division #" << div_counter << " Sales:\n";
		for (int count = 0; count < 4; count++)
		{
			std::cout << "Q" << q_counter << ": " << DV.getQ(count) << std::endl;
			q_counter++;
		}
		div_counter++;
	}
	std::cout << "Total sales : " << CorpSales->printWow();
}


void Validator(double& num, const std::string Q)
{
	std::string input;
	bool valid;
	double temp = 0;
	int dotTrack = 0;

	do {
		valid = true;
		temp = 0;
		dotTrack = 0;
		std::cout << Q << ": ";
		std::getline(std::cin, input);
		for (char C : input)
		{
			if (!isdigit(C))
			{
				if (C == '.' && dotTrack == 0 && C != input[0]) {
					dotTrack += 1;
				}
				else {
					valid = false; 
				}
			}
		}
		if (valid == true)
		{
			temp = std::stod(input);  //conver the stringto a double
			if (temp < 0)  //now see if its greater than 0 aka not negative
				valid = false;
		}
		if (valid == false)  //added to 
			std::cout << "Invalid input. Must be positive number. Try again.\n";

	} while (valid == false || std::cin.fail());
	
	num = temp; //after validating temp as a proper input, change nu which was passed by reference, to the valided number.
}