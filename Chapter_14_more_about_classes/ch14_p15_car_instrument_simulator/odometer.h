#ifndef ODOMETER_H
#define ODOMETER_H
#include "fuel_gauge.h"
#include <iostream>
class Odometer
{
private:
  float CurMileage = 0.0; // max is 999,999
  Fuel_Gauge* Tank;

public:
  Odometer(Fuel_Gauge&);
  float getCurMileage() const { return CurMileage; }
  Odometer operator++();
  void test() { std::cout << Tank->fuel_report(); }
};

#endif // ODOMETER_H
