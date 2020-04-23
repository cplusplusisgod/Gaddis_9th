#include "Month.h"
#include <iostream>
#include <limits>
#include <string>
#include <memory>
const std::string Month::monthz[] = { "January", "February", "March",
									  "April",   "May",      "June",
									  "July",    "August",   "September",
									  "October", "November", "December" };

void
Month::setMonth(std::string name)
{

	std::string temp_1;
	bool found = false;
	int month_num = 0;

	// convert the user's string to all lower case, then uppercase first letter.
	// Also breaks the conversion loop if a none alpha element is found.
	for (char c : name) {
		if (!isalpha(c)) {
			break;
		}
		else
			temp_1 += tolower(c);
	}
	temp_1[0] = toupper(temp_1[0]);
	/*
	All month names are stored in order in an string array "month_names[12]"
	A loop goes through each month in the array and keeps count of how many times
	the loop occures. is a match to a month name is found, a bool trigger "found"
	is switched to true Then the private variable "Name" is passed the user string
	thats a match after conversion. "temp1_1" The private variable "MonthNumber"
	is also passed the loop counter "month_num". Lastly, the loop is ended early
	with break; as it was a success.
	*/
	for (std::string s : monthz) {

		month_num++; // a loop counter which will give the month #. If the loop runs
					 // 12 times to find decemeber month_num will be = 12;
		if (s == temp_1) {
			found = true;
			Name = temp_1;
			MonthNumber = month_num;
			break;
		}
	}
	/*
	If the original string passed was not a valid month name in the
	"month_names[12]" array than the bool found will still be = false. Triggering
	this while loop that will reset "month_num" back to 0, aswell as reset the
	"temp_1" string to be reused. Then just like before,

	*/
	while (found == false) {
		month_num = 0;  // resetting to 0 due to previous loop check occuring.
		temp_1.clear(); // clear the string
		std::cout
			<< "Month name given did not match any known month. Please try again.\n";
		getline(std::cin, name);
		// formating the inputted string  starts
		for (char c : name) {
			if (!isalpha(c)) {
				break;
			}
			else
				temp_1 += tolower(c);
		}
		temp_1[0] = toupper(temp_1[0]);
		// formatting the inputted string ends

		// checking if match to a month name begins
		for (std::string s : monthz) {
			month_num++;
			if (s == temp_1) {
				found = true;
				Name = temp_1;
				MonthNumber = month_num;
				break;
			}
		}
		// checking if match to a month name ends
	}
	std::cout << "month name is " << temp_1 << std::endl;
	std::cout << "month num is " << month_num << std::endl;
}

void
Month::setMonth(int monthNum)
{
	/*
	 if the argument monthNum is not in the valid range for a month (1 - 12)
	 active while loop to get a new valid argument. If while getting the new
	 argument the user puts in somthing crazy like a char or space, the
	 if(std::cin.fail()) statment will be triggered and clear then ignore the
	 entire cin stream.
	*/
	while (monthNum < 1 || monthNum > 12 || std::cin.fail()) // the cin.fail() is just a catch all, possible not needed.
	{
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		std::cout
			<< "Invalid month number. Value must be between 1 and 12. Try again\n";
		std::cin >> monthNum;
	}

	/*
	 since the array starts at 0, must subtract 1 to match. ex: April is the
	 4th month of the year but is found in month_names[3]. Decemeber is the 12th
	 but found in month_names[11].
	*/
	MonthNumber = monthNum;
	Name = monthz[monthNum - 1];
}


void Month::getMonthInfo()
{
	std::cout << "Month: " << Name << "\nMonth #: " << MonthNumber << std::endl;
}


//************ OVERLOADED SECTION ***************

//presfix ++
Month Month::operator++()
{
	if (MonthNumber == 12)
		setMonth(1);
	else
		setMonth(MonthNumber + 1);

	return *this;
}

//postfix ++
Month Month::operator++(int)
{
	//use of unique_ptr probably not needed since it requires a include file just for it.
	std::unique_ptr<Month> temp(new Month);
	*temp = *this;

	if (MonthNumber == 12)
		setMonth(1);
	else
		setMonth(MonthNumber + 1);

	return *temp;

}


