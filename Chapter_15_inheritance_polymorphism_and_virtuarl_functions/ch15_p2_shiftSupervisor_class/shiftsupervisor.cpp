#include "shiftsupervisor.h"
#include <iostream>
ShiftSupervisor::ShiftSupervisor() : Employee()
{
    //Employee's default constructor will also set all strings to "" and values to 0.
    AnnualSalary = 0, AnnualProdBonus = 0;

}

ShiftSupervisor::ShiftSupervisor(std::string name,int id,std::string hire_date) :Employee(name,id,hire_date)
{
    set_annual_salary();
    set_annual_prod_bonus();
}


ShiftSupervisor::ShiftSupervisor(std::string name,int employee_num, std::string hire_date, double annual_salary, double annual_prod_bonus) : Employee(name, employee_num, hire_date)
{
    AnnualSalary =  annual_salary;
    AnnualProdBonus = annual_prod_bonus;

}

void ShiftSupervisor::set_annual_salary()
{
    double amnt;
    std::cout<<"Enter the annual salary amount for the shift supervisor: ";
    std::cin>>amnt;

    AnnualSalary = amnt;
}


void ShiftSupervisor::set_annual_prod_bonus()
{
    double amnt;
    std::cout<<"Enter the annual production bonus the shift supervisor has earned:  ";
    std::cin>>amnt;

    AnnualProdBonus =  amnt;
}

