#include "theparkingmeter.h"
#include <iostream>
#include <string>
TheParkingMeter::TheParkingMeter()
{
  setTimePurchased();
}

void
TheParkingMeter::setTimePurchased()
{

  std::string input;
  double input_d;
  bool valid;
  do {
    valid = true;
    std::cout << "Time purchased (in minutes): ";
    std::getline(std::cin, input);
    try {
      input_d = stod(input);

    } catch (std::invalid_argument) {
      valid = false;
    }

  } while (valid == false);

  TimePurchased = input_d;
}
