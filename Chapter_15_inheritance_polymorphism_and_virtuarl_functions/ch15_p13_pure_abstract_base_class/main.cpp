#include "circle.h"
#include "rectangle.h"
#include <iostream>
using namespace std;

int
main()
{

  circle circle_obj(5, 5, 5);
  std::cout << circle_obj.getArea() << std::endl;

  rectangle rectangle_obj(5, 5);
  std::cout << rectangle_obj.getArea() << std::endl;
  return 0;
}
