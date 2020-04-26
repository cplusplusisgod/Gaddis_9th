#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H
#include "theparkedcar.h"
#include "theparkingmeter.h"
#include <iostream>
class ParkingTicket
{
private:
  const TheParkedCar* Car;
  const TheParkingMeter* Meter;
  int FineAmt = 0;

public:
  ParkingTicket(const TheParkedCar& c, const TheParkingMeter& m)
  {
    Car = &c;
    Meter = &m;
  }

  void report();
};

#endif // PARKINGTICKET_H
