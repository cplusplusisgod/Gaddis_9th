#ifndef ODOMETER_H
#define ODOMETER_H
#include "fuel_gauge.h"
#include <iostream>
class Odometer
{
private:
  int CurMileage = 0; // max is 999,999
  Fuel_Gauge* Tank;

public:
  Odometer(Fuel_Gauge&);
  int getCurMileage() const { return CurMileage; }
  Odometer operator++();
  void test() { std::cout << Tank->fuel_report(); }
};

#endif // ODOMETER_H
