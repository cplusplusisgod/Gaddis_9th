#ifndef BASICSHAPES_H
#define BASICSHAPES_H

class BasicShapes
{
protected:
  double Area;

public:
  BasicShapes();
  double getArea() const { return Area; }
  virtual void calcArea() = 0;
};

#endif // BASICSHAPES_H
