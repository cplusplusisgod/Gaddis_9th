#ifndef CRUISESHIP_H
#define CRUISESHIP_H
#include "ship.h"
class cruiseship : public ship
{
protected:
  int MaxPassangers;

public:
  cruiseship(int);
  ~cruiseship() { std::cout << "cruise ship destructor"; }
  void set_maxPassangers(int num) { MaxPassangers = num; }
  int get_maxPassangers() const { return MaxPassangers; }
  virtual void print() const
  {
    std::cout << "Name: " << get_name() << std::endl;
    std::cout << "Max passangers: " << get_maxPassangers() << std::endl;
  }
};

#endif // CRUISESHIP_H
