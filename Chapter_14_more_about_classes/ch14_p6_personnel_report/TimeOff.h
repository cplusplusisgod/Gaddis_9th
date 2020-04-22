#pragma once
#include "NumDays.h"
#include <string>
class TimeOff
{
private:
	std::string Name;
	int ID;
	NumDays maxSickDays;
	NumDays sickTaken;
	NumDays maxVacation;
	NumDays vacTaken;
	NumDays maxUnpaid;
	NumDays unpaidTaken;
public:
	TimeOff();
	void SetName();
	void SetId();
	std::string GetName() { return Name; }
	int GetId() { return ID; }
	void AdjustSickHrs(float);
	void AdjustSickTaken(float);
	void AdjustVacationHrs(float);
	void AdjustVacationTaken(float);
	void AdjustMaxUnpaied(float);
	void AdjustUnpaiedTaken(float);
	float getSickHrs() {return maxSickDays.getHours(); }

};

