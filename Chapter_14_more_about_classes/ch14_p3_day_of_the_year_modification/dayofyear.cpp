#include "dayofyear.h"
#include <iostream>
DayOfYear::DayOfYear(std::string month, int day, int monthNum, bool leapYear)
{

    //    std::cout << "when entering day is " << Dayz << std::endl;
    /*
     * If leapYear == true, adds 1 day to February.
     * If the value for day exceeds the number of days,
     * in the selected month, program stops with exit(0).
     */
    if (leapYear) {
        MonthDays[1] = 29;
    } else {
        MonthDays[1] = 28;
    }

    if (day > MonthDays[monthNum]) {
        std::cout << "Error, value for day exceeds number of days in given month.\n";
        exit(0);
    }

    /*
     * initilizing the private member variables Month and Dayz
     * Month is simply given month, a argument passed to the constructor.
     * Dayz value is the sum of all the days in the months up to the chosen month
     * plus "day" which is the number of days in the chosen month.
     *
     * MonthNum is also passed the monthNum value.
    */

    Month = month;
    MonthNum = monthNum;
    leap_year = leapYear;
    for (int count = 0; count < monthNum; count++) {
        //std::cout<<"at "<<count<<" day is "<<Dayz<<std::endl;
        Dayz += MonthDays[count];
    }
    Dayz += day;
    std::cout << Dayz << std::endl;
}

//******************************************************************************************

void DayOfYear::print()
{
    int* n = MonthDays;
    int index = 0;
    int d = Dayz;
    while ((d - *n) > 0) {
        d -= *n;
        n++;
        index++;

        //std::cout<<"here is D "<<d<<std::endl;
    }
    //    std::cout << "here is D " << d << std::endl;
    //    std::cout << "Index is " << index << std::endl;

    std::cout << "SO will this work hmm Month = " << months[index] << " And day = " << d << std::endl;
}

DayOfYear DayOfYear::operator++()
{
    /*
     * Prefix ++
     * If Dayz  == 366, must be a leap year. So loop back to Day 1.
     * If Dayz == 365 and its not a leap year, Loop back to Day 1.
     * else if normal Day value, just increase the day by 1 day.
     * Lastly, returnes the *This pointer which is the DayOfYear object being incremented.
    */

    if (Dayz == 366)
        Dayz = 1;
    else if (Dayz == 365 && leap_year == false)
        Dayz = 1;
    else
        ++Dayz;

    return *this;
}
DayOfYear DayOfYear::operator++(int)
{
    /*
     * Postfix ++
     * Makes a Temp copy of the DayOfYear object being incremented.
     * If Dayz already equals 366, leap year must have been true, so loop back to Day 1.
     * Else if Dayz = 365 and its not a leap year, loop back to Day1.
     * Else if its just a normal date, increase it by 1 day.
     * Lastly, the Temp copy is returned with the pre - incremented Dayz value.
    */

    DayOfYear Temp = *this;
    if (Dayz == 366)
        Dayz = 1;
    else if (Dayz == 365 && leap_year == false)
        Dayz = 1;
    else
        Dayz++;

    //std::cout<<"WORKING? copy DAYZ = "<<Temp.Dayz<<" and OG this = "<<this->Dayz<<std::endl;
    return Temp;
}

DayOfYear DayOfYear::operator--()
{
    /*
     * Prefix --
     * If Dayz is 1 (January 1st) and the leap year is true, theres 366 days total, so
     * it loops to the end,Day 366 (Decemeber 31st).
     * If else if its (January 1st) and its not a leap year, theres 365 days total
     * so it loops to the end Day 365 (Decemeber 31st).
     * Else its a normal day so it will just subtract 1 day.
     * Lastly, it returns the *this pointer which is ptr to the DayOfYear object
     * being decremented
    */

    if (Dayz == 1 && leap_year == true)
        Dayz = 366;
    else if (Dayz == 1 && leap_year == false)
        Dayz = 365;
    else
        --Dayz;

    return *this;
}

DayOfYear DayOfYear::operator--(int)
{


    DayOfYear Temp = *this;

    if(Dayz == 1 && leap_year == true)
        Dayz = 366;
    else if(Dayz == 1 && leap_year == false)
        Dayz = 365;
    else
        Dayz--;
    return Temp;
}

//61 = march 1st (none ly)
int DayOfYear::MonthDays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
const std::string DayOfYear::months[] = { "January ", "February ", "March ", "April ", "May ",
    "June ", "July ", "August ", "September ", "October", "November", "December" };
