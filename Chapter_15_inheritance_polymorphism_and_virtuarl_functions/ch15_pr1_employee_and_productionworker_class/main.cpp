#include <iostream>
#include "productionworker.h"
using namespace std;

int main()
{
    ProductionWorker first("paul","12/22/92",67,1,99);

//    first.set_Shift(1);
//    first.set_employeeName("paul");
//    first.set_employeeNUmber(66);
//    first.set_hireDate("12/22/92");
//    first.set_hourlyPay(8);

    std::cout<<"Shift is :"<<first.get_Shift()<<std::endl;
    std::cout<<"Employee name is : "<<first.get_employeeName()<<std::endl;
    std::cout<<"EMployee number is : "<<first.get_employeeNUmber()<<std::endl;
    std::cout<<"Employee hire date is : "<<first.get_hireDate()<<std::endl;
    std::cout<<"Employee hourly pay is : "<<first.get_hourlyPay()<<std::endl;




    return 0;
}
