// ch15_p7_persondata_and_customerdata_class.cpp : This file contains the 'main'
// function. Program execution begins and ends there.
//

#include "PersonData.h"
#include "CustomerData.h"
#include <iostream>

int
main()
{
    //issue
  //PersonData first;
  //std::cout << first.get_firstname() << std::endl;
  //std::cout << first.get_lastname() << std::endl;
  //std::cout << first.get_address() << std::endl;
  //std::cout << first.get_city() << std::endl;
  //std::cout << first.get_state() << std::endl;
  //std::cout << first.get_zip() << std::endl;
  //std::cout << first.get_phone() << std::endl;


    CustomerData Customers[5];

   std::cout<<Customers[4].get_mailingList();
}