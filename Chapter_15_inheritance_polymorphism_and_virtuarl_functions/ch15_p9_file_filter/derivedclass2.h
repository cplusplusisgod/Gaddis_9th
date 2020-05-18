#ifndef DERIVEDCLASS2_H
#define DERIVEDCLASS2_H
#include "derivedclass1.h"

class derivedclass2 : public derivedclass1
{
public:
  derivedclass2();

  void alter_file(std::string) const;
};

#endif // DERIVEDCLASS2_H
