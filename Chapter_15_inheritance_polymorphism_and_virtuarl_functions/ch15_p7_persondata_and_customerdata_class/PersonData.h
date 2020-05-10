#pragma once
#include <string>
class PersonData
{

protected:
	std::string LastName;
	std::string FirstName;
	std::string Address;
	std::string City;
	std::string State;
	std::string Zip;
	std::string Phone;

public:
	PersonData();
	void set_lastname();
	void set_lastname(std::string);
	void set_firstname();
	void set_firstname(std::string);
	
	void set_address();
	void set_address(std::string);
};

