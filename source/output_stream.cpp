// Copyright
#include <fstream>
#include <iostream>
#include <string>

// Note that we must take the first parameter by reference
void writeToStream(std::ostream& output, int number) {
  output << number << std::endl;
}

int main() {
  // Write an int to the user's console.
  int my_num = 65536;
  std::cout << "Result when writing an int directly to cout: " << my_num
            << std::endl;

  writeToStream(std::cout, my_num);

  // Write an int to a file
  std::ofstream output_file;
  output_file.open("file.txt");
  writeToStream(output_file, my_num);
}
