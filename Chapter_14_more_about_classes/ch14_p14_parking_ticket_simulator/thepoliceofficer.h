#ifndef THEPOLICEOFFICER_H
#define THEPOLICEOFFICER_H
#include "theparkedcar.h"
#include "theparkingmeter.h"
//#include <string>

class ThePoliceOfficer
{
private:
  std::string OfficerName;
  int OfficerBadgeNum;

public:
  ThePoliceOfficer();
  void checkCar(const TheParkedCar&, const TheParkingMeter&);
  void setOfficerName();
  void setOfficerBadgeNum();
};

#endif // THEPOLICEOFFICER_H
