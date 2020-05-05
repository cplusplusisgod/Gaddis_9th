#include "productionworker.h"

ProductionWorker::ProductionWorker(std::string name, std::string hiredate, int num, int shift, double hrpay) : Employee(name,num,hiredate)
{

    set_Shift(shift);
    hourlyPay =  hrpay;

}
