#include "odometer.h"
#include <iostream>
Odometer::Odometer(Fuel_Gauge& f)
{
  Tank = &f;
}

Odometer
Odometer::operator++()
{
  static int mpg_tracker = 0;
  mpg_tracker += 1;

  if (Tank->fuel_report() != 0) {
    CurMileage >= 999999 ? CurMileage = 0 : CurMileage += 1;

    if (mpg_tracker >= 24) {
      --(*Tank);
      mpg_tracker = 0;
    }
  }
  if (Tank->fuel_report() == 0) {
  }

  return *this;
}
