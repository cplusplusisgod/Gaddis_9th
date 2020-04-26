#ifndef THEPARKINGMETER_H
#define THEPARKINGMETER_H

class TheParkingMeter
{

private:
  double TimePurchased; // in minutes
public:
  TheParkingMeter();
  void setTimePurchased();
  double getTimePurchased() const { return TimePurchased; }
};

#endif // THEPARKINGMETER_H
