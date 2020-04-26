#include "parkingticket.h"

void
ParkingTicket::report()
{
  std::cout << "\tCar info report.\n";
  std::cout << "Make: " << Car->getMake() << std::endl;
  std::cout << "Model: " << Car->getModel() << std::endl;
  std::cout << "License Plate: " << Car->getLicensePlate() << std::endl;
  std::cout << "Time parked (in minutes): " << Car->getMinsParked()
            << std::endl;

  int totalFine = 25;
  int carTime = Car->getMinsParked();
  int meterTime = Meter->getTimePurchased();
  int timeOver = carTime - meterTime;
  int hrs_over = timeOver / 60;
  float min_over = (timeOver / 60.0) - hrs_over;

  if (hrs_over == 1 && min_over != 0.00) {
    totalFine += 10;

  } else if (hrs_over > 1) {
    totalFine += (hrs_over - 1) * 10;
    if (min_over != 0.00) {
      totalFine += 10;
    }
  }

  std::cout << "Total fine is now at " << totalFine << std::endl;
}
