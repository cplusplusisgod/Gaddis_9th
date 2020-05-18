#include "baseclass.h"
#include "derivedclass1.h"
#include "derivedclass2.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void
work_on_file(const Baseclass&, const std::string);

int
main()
{
  string file = "testfile.txt";

  Baseclass first_class;
  first_class.alter_file(file);
  derivedclass1 second_class;
  // second_class.alter_file(file);

  derivedclass2 third_class;
  third_class.alter_file(file);

  return 0;
}
void
work_on_file(const Baseclass& object, std::string file)
{
  object.alter_file(file);
}
