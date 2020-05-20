#include "rectangle.h"

rectangle::rectangle(long w, long l)
{
  Width = w;
  Length = l;
  calcArea();
}
