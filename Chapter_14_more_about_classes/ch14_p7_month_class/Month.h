#pragma once
#include <string>
#include <iostream>
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
	std::string getMonthName() { return Name; }
	int getMonthNum() { return MonthNumber; }
	static const std::string monthz[12];

	//overloads
	Month operator ++();
	Month operator ++(int);
	Month operator --();
	Month operator --(int);

	friend std::ostream& operator << (std::ostream&, const Month&);
	friend std::istream& operator >> (std::istream&, Month&);
};

