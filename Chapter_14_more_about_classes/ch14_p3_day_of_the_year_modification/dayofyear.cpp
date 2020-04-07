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
    if (Dayz == 365 && leap_year == false)
        Dayz = 1;
    else if (Dayz == 366)
        Dayz = 1;
    else
        Dayz += 1;

    return *this;
}
DayOfYear DayOfYear::operator++(int)
{
    DayOfYear Temp = *this;
    if(Dayz == 366)
        Dayz = 1;
    else if(Dayz == 365 && leap_year == false)
        Dayz = 1;
    else
    Dayz++;

  //std::cout<<"WORKING? copy DAYZ = "<<Temp.Dayz<<" and OG this = "<<this->Dayz<<std::endl;
    return Temp;
}



//61 = march 1st (none ly)
int DayOfYear::MonthDays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
const std::string DayOfYear::months[] = { "January ", "February ", "March ", "April ", "May ",
    "June ", "July ", "August ", "September ", "October", "November", "December" };
