#include "feetinches.h"
#include <iostream>
using namespace std;

int
main()
{
  cout << "Hello World!" << endl;

  FeetInches test(3, 10);
  FeetInches test2(4, -2);

  if (test != test2)
    cout << "are not the same\n";
  else
    cout << "are the same\n";

  return 0;
}
