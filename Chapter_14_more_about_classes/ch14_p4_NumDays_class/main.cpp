#include <iostream>
#include "numdays.h"
using namespace std;

int main() {
  NumDays first(19);
  NumDays second(8);
  NumDays third = first;

cout<<fixed<<showpoint<<setprecision(2);
cout<<third.getDays()<<endl;
cout<<third + third<<endl;
int test = third + second;
cout<<test<<endl;
cout<<first<<endl;
  return 0;
}
