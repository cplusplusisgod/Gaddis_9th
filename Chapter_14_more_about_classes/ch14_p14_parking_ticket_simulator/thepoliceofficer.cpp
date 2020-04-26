#include "thepoliceofficer.h"
#include "parkingticket.h"
#include <iostream>
ThePoliceOfficer::ThePoliceOfficer()
{
  setOfficerName();
  setOfficerBadgeNum();
}

void
ThePoliceOfficer::setOfficerName()
{
  std::string input;
  std::cout << "Officer Name: ";
  std::getline(std::cin, input);
  OfficerName = input;
}

void
ThePoliceOfficer::setOfficerBadgeNum()
{
  int input = 0;
  std::cout << "Officer Badge number #:";
  std::cin >> input;

  OfficerBadgeNum = input;
}

void
ThePoliceOfficer::checkCar(const TheParkedCar& car,
                           const TheParkingMeter& meter)
{

  double car_time = car.getMinsParked();
  double meter_time = meter.getTimePurchased();

  if (car_time > meter_time) {
    std::cout << "TICKET IT!";

    ParkingTicket ticket(car, meter);
    ticket.report();
  } else if (meter_time > car_time) {
    std::cout << "NO TICKET\n";
  } else
    std::cout << "Time reported is same as meter time.\n";
}
