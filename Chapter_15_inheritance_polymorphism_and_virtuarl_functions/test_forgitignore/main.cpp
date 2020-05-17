#include "prefferedcustomer.h"
#include <iostream>
using namespace std;

int
main()
{

  PrefferedCustomer first;

  // std::cout << first[5].get_customerId();
  first.add_purchase(-55.5555);
  first.add_refund(50.5555555);
  first.add_refund(6.6666);

  first.add_purchase(500);

  std::cout << "Discount is at " << first.get_discount_amnt() << std::endl;
  std::cout << "Total customer sales amount is "
            << first.get_total_purchase_amnt() << std::endl;

  return 0;
}
