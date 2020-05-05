#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H
#include "employee.h"

class ShiftSupervisor : public Employee
{
private:
    double AnnualSalary;
    double AnnualProdBonus;
public:
    ShiftSupervisor();
    ShiftSupervisor(std::string,int,std::string);
    ShiftSupervisor(std::string,int,std::string,double, double);

    void set_annual_salary();
    void set_annual_salary(double amnt){AnnualSalary = amnt;}

    void set_annual_prod_bonus();
    void set_annual_prod_bonus(double amnt){AnnualProdBonus = amnt;}

    double get_annual_salary()const {return AnnualSalary;}
    double get_annual_prod_bonus() const {return AnnualProdBonus;}


};

#endif // SHIFTSUPERVISOR_H
