#include "employee.h"
#include <string>
Employee::Employee(){
    set_employeeName();
    set_employeeNUmber();
    set_hireDate();
}

void Employee::set_employeeName()
{
    std::string name;
    std::cout<<"Enter employee's name: ";
    std::getline(std::cin,name);

    employeeName = name;
}

void Employee::set_employeeNUmber()
{
    int id;
    std::cout<<"Enter employee's ID number: ";
    std::cin>>id;

    employeeNumber =  id;
}

void Employee::set_hireDate()
{
    std::string date;
    std::cout<<"Enter the employees hire date in mm/dd/yyyy format: ";
    std::cin>>date;
}
