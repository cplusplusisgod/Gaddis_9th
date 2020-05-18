#include "derivedclass2.h"
#include <fstream>
#include <iostream>

// THIS CLASS MAKES A COPY OF A FILE CONTENT.
derivedclass2::derivedclass2() {}

void
derivedclass2::alter_file(std::string file) const
{

  std::ifstream readFile;
  std::ofstream writeFile;
  char letter;
  readFile.open(file, std::ios::app);
  if (readFile.fail()) {
    std::cout << "File " << '"' << " " << file << " " << '"'
              << " does not exsist.\n";
    return;
  }

  writeFile.open("copyFile.txt");
  readFile.seekg(0, std::ios::beg);
  while (readFile.get(letter)) {
    writeFile << letter;
  }
  readFile.close();
  writeFile.close();
}
