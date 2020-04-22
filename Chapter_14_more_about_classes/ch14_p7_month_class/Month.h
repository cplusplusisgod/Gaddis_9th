#pragma once
#include <string>
class Month
{
private:
	std::string Name = " ";
	int MonthNumber = 1;

public:
	Month() { Name = "January", MonthNumber = 1; }
	Month(std::string);
};

