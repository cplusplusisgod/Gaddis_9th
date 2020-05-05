#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "employee.h"

class ProductionWorker : public Employee
{
private:
    int Shift;
    double hourlyPay;
public:
    ProductionWorker() : Employee()
    {Shift = 0, hourlyPay = 0;}
    ProductionWorker(int i) : Employee()
    {Shift = i; }
    ProductionWorker(std::string,std::string,int,int,double);

    void set_Shift(int i)
    {
        if(i == 1 || i == 2)
            Shift  = i;
        else
            Shift = 0;
    }

    int get_Shift()const {return Shift;}

    void set_hourlyPay(double d){hourlyPay = d;}

    double get_hourlyPay() const {return hourlyPay;}

};

#endif // PRODUCTIONWORKER_H
