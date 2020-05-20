#include "circle.h"
circle::circle(long x, long y, double r)
{
  CenterX = x;
  CenterY = y;
  Radius = r;
  calcArea();
}
