#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "productionworker.h"

class TeamLeader : public ProductionWorker
{

private:
    double MonlthBonus;
    int Required_Hrs;
    int Hrs_Completed;
public:
    TeamLeader();
    void add_hrs_completed(int);
    int get_hrs_completed() const {return Hrs_Completed;}
    int get_hrs_left() const { return Required_Hrs;}

    void set_monthly_bonus();
//    void set_required_hrs(); //dont thiknk i need these 2. will see
//    void set_compelted_hrs();
};

#endif // TEAMLEADER_H
