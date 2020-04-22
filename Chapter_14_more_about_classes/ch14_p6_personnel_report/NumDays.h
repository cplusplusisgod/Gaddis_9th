#pragma once
#include <iomanip>
#include <iostream>
class NumDays {
private:
	float Hours = 0.0f;

public:
	NumDays() { Hours = 0.0f; }
	NumDays(float hrs);
	void setHours(float hrs) { Hours = hrs; }
	float getHours() { return Hours; }
	float getDays() { return Hours / 8.0f; }
	NumDays operator=(const NumDays&);
	friend std::ostream& operator <<(std::ostream& strm, const NumDays& right);
	float operator+(const NumDays&);
	float operator-(const NumDays&);
	float operator++();
	float operator--();
	float operator++(int);
	float operator--(int);
};

