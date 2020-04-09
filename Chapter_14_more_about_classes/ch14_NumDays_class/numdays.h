#ifndef NUMDAYS_H
#define NUMDAYS_H
#include <iomanip>
#include <iostream>
class NumDays {
 private:
  float Days = 0.0;
  float Hours = 0.0;
  void Adjust();

 public:
  NumDays(float n);
  float getHours() { return Hours; }
  float getDays() { return Days; }
  NumDays operator+(const NumDays&);
  NumDays operator-(const NumDays&);
  NumDays operator++();
  NumDays operator--();
  NumDays operator++(int);
  NumDays operator--(int);
};

#endif  // NUMDAYS_H
