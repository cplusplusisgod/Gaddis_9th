#include "TimeOff.h"
#include "NumDays.h"
#include <string>
#include <limits>
TimeOff::TimeOff()
{
	SetName();
	SetId();
}
void TimeOff::SetName()
{
	bool NameOnlyletters = false; //true because of how the checking works. Its a loop and if it finds otherwise, will change it to false.
	bool ValidNameLen = false;
	bool IdOnlynumbers = false;
	bool IdValidLen = false;
	std::string name = " ";

	do {

		std::cout << "\tYou must set a user name (letters only between 2 - 15 letters) and ID (5 numbers)\n";
		std::cout << "Username: ";
		std::getline(std::cin, name);

		/*
		Checking name length. Re cast to false if not incase of roll over test passes
		*/
		if (name.size() >= 2 && name.size() <= 15) {
			std::cout << "Valid length = true:\n";
			ValidNameLen = true;
		}
		else
		{
			std::cout << "Invalid length = false :\n";
			ValidNameLen = false;
		}

		/*
		Handling checking the string for anything not alphabetical (letters) including spaces.
		*/
		bool NoneAlphafound = false; //used in the loop, if none alpha is found its changed to true, which is used to determine is NameOnlyLetters is true or false.
		for (char K : name)
		{
			if (!isalpha(K))
			{
				std::cout << "Only letters in name = false:\n";
				NoneAlphafound = true;
				break;
			} //keep eye on these conditions / this area incase of validation issues later

		}
		NoneAlphafound == true ? NameOnlyletters = false : NameOnlyletters = true;
		if (NameOnlyletters)
			std::cout << "Only letters in name = true:\n";



	} while (NameOnlyletters == false || ValidNameLen == false);

	Name = name; //If it passes the do while loop, must have passed all the tests so now the private member valirable Name is initalized with the user name input.
}

void TimeOff::SetId()
{
	int id = 0;
	std::cout << "Enter a 5 digit number for your ID\n";
	std::cout << "ID Number: ";
	std::cin >> id;
	while (std::cin.fail() || std::to_string(id).length() != 5)  //WORKS BETTER THAN I THOUGHT! 00000 dosnt count or anything, minimum is 10000 to count NICE
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid ID number input. Please try again.\n";
		std::cout << "ID Number: ";
		std::cin >> id;
	}
	ID = id;
}

void TimeOff::AdjustSickHrs(float hrs)
{
	float currentHrs = maxSickDays.getHours();
	if ((currentHrs + hrs) > 50)
	{
		std::cout << "Cannot add hours. Exceeds maxSickHours\n";
	}
	else if ((currentHrs + hrs) < 0)
	{
		std::cout << "\tAfter adjustment Sick time is avilable is now 0\n";
		maxSickDays.setHours(0.0);
	}
	else
	{
		maxSickDays.setHours(currentHrs + hrs);
		std::cout << "\n\tHours successfully added to max sick time:\n"
			"\tSick time available: " << maxSickDays.getDays() << " Days from " << maxSickDays.getHours() << " Hours\n";
	}

}

void TimeOff::AdjustSickTaken(float hrs)
{
	float currentHrs = sickTaken.getHours();
	if (hrs <= 0)
		std::cout << "Value to adjust sick time taken must be >= 1\n";
	else
	{
		std::cout << "\tSick time taken was " << sickTaken.getHours();
		sickTaken.setHours(currentHrs + hrs);
		std::cout << "\t Adjust to " << sickTaken.getHours();
	}
}

void TimeOff::AdjustVacationHrs(float hrs)
{
	float currentHrs = maxVacation.getHours();
	if ((currentHrs + hrs) > 50)
	{
		std::cout << "Cannot add hours. Exceeds max Vacation time allowed.\n";
	}
	else if ((currentHrs + hrs) < 0)
	{
		std::cout << "\tAfter adjustment max Vacation time avilable is now 0\n";
		maxVacation.setHours(0.0);
	}
	else
	{
		maxVacation.setHours(currentHrs + hrs);
		std::cout << "\n\tHours successfully added to max vacation time:\n"
			"\tVacation time time available: " << maxVacation.getDays() << " Days from " << maxVacation.getHours() << " Hours\n";
	}

}

void TimeOff::AdjustVacationTaken(float hrs)
{
	float currentHrs = vacTaken.getHours();
	if (hrs <= 0)
		std::cout << "Value to adjust Vacation time taken must be >= 1\n";
	else
	{
		std::cout << "\tVacation time taken was " << vacTaken.getHours();
		vacTaken.setHours(currentHrs + hrs);
		std::cout << "\t Adjust to " << vacTaken.getHours();
	}
}

void TimeOff::AdjustMaxUnpaied(float hrs)
{
	float currentHrs = maxUnpaid.getHours();
	if ((currentHrs + hrs) > 50)
	{
		std::cout << "Cannot add hours. Exceeds max unpaied time allowed.\n";
	}
	else if ((currentHrs + hrs) < 0)
	{
		std::cout << "\tAfter adjustment max unpaied time avilable is now 0\n";
		maxUnpaid.setHours(0.0);
	}
	else
	{
		maxUnpaid.setHours(currentHrs + hrs);
		std::cout << "\n\tHours successfully added to max unpaied time:\n"
			"\tunpaied time time available: " << maxUnpaid.getDays() << " Days from " << maxUnpaid.getHours() << " Hours\n";
	}
}

void TimeOff::AdjustUnpaiedTaken(float hrs)
{
	float currentHrs = unpaidTaken.getHours();
	if (hrs <= 0)
		std::cout << "Value to adjust unpaied time taken must be >= 1\n";
	else
	{
		std::cout << "\tunpaid time taken was " << unpaidTaken.getHours();
		unpaidTaken.setHours(currentHrs + hrs);
		std::cout << "\t Adjust to " << unpaidTaken.getHours();
	}
}