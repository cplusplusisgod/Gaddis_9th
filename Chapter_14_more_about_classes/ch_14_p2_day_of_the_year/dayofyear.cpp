#include "dayofyear.h"
#include <string>
void DayOfYear::Print()
{
    int n = Day - 1; //n is the user value [Date] - 1 to fit arrays that start at 0 better.
    int index = 0;

    //January 1 : 31
    if (Day <= 31) {
        std::cout << months[0] << days[n] << std::endl;
    }

    //February 2 : 28
    if (Day >= 32 && Day <= 59) {
        index = 31;
        std::cout << months[1] << days[n - index] << std::endl;
    }

    //March 3 : 31
    if (Day >= 60 && Day <= 90) {
        index = 59;
        std::cout << months[2] << days[n - index] << std::endl;
    }

    //April 4 : 30
    if (Day >= 91 && Day <= 120) {
        index = 90;
        std::cout << months[3] << days[n - index] << std::endl;
    }

    //May 5 : 31
    if (Day >= 121 && Day <= 151) {
        index = 120;
        std::cout << months[4] << days[n - index] << std::endl;
    }

    //June 6 : 30
    if (Day >= 152 && Day <= 181) {
        index = 151;
        std::cout << months[5] << days[n - index];
    }

    //July 7 : 31
    if (Day >= 182 && Day <= 212) {
        index = 181;
        std::cout << months[6] << days[n - index];
    }

    //August 8 : 31
    if (Day >= 213 && Day <= 243) {
        index = 212;
        std::cout << months[7] << days[n - index] << std::endl;
    }

    //Septemeber 9 : 30
    if (Day >= 244 && Day <= 273) {

        index = 243;
        std::cout << months[8] << days[n - index] << std::endl;
    }
    //October 10 : 31
    if (Day >= 274 && Day <= 304) {
        index = 273;
        std::cout << months[9] << days[n - index] << std::endl;
    }
    //Novemeber 11 : 30

    if (Day >= 305 && Day <= 334) {
        index = 304;
        std::cout << months[10] << days[n - index] << std::endl;
    }
    //December 12 : 31
    if (Day >= 335 && Day <= 365) {
        index = 334;
        std::cout << months[11] << days[n - index] << std::endl;
    }
}

const std::string DayOfYear::months[] = { "January ", "February ", "March ", "April ", "May ",
                                          "June ", "July ", "August ", "September ",
                                          "October ", "November ", "December " };
//for none leap_year.
const int DayOfYear::months_length_nly[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//for leap_year.
const int DayOfYear::months_length_ly[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//days 1-31 for months.
const int DayOfYear::days[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
    21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 };
