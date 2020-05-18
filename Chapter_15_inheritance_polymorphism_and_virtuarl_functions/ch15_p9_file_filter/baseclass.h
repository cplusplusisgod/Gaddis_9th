#ifndef BASECLASS_H
#define BASECLASS_H
#include <string>
class Baseclass
{
private:
  std::string class_string;

public:
  Baseclass();
  virtual void alter_file(std::string) const;
};

#endif // BASECLASS_H
