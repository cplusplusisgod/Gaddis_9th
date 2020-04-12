#ifndef NUMDAYS_H
#define NUMDAYS_H
#include <iomanip>
#include <iostream>
class NumDays {
 private:
  float Hours = 0.0;

 public:
  NumDays(float h);
  void setHours(float hrs) { Hours = hrs; }
  float getHours() { return Hours; }
  float getDays() { return Hours / 8.0; }
  NumDays operator=(const NumDays&);
  friend std::ostream& operator <<(std::ostream &strm, const NumDays &right);
  float operator+(const NumDays&);
  float operator-(const NumDays&);
  float operator++();
  float operator--();
  float operator++(int);
  float operator--(int);
};

#endif  // NUMDAYS_H
