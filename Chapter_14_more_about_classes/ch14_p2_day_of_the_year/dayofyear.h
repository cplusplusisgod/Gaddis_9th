#ifndef DAYOFYEA_H
#define DAYOFYEA_H
#include <iostream>
#include <string>
class DayOfYear {
private:
    int Day;
    bool Leap_year = false;

public:
    DayOfYear(int n, bool b) { Day = n, Leap_year = b; }
    void Print();
    static const std::string months[];
    static const int days[];
};

#endif
