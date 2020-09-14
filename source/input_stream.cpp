// Copyright
#include <fstream>
#include <iostream>

void readNumbers() {
  // Create our ifstream and open the file we want to write to
  std::ifstream input;
  input.open("numbers.txt");

  int value;
  while (true) {
    // Try and read a value
    input >> value;
    // If we failed to read a value, stop.
    if (input.fail()) break;
    std::cout << "I read the value: " << value << std::endl;
  }
}

void readHaiku() {
  std::ifstream input;
  input.open("haiku.txt");

  // Read the file word by word
  while (true) {
    std::string word;
    // Reading strings using >> will skip whitespace, then read characters
    // until more whitespace is encountered
    input >> word;

    if (input.fail()) break;
    std::cout << word << std::endl;
  }
  // Close our stream and reset the fact that it has failed.
  input.close();
  input.clear();
  input.open("haiku.txt");
  std::cout << std::endl;

  // Read the file line by line
  while (true) {
    std::string line;
    // The getline function will read characters until a newline character is
    // seen.
    getline(input, line);

    if (input.fail()) break;
    std::cout << line << std::endl;
  }
}

int main() {
  readNumbers();
  readHaiku();
}
