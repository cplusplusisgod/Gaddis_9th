#include "derivedclass1.h"
#include <fstream>
#include <iostream>
#include <vector>

// THIS CLASS ENCRPYTS AND DECRPYTS A FILE CONTENT. DOES NOT WRITE TO FILE
derivedclass1::derivedclass1() {}

void
derivedclass1::alter_file(std::string file) const
{

  char letter;
  std::vector<int> lines;
  std::ifstream readFile;

  // if the file the user wants to open dosnt exsist, exit the functions with
  // return.
  readFile.open(file, std::ios::in);
  if (readFile.fail()) {
    std::cout << "File " << '"' << " " << file << " " << '"'
              << " does not exsist.\n";
    return;
  }

  // reads the file and changed the letters to int's with -15 value. (encypts)
  while (readFile.get(letter)) {

    lines.push_back(static_cast<int>(letter - 15));
  }
  readFile.close();

  // decrypts and couts the file contents.
  for (int c : lines) {
    std::cout << static_cast<char>((c + 15));
  }
}
