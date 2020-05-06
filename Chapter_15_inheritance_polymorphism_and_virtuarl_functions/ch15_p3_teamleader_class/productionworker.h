#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "employee.h"

class ProductionWorker : public Employee
{
protected:
    int Shift;
    double hourlyPay;
public:
    ProductionWorker() : Employee()
    {set_Shift(), set_hourlyPay();}
    ProductionWorker(int i) : Employee()
    {Shift = i; }
    ProductionWorker(std::string,std::string,int,int,double);

    void set_Shift();
    void set_Shift(int);//move this to .cpp and add checking similar to the other overload


    int get_Shift()const {return Shift;}

    void set_hourlyPay();
    void set_hourlyPay(double d){hourlyPay = d;} //move this to .cpp and expanded it like

    double get_hourlyPay() const {return hourlyPay;}

};

#endif // PRODUCTIONWORKER_H
