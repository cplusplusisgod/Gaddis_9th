#pragma once
#include "PersonData.h"
class CustomerData : public PersonData
{

private:
  static int CustomerNumberr;
  bool MailingList = true;

public:
  CustomerData();
  int get_customerNumber() const { return CustomerNumberr; }
  void set_mailingList();
  std::string get_mailingList();

};
