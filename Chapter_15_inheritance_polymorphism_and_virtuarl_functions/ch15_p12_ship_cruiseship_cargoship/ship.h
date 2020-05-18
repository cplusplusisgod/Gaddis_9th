#ifndef SHIP_H
#define SHIP_H
#include <iostream>
#include <string>
class ship
{
protected:
  std::string Name;
  std::string Year;

public:
  ship();
  virtual ~ship() { std::cout << "\nA ship call destructor"; }
  void set_name(std::string name) { Name = name; }
  void set_year(std::string year) { Year = year; }
  std::string get_name() const { return Name; }
  std::string get_year() const { return Year; }
  virtual void print() const
  {
    std::cout << "Name: " << get_name() << std::endl;
    std::cout << "Year: " << get_year() << std::endl;
  }
};

#endif // SHIP_H
