#ifndef CARGOSHIP_H
#define CARGOSHIP_H
#include "ship.h"

class Cargoship : public ship
{
protected:
  int CargoCapacity;

public:
  Cargoship(int default_capacity = 0) { CargoCapacity = default_capacity; }
  ~Cargoship() { std::cout << "a cargo ship destructor"; }
  void set_cargoCapacity(int capacity) { CargoCapacity = capacity; }
  int get_cargoCapacity() const { return CargoCapacity; }

  virtual void print() const
  {
    std::cout << "Name: " << get_name() << std::endl;
    std::cout << "Cargo Capacity (in tons): " << get_cargoCapacity()
              << std::endl;
    std::cout << "Year: " << get_year() << std::endl;
  }
};

#endif // CARGOSHIP_H
