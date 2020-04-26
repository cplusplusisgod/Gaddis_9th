#include "parkingticket.h"
#include "thepoliceofficer.h"
#include <iostream>
using namespace std;

int
main()
{

  TheParkedCar car;
  TheParkingMeter meter;
  ThePoliceOfficer officer;
  officer.checkCar(car, meter);

  std::cout << "\n*********************************\n";
  return 0;
}
