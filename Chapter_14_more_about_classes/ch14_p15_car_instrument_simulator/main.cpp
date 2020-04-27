#include "fuel_gauge.h"
#include "odometer.h"
#include <iostream>
using namespace std;

int
main()
{
  Fuel_Gauge gas_tank;
  Odometer odometer(gas_tank);
  // filling up the gas tank.
  while (gas_tank.fuel_report() != 15) {
    ++gas_tank;
    cout << "Gallons: " << gas_tank.fuel_report() << endl;
  }

  while (gas_tank.fuel_report() != 0) {
    ++odometer;
    std::cout << "Odomoter(miles): " << odometer.getCurMileage()
              << " Fuel (in gallons): " << gas_tank.fuel_report() << std::endl;
  }
  return 0;
}
