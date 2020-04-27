#include "fuel_gauge.h"
#include <iostream>
Fuel_Gauge::Fuel_Gauge() {}

Fuel_Gauge
Fuel_Gauge::operator++()
{
  if (FuelAmt <= 14) {
    FuelAmt += 1;
  } else {
    std::cout << "Fuel tank is full.\n";
  }
  return *this;
}

Fuel_Gauge
Fuel_Gauge::operator--()
{
  if (FuelAmt >= 1) {
    FuelAmt -= 1;
  } else {
    std::cout << "Fuel tank is empty.\n";
  }
  return *this;
}
