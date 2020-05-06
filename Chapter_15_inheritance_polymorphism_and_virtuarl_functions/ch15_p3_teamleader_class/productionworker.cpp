#include "productionworker.h"

ProductionWorker::ProductionWorker(std::string name, std::string hiredate, int num, int shift, double hrpay) : Employee(name,num,hiredate)
{

    set_Shift(shift);
    hourlyPay =  hrpay;

}

void ProductionWorker::set_Shift()
{
    char shift;
    do{
    std::cin.clear();
    std::cin.ignore(1000,'\n');
    std::cout<<"Enter either 1 or 2 for the Production worker shift time: ";
    std::cin.get(shift);
    }while(shift != '1' && shift != '2');

    Shift = shift;
}

void ProductionWorker::set_Shift(int s)
{
    char shift = s;

    while(std::cin.fail() || (shift != '1' && shift != '2'))
    {
        std::cout<<"Error! Shift can only be 1 or 2. PLease try again\n";
        std::cin.clear();
        std::cin.ignore(1000,'\n');
        std::cout<<"Enter either 1 or 2 for the Production worker shift time: ";
        std::cin.get(shift);
    }
    Shift =  shift;

}


void ProductionWorker::set_hourlyPay()
{
    double pay;
    std::cout<<"Set the hourly pay for the Production worker: \n";
    std::cin>>pay;

    while(std::cin.fail() || pay < 10.00 || pay > 999.00)
    {
        if(std::cin.fail()){
            std::cout<<"Error! Hourly pay must be a value. Try again.\n";
        }
        else if(pay < 10.00){
            std::cout<<"Error! Pay must be >= $10.00. Try again.\n";
        }
        else if(pay > 999.00 )
        {
            std::cout<<"Error! Yo no one here gets payed that much. Try again.\n";
        }

        std::cin.clear();
        std::cin.ignore(10000,'\n');
        std::cout<<"Please set the Hourly pay for the Production worker: ";
        std::cin>>pay;

      }

      hourlyPay = pay;
}
