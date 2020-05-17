#include "prefferedcustomer.h"
#include <cmath>
#include <iostream>
PrefferedCustomer::PrefferedCustomer()
{
  Total_Purchase_Amnt = 0;
  Discount_Amnt = 0;
}

/*****************************************************/
void
PrefferedCustomer::adjust_discount_amnt()
{
  if (Total_Purchase_Amnt < 500) {
    Discount_Amnt = 0;
  } else if (Total_Purchase_Amnt >= 500 && Total_Purchase_Amnt < 1000) {
    Discount_Amnt = 5;
  } else if (Total_Purchase_Amnt >= 1000 && Total_Purchase_Amnt < 1500) {
    Discount_Amnt = 6;
  } else if (Total_Purchase_Amnt >= 1500 && Total_Purchase_Amnt < 2000) {
    Discount_Amnt = 7;
  } else if (Total_Purchase_Amnt >= 2000) {
    Discount_Amnt = 10;
  }
}

/*****************************************************/

void
PrefferedCustomer::add_purchase(double amnt)
{
  // avoid negative amnt.
  if (amnt < 0) {
    std::cout << "Negative purchase amount not valid. Purchase Transaction "
                 "cancelled.\n";
    return;
  }
  // cuts the double down to 2 decimals places.
  amnt = floorf(amnt * 100) / 100;
  Total_Purchase_Amnt += amnt;
  adjust_discount_amnt();
  std::cout << "Purchase Amount: " << amnt
            << " Total Purchase Amount is now: " << Total_Purchase_Amnt
            << std::endl;
}

/*****************************************************/

void
PrefferedCustomer::add_refund(double amnt)
{
  char choice;

  // avoid negative input
  if (amnt < 0) {
    std::cout << "Negative refund Amount is invalid. Refund cancelled.\n";
    return;
  }

  // cuts it down to 2 decimal places.
  amnt = floorf(amnt * 100) / 100;

  if (Total_Purchase_Amnt - amnt >= 0) {
    Total_Purchase_Amnt -= amnt;
    adjust_discount_amnt();

    std::cout << "Refunded Amount: " << amnt
              << " Total Purchase Amount is now: " << Total_Purchase_Amnt
              << std::endl;
  } else {
    std::cout << "Refund exceeds Customer's Total Purchase Amount:\n";
    std::cout << "To continue Press Y: ";
    std::cin.get(choice);
    std::cin.ignore();
    if (toupper(choice) == 'Y') {
      Total_Purchase_Amnt -= amnt;
      adjust_discount_amnt();

      std::cout << "Refunded Amount: " << amnt
                << " Total Purchase Amount is now: " << Total_Purchase_Amnt
                << std::endl;

    } else {
      std::cout << "Refund cancelled.\n";
    }
  }
}
