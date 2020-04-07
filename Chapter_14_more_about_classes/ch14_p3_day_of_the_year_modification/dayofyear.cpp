#include "dayofyear.h"
#include <iostream>
DayOfYear::DayOfYear(std::string month, int day, int monthNum, bool leapYear)
{
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
        Dayz += MonthDays[count];
    }
    Dayz += day;
    std::cout << Dayz << std::endl;
}

void DayOfYear::print()
{
    /*
     * n is a pointer to the array MonthDays which holds the number of days in each month.
     * d is a copy of Dayz, which is the day #of the year,
     * (january 1st = 1, December 31st = 365 or 366)...ect
     * The private varible Dayz is the sum of all the days in all
     * the months up to the selected month, plus the days in that month
     * upto the selected date day.
     * Thus, the loop reverses this by subtracting the number of days value
     * for each month from Dayz while the result is greater than 0. The number of
     * times the loop occures (index) corolates with the placement in the months[] array
     * which gives the name of the month for the selected date. The remainder (d) is
     * the day of the month the selected date matches up to.
    */
    int* n = MonthDays;
    int index = 0;
    int d = Dayz;
    while ((d - *n) > 0) {
        d -= *n;
        n++;
        index++;
    }
    std::cout << months[index] << " " << d;
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
    /*
     * Postfix --
     * Makes a DayOfYear object copy (Temp) of the DayOfYear object being decremented (this).
     * If Dayz is 1 (january 1st), it loops to the last day of year.
     * Depending on if its a leap year or not the last day of the year
     * will either be 365 or 366 (December 31st).
     * else will just subtract 1 day from the date.
     */

    DayOfYear Temp = *this;

    if (Dayz == 1 && leap_year == true)
        Dayz = 366;
    else if (Dayz == 1 && leap_year == false)
        Dayz = 365;
    else
        Dayz--;
    return Temp;
}
//monthDays is none static/const because February value needs to be flexible
int DayOfYear::MonthDays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//Static const array of month names.
const std::string DayOfYear::months[] = { "January ", "February ", "March ", "April ", "May ",
    "June ", "July ", "August ", "September ", "October", "November", "December" };
