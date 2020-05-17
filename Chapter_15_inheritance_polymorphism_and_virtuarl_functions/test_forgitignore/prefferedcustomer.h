#ifndef PREFFEREDCUSTOMER_H
#define PREFFEREDCUSTOMER_H
#include "CustomerData.h"

class PrefferedCustomer : public CustomerData
{
private:
  double Total_Purchase_Amnt;
  int Discount_Amnt;

public:
  PrefferedCustomer();
  void adjust_discount_amnt();

  void add_purchase(double);
  void add_refund(double);

  int get_discount_amnt() const { return Discount_Amnt; }
  double get_total_purchase_amnt() const { return Total_Purchase_Amnt; }
};

#endif // PREFFEREDCUSTOMER_H
