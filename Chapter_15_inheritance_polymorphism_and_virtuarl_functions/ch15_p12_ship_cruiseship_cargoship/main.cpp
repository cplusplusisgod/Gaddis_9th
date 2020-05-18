#include "cargoship.h"
#include "cruiseship.h"
#include "ship.h"
#include <iostream>
#include <memory>
using namespace std;

void
test(const ship&);

int
main()
{
  ship* array_of_ships[3];
  array_of_ships[0] = new ship;
  array_of_ships[1] = new cruiseship(66);
  array_of_ships[2] = new Cargoship(88);

  array_of_ships[0]->set_name("big normal ship");
  array_of_ships[0]->set_year("1998");

  array_of_ships[1]->set_name("big cruise ship");
  array_of_ships[1]->set_year("1977");

  array_of_ships[2]->set_name("a cargo ship!");
  array_of_ships[2]->set_year("2020");

  test(*array_of_ships[0]);
  test(*array_of_ships[1]);
  test(*array_of_ships[2]);

  for (ship* a : array_of_ships) {
    delete a;
    std::cout << endl;
  }
  return 0;
}

void
test(const ship& object)
{
  object.print();
  std::cout << std::endl;
}
