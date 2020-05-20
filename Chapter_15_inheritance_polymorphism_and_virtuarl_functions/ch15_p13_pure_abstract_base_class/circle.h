#ifndef CIRCLE_H
#define CIRCLE_H
#include "basicshapes.h"

class circle : public BasicShapes
{
private:
  long CenterX;
  long CenterY;
  double Radius;

public:
  circle(long, long, double);
  void calcArea() override { Area = 3.14159 * Radius * Radius; }
  double get_area() { return Area; }
};

#endif // CIRCLE_H
