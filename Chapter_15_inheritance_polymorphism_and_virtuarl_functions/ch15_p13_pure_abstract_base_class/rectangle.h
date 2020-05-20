#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "basicshapes.h"

class rectangle : public BasicShapes
{
private:
  long Width;
  long Length;

public:
  rectangle(long, long);
  long getWidth() const { return Width; }
  long getLength() const { return Length; }
  void calcArea() override { Area = Length * Width; }
  double get_area() { return Area; }
};

#endif // RECTANGLE_H
