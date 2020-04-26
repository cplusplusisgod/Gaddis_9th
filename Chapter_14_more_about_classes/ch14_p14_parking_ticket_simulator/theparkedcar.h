#ifndef THEPARKEDCAR_H
#define THEPARKEDCAR_H

#include <string>
class TheParkedCar
{

private:
  std::string Make;
  std::string Model;
  std::string LicensePlate;
  double MinsParked;

public:
  TheParkedCar();
  void setMake();
  void setModel();
  void setLicensePlate();
  void setMinsParked();
  std::string getMake() const { return Make; }
  std::string getModel() const { return Model; }
  std::string getLicensePlate() const { return LicensePlate; }
  double getMinsParked() const { return MinsParked; }
};

#endif // THEPARKEDCAR_H
