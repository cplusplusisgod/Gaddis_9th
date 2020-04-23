#pragma once
#include <string>
class Month
{
private:
	std::string Name = " ";
	int MonthNumber = 1;

public:
	Month() { Name = "January", MonthNumber = 1; }
	Month(std::string s) { setMonth(s); } //setmonth is a overloaded function, one takes int one takes string
	Month(int n) { setMonth(n); }
	void setMonth(std::string);
	void setMonth(int);
	void getMonthInfo();
	static const std::string monthz[12];

	//overloads
	Month operator ++();
	Month operator ++(int);
};

