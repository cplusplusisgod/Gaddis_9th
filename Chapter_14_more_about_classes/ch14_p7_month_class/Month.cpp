#include "Month.h"
#include <iostream>
#include <string>
Month::Month(std::string name)
{
	std::string month_names[12] = { "January", "February", "March", "April", "May",
	"June", "July", "August", "September", "October", "November", "December" };
	std::string temp_1;
	std::string temp_2;
	bool found = false;
	int month_num = 0;

	//convert the user's string to all lower case, then uppercase first letter.
	//Also breaks the conversion loop if a none alpha element is found.
	for (char c : name)
	{
		if (!isalpha(c)) {
			break;
		}else 
			temp_1 += tolower(c);
	}
	temp_1[0] = toupper(temp_1[0]);
	/*
	All month names are stored in order in an string array "month_names[12]"
	A loop goes through each month in the array and keeps count of how many times the loop occures.
	is a match to a month name is found, a bool trigger "found" is switched to true
	Then the private variable "Name" is passed the user string thats a match after conversion. "temp1_1"
	The private variable "MonthNumber" is also passed the loop counter "month_num".
	Lastly, the loop is ended early with break; as it was a success.
	*/
	for (std::string s : month_names)
	{
		month_num++; //a loop counter which will give the month #. If the loop runs 12 times to find decemeber month_num will be = 12;
		if (s == temp_1) {
			found = true;
			Name = temp_1;
			MonthNumber = month_num;
			break;
		}
	}
	/*
	If the original string passed was not a valid month name in the "month_names[12]" array than the bool found will still be = false.
	Triggering this while loop that will reset "month_num" back to 0, aswell as reset the "temp_1" string to be reused.
	Then just like before, 

	*/
		while (found == false)
		{
			month_num = 0; //resetting to 0 due to previous loop check occuring.
			temp_1.clear();  //clear the string 
			std::cout << "Month name given did not match any known month. Please try again.\n";
			getline(std::cin, name);
			//formating the inputted string  starts
			for (char c : name)
			{
				if (!isalpha(c)) {
					break;
				}
				else
					temp_1 += tolower(c);
			}
			temp_1[0] = toupper(temp_1[0]);
			//formatting the inputted string ends 

			//checking if match to a month name begins
			for (std::string s : month_names)
			{
				month_num++;
				if (s == temp_1) {
					found = true;
					Name = temp_1;
					MonthNumber = month_num;
					break;
				}
			}
			//checking if match to a month name ends
		}
}

