// Copyright
#include <algorithm>
#include <fstream>
#include <functional>
#include <iostream>
#include <iterator>

bool LessThan(int x, int y) { return x < y; }

int main() {
  const int kMaxValue = 10;

  std::ifstream input("../data/numbers.txt");

  std::cout << count_if(std::istream_iterator<int>(input),
                        std::istream_iterator<int>(),
                        bind2nd(std::ptr_fun(LessThan), kMaxValue))
            << std::endl;
  return 0;
}
