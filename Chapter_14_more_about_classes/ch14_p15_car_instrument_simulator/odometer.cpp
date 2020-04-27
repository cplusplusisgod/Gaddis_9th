#include "odometer.h"
#include <iostream>
Odometer::Odometer(Fuel_Gauge& f)
{
  Tank = &f;
}

Odometer
Odometer::operator++()
{

  if (Tank->fuel_report() != 0) {

    CurMileage >= 999999 ? CurMileage = 0 : CurMileage += 1;

    if (CurMileage % 24 == 0) {
      --(*Tank); // using the fuel_gauge operator overload --
    }
  }

  return *this;
}
