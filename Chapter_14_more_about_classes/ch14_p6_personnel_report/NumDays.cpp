#include "NumDays.h"
NumDays::NumDays(float h) {
	Hours = h;
}
NumDays NumDays::operator=(const NumDays& right) {
	if (this != &right) {
		Hours = right.Hours;
	}
	return *this;
}

float NumDays::operator+(const NumDays& right) {
	return Hours + right.Hours;
}
float NumDays::operator-(const NumDays& right) {
	return Hours - right.Hours;
}

float NumDays::operator++() {
	return ++Hours;
}

float NumDays::operator--() {
	return --Hours;
}

float NumDays::operator++(int) {
	return Hours++;
}

float NumDays::operator--(int) {
	return Hours--;
}
std::ostream& operator <<(std::ostream& strm, const NumDays& right)
{
	strm << right.Hours << " Hours. ";
	return strm;
}
