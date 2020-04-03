#pragma once

#ifndef DAYOFYEA_H
#define DAYOFYEA_H


#include <string>
#include <iostream>
class DayOfYear
{
private:
    int Day;
public:
    DayOfYear(int n){Day = n;}
    void Print();
    static const std::string months[];
    static const int months_length_nly[];
    static const int months_length_ly[];
    static const int days[];

};




#endif // DAYOFYEA_H
