#include "numdays.h"
#include <iomanip>
NumDays::NumDays(float n) {
  Hours = n;
  float A = n / (float)8;
  Days = A;
}

void NumDays::Adjust() {
  int n = Hours;
  float A = n / (float)8;
  Days = A;
}

NumDays NumDays::operator+(const NumDays& right) {
  int t;
  t = Hours + right.Hours;
  NumDays temp(t);
  return temp;
}
NumDays NumDays::operator-(const NumDays& right) {
  /*
          Unsure if to add guard against negative result. Is easy to implement
          if so. if(t < 0) t = 0;
  */
  int t;
  t = Hours - right.Hours;
  NumDays temp(t);
  return temp;
}

NumDays NumDays::operator++() {
  ++Hours;
  Adjust();
  return *this;
}

NumDays NumDays::operator--() {
  --Hours;
  Adjust();
  return *this;
}

NumDays NumDays::operator++(int) {
  NumDays temp(Hours);
  Hours++;
  Adjust();
  return temp;
}

NumDays NumDays::operator--(int) {
  NumDays temp(Hours);
  Hours--;
  Adjust();
  return temp;
}
