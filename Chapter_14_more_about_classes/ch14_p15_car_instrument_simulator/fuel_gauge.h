#ifndef FUEL_GAUGE_H
#define FUEL_GAUGE_H

class Fuel_Gauge
{
private:
  int FuelAmt = 0; // in gallons //max 15gallons
public:
  Fuel_Gauge();
  Fuel_Gauge operator++();
  Fuel_Gauge operator--();
  float fuel_report() const { return FuelAmt; }
};

#endif // FUEL_GAUGE_H
