#ifndef DERIVEDCLASS1_H
#define DERIVEDCLASS1_H
#include "baseclass.h"

class derivedclass1 : public Baseclass
{
public:
  derivedclass1();
  virtual void alter_file(std::string) const;
};

#endif // DERIVEDCLASS1_H
