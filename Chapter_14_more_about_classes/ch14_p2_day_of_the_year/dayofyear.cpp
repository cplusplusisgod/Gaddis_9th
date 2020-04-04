#include "dayofyear.h"
#include <limits>

void DayOfYear::Print()
{
    int January = 31, February = 59, March = 90, April = 120,
        May = 151, June = 181, July = 212, August = 243,
        September = 273, October = 304, November = 334, December = 365;

    int n = Day - 1; //n is the user value [Date] - 1 to fit arrays that start at 0 better.

    if (Leap_year) {
        February += 1, March += 1, April += 1, May += 1, June += 1, July += 1;
        August += 1, September += 1, October += 1, November += 1, December += 1;
    }

    if (Day <= January) { //1 - 31
        std::cout << months[0] << days[n] << std::endl;
    } else if (Day <= February) { //32 - 59;
        std::cout << months[1] << days[n - January] << std::endl;
    } else if (Day <= March) { //60 - 90;
        std::cout << months[2] << days[n - February] << std::endl;
    } else if (Day <= April) { //91 - 120;
        std::cout << months[3] << days[n - March] << std::endl;
    } else if (Day <= May) { //121 - 151
        std::cout << months[4] << days[n - April] << std::endl;
    } else if (Day <= June) { // 152 - 181
        std::cout << months[5] << days[n - May] << std::endl;
    } else if (Day <= July) { //182 - 212
        std::cout << months[6] << days[n - June] << std::endl;
    } else if (Day <= August) { //213 - 243
        std::cout << months[7] << days[n - July] << std::endl;
    } else if (Day <= September) { // 244 - 273;
        std::cout << months[8] << days[n - August] << std::endl;
    } else if (Day <= October) { //274 - 304;
        std::cout << months[9] << days[n - September] << std::endl;
    } else if (Day <= November) { //305 - 334;
        std::cout << months[10] << days[n - October] << std::endl;
    } else if (Day <= December) { //335 - 365;
        std::cout << months[11] << days[n - November] << std::endl;
    }
}

const std::string DayOfYear::months[] = { "January ", "February ", "March ", "April ", "May ",
    "June ", "July ", "August ", "September ",
    "October ", "November ", "December " };
//days 1-31 for months.
const int DayOfYear::days[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
    21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 };
