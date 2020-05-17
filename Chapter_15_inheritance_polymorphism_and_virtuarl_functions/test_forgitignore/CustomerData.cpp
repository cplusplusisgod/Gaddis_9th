#include "CustomerData.h"
#include <iostream>
// tracks how many accounts have been made, used to give each a differnt id num.
int CustomerData::CustomerNumberr = 0;

CustomerData::CustomerData()
{
  CustomerNumberr++;
  CustomerId = CustomerNumberr;
  set_mailingList();
}

void
CustomerData::set_mailingList()
{
  char choice;

  std::cout << "Do you want to join the Mailing list? Enter Y for yes: ";
  std::cin.get(choice);
  std::cin.ignore();

  if (choice == 'y' || choice == 'Y') {
    MailingList = true;
  } else {
    MailingList = false;
  }
}

std::string
CustomerData::get_mailingList()
{
  if (MailingList == true) {
    return "Signed up for Mailing list\n";
  } else {
    return "Not signed up for Mailing list\n";
  }
}
