#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H
#include <string>

class DayOfYear {
private:
    std::string Month = "";
    int MonthNum = 0;
    int Dayz = 0; //day of the year is number of days in the month + the day number given
    bool leap_year = false;

public:
    DayOfYear(std::string, int, int, bool);
    void print();
    int PrintDayz(){return Dayz;}
    static int MonthDays[];
    static const std::string months[];

  DayOfYear operator ++();
  DayOfYear operator ++(int);
};
#endif // DAYOFYEAR_H
