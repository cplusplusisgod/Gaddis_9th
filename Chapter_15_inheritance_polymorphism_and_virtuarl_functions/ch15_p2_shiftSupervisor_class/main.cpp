#include <iostream>
#include "shiftsupervisor.h"
using namespace std;

int main()
{


    ShiftSupervisor first;

    std::cout<<first.get_employeeName()<<std::endl;
    std::cout<<first.get_employeeNUmber()<<std::endl;
    std::cout<<first.get_hireDate()<<std::endl;
    std::cout<<first.get_annual_salary()<<std::endl;
    std::cout<<first.get_annual_prod_bonus()<<std::endl;

    ShiftSupervisor second("paul",66,"12/22/92",500.55,1111.11);


    std::cout<<second.get_employeeName()<<std::endl;
    std::cout<<second.get_employeeNUmber()<<std::endl;
    std::cout<<second.get_hireDate()<<std::endl;
    std::cout<<second.get_annual_salary()<<std::endl;
    std::cout<<second.get_annual_prod_bonus()<<std::endl;


    ShiftSupervisor third("dan",77,"12/12/12");



    std::cout<<third.get_employeeName()<<std::endl;
    std::cout<<third.get_employeeNUmber()<<std::endl;
    std::cout<<third.get_hireDate()<<std::endl;
    std::cout<<third.get_annual_salary()<<std::endl;
    std::cout<<third.get_annual_prod_bonus()<<std::endl;

    return 0;
}
