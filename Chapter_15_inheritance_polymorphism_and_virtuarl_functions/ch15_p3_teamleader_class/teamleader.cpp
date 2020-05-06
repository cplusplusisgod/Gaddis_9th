#include "teamleader.h"
#include "iostream"
TeamLeader::TeamLeader() : ProductionWorker()
{
    set_monthly_bonus();
    Required_Hrs = 20;
    Hrs_Completed = 0;


}

void TeamLeader::set_monthly_bonus()
{
    double amnt = 0;
    do{
        std::cin.clear();
        std::cin.ignore(10000,'\n');
    std::cout<<"How much is the monthly bonus for "<<employeeName<<": ";
    std::cin>>amnt;
    }while(std::cin.fail());
}



void TeamLeader::add_hrs_completed(int hrs)
{

    if(Required_Hrs - hrs >= 0)
    {
        Required_Hrs -= hrs;
        Hrs_Completed += hrs;

        std::cout<<"Succesfully added "<<hrs<<" Completed hours. "<<Required_Hrs<<" Required hours left.\n";
    }else if (Required_Hrs - hrs < 0)
    {
        std::cout<<"Unable to subtract "<< hrs <<" hours. "<<Required_Hrs<<" required hours remaining.\n";
    } else
    {
        std::cout<<" error with adding completed hours. PLease try again.\n";
    }

}
