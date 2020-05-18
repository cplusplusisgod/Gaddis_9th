#include "baseclass.h"
#include <fstream>
#include <iostream>
#include <vector>

// THIS CLASS READS A FILE AND CHANGES IT TO ALL UPPERCASE
Baseclass::Baseclass() {}

void
Baseclass::alter_file(std::string file) const
{
  char letter;
  std::vector<char> lines;
  std::ifstream readFile;
  std::ofstream writeFile;

  // checks if file already exsist. If not promps user. if it does, reads its
  // contents, saves to vector, then deletes contents of the file and outputs
  // the content that was saved in the vector back into the file as all
  // uppercase. Done to prevent creating the file of it dosnt exsist.
  readFile.open(file, std::ios::in);
  if (readFile.fail()) {
    std::cout << "File " << '"' << " " << file << " " << '"'
              << " does not exsist.\n";
    return;
  }

  // Read all the contents of the file one char at a time. Then send them to
  // vector as uppercase.
  while (readFile.get(letter)) {
    lines.push_back(toupper(letter));
  }
  // Once done reading and outputting the file content, close the ifstream.
  readFile.close();

  // Now open the ofsteam, with ios::trunc which clears the file so we can write
  // the converted contents that were saved to the vector, back into the file.
  writeFile.open(file, std::ios::out | std::ios::trunc);
  for (char c : lines) {
    writeFile << c;
  }
  // After all the converted contents that were saved in the vector are written
  // back to the file we close the ifstream.
  writeFile.close();

  // now we reopen the ofstream, which clears any error flags and resets the
  // seekg position to the beggining then we cout all the contents of the file.
  // Once done we close the stream again.
  readFile.open(file);
  while (readFile.get(letter)) {
    std::cout << letter;
  }
  readFile.close();
}
