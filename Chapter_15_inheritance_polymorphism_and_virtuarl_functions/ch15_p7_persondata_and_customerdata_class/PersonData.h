#pragma once
#include <string>
class PersonData
{

protected:
  std::string LastName;
  std::string FirstName;
  std::string Address;
  std::string City;
  std::string State;
  std::string Zip;
  std::string Phone;

public:
  PersonData();

  void set_lastname();
  void set_lastname(std::string);
  std::string get_lastname() const { return LastName; }

  void set_firstname();
  void set_firstname(std::string);
  std::string get_firstname() const { return FirstName; }

  void set_address();
  void set_address(std::string);
  std::string get_address() const { return Address; }

  void set_city();
  void set_city(std::string);
  std::string get_city() const { return City; }

  void set_state();
  void set_state(std::string);
  std::string get_state() const { return State; }

  void set_zip();
  void set_zip(std::string);
  std::string get_zip() const { return Zip; }

  void set_phone();
  void set_phone(std::string);
  std::string get_phone() const { return Phone; }

  static const std::string state_abbreviations[];
  static const int not_valid_codes[];
};
