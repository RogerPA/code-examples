// Copyright
#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>

class LessThan {
 public:
  explicit LessThan(int maxValue) : upperBound(maxValue) {}

  bool operator()(int value) const { return value < upperBound; }

 private:
  const int upperBound;
};

int main() {
  const int kMaxValue = 10;

  // recuerden crear el archivo numbers.txt conteniendo varios numeros.
  std::ifstream input("../data/numbers.txt");

  // contamos los numeros de la entrada estandar.
  std::cout << count_if(std::istream_iterator<int>(input),
                        std::istream_iterator<int>(), LessThan(kMaxValue))
            << std::endl;
  return 0;
}
