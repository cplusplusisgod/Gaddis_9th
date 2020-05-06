#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "iostream"
class Employee
{

protected:
    std::string employeeName;
    int employeeNumber;
    std::string hireDate;

public:
    Employee();
   // Employee(){employeeName ="empty", employeeNumber = 0,hireDate = "empty"; std::cout<<"test.\n";}
    Employee(std::string n, int num, std::string hd)
    {employeeName = n, employeeNumber = num, hireDate = hd;}

    void set_employeeName(std::string n){employeeName = n;}
    void set_employeeName();

    void set_employeeNUmber(int i){employeeNumber = i;}
    void set_employeeNUmber();

    void set_hireDate(std::string hd){hireDate = hd;}
    void set_hireDate();


    std::string get_employeeName()const {return employeeName;}
    int get_employeeNUmber() const {return employeeNumber;}
    std::string get_hireDate() const { return hireDate;}

    virtual ~Employee(){std::cout<<"Employee destructor going off.\n";}
};

#endif // EMPLOYEE_H
