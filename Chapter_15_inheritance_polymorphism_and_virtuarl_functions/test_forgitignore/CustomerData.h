#pragma once
#include "PersonData.h"
class CustomerData : public PersonData
{

protected:
  static int CustomerNumberr;
  bool MailingList = true;
  int CustomerId = 0;

public:
  CustomerData();
  int get_customerId() const { return CustomerId; }
  void set_mailingList();
  std::string get_mailingList();
};
