#include "theparkedcar.h"
#include <iostream>
TheParkedCar::TheParkedCar()
{
  setMake();
  setModel();
  setMinsParked();
  setLicensePlate();
}

void
TheParkedCar::setMake()
{
  std::string input;
  std::cout << "Make: ";
  std::getline(std::cin, input);
  Make = input;
}

void
TheParkedCar::setModel()
{
  std::string input;
  std::cout << "Model: ";
  std::getline(std::cin, input);
  Model = input;
}

void
TheParkedCar::setLicensePlate()
{
  std::string input;
  std::cout << "License Plate: ";
  std::getline(std::cin, input);
  LicensePlate = input;
}

void
TheParkedCar::setMinsParked()
{
  std::string input;
  double input_d;
  bool valid;
  do {
    valid = true;
    std::cout << "Minuts Parked: ";
    std::getline(std::cin, input);
    try {
      input_d = stod(input);

    } catch (std::invalid_argument) {
      valid = false;
    }

  } while (valid == false);

  MinsParked = input_d;
}
