#include "PersonData.h"
#include <iostream>
PersonData::PersonData() {

}


//set_last name with no argument
void PersonData::set_lastname()
{
	std::string l_name;
	bool correct_size;
	bool all_alpha;

	do {
		correct_size = true;
		all_alpha = true;

		l_name.clear();

		std::cout << "Enter Last Name: ";
		std::getline(std::cin, l_name);

		for (char c : l_name)
		{
			if (!isalpha(c)) {
				std::cout << "Last name may only contain letters.\n";
				all_alpha = false;
				break;
			}

		}

		if (l_name.length() < 1 || l_name.length() > 20)
		{
			std::cout << "Last name must be between 1 - 20 characters long.\n";
			correct_size = false;
		}

	} while (all_alpha != true || correct_size != true);

	//passed the test/loop now set the member variable to l_name.
	LastName = l_name;

}

//check and set lastname with string argument
void PersonData::set_lastname(std::string l_name) {

	/* Checks the string the user inputed for l_name. If it fails to past the requirments
	it will trigger the bools to be false. At the end if any of the bools are false (the string failed one or more test)
	then the set_lastname() function is called. Which has the same tests word for word, except in a loop to continue
	untill proper input is done. */

	bool correct_size = true;
	bool all_alpha = true;

	for (char c : l_name)
	{

		if (!isalpha(c)) {
			std::cout << "Last name may only contain letters.\n";
			all_alpha = false;
			break;
		}
	}

	if (l_name.length() < 1 || l_name.length() > 20)
	{
		std::cout << "Last name must be between 1 - 20 characters long.\n";
		correct_size = false;
	}

	//here if the string failed any of the test, the other set_lastname() function that has a loop is called.
	if (correct_size == false || all_alpha == false)
	{
		set_lastname();
	}// if the string did pass all the test, then its a valid lastName string.
	else if (correct_size == true && all_alpha == true)
	{
		LastName = l_name;
	}
}


void PersonData::set_firstname()
{
	std::string f_name;
	bool correct_size;
	bool all_alpha;

	do {
		correct_size = true;
		all_alpha = true;

		f_name.clear();

		std::cout << "Enter First Name: ";
		std::getline(std::cin, f_name);

		for (char c : f_name)
		{
			if (!isalpha(c)) {
				std::cout << "First name may only contain letters.\n";
				all_alpha = false;
				break;
			}

		}

		if (f_name.length() < 1 || f_name.length() > 20)
		{
			std::cout << "First name must be between 1 - 20 characters long.\n";
			correct_size = false;
		}

	} while (all_alpha != true || correct_size != true);

	//passed the test/loop now set the member variable to l_name.
	FirstName = f_name;
}


//check and set firstname with string argument
void PersonData::set_firstname(std::string f_name) {

	/* Checks the string the user inputed for f_name. If it fails to past the requirments
	it will trigger the bools to be false. At the end if any of the bools are false (the string failed one or more test)
	then the set_firstname() function is called. Which has the same tests word for word, except in a loop to continue
	untill proper input is done. */

	bool correct_size = true;
	bool all_alpha = true;

	for (char c : f_name)
	{

		if (!isalpha(c)) {
			std::cout << "first name may only contain letters.\n";
			all_alpha = false;
			break;
		}
	}

	if (f_name.length() < 1 || f_name.length() > 20)
	{
		std::cout << "First name must be between 1 - 20 characters long.\n";
		correct_size = false;
	}

	//here if the string failed any of the test, the other set_firstname() function that has a loop is called.
	if (correct_size == false || all_alpha == false)
	{
		set_firstname();
	}// if the string did pass all the test, then its a valid lastName string.
	else if (correct_size == true && all_alpha == true)
	{
		FirstName = f_name;
	}
}


//function to check the address and set it
void PersonData::set_address()
{
	std::string address;
	bool correct_size;
	bool correct_type;
	do {
		correct_size = true;
		correct_type = true;
		address.clear();
		std::cout << "Enter Address.  (3 - 5 numbers): ";
		std::getline(std::cin, address);

		if (address.length() > 5 || address.length() < 3)
		{
			std::cout << "Address must be between 3-5 digits.\n";
			correct_size = false;
		}

		for (char c : address)
		{
			if (!isdigit(c))
			{
				std::cout << "Address must only contain digits.\n";
				correct_type = false;
				break;
			}
		}

	} while (correct_size == false || correct_type == false);

	Address = address;
}


void PersonData::set_address(std::string address)
{
	bool correct_size = true;
	bool correct_type = true;

	if (address.length() > 5 || address.length() < 3)
	{
		std::cout << "Address must be between 3-5 digits.\n";
		correct_size = false;
	}

	for (char c : address)
	{
		if (!isdigit(c))
		{
			std::cout << "Address must only contain digits.\n";
			correct_type = false;
			break;
		}
	}

	if (correct_size == false || correct_type == false)
	{
		set_address();
	}
	else if (correct_size && correct_type)
	{
		Address = address;
	}

}