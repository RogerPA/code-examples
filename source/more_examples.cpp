// Copyright
#include <algorithm>
#include <fstream>
#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

struct IsOdd : public std::unary_function<int, bool> {
  bool operator()(int number) { return (number % 2 == 1); }
};

int main() {
  std::ifstream input("../data/numbers.txt");
  std::vector<int> numbers;
  copy(std::istream_iterator<int>(input), std::istream_iterator<int>(),
       back_inserter(numbers));
  std::cout << "Valor acumulado : "
            << accumulate(numbers.begin(), numbers.end(), 0) << std::endl;

  std::vector<int> numbers2(numbers.size());

  transform(numbers.begin(), numbers.end(), numbers2.begin(),
            bind2nd(std::multiplies<int>(), 2));

  std::cout << "Valores impares "
            << count_if(numbers.begin(), numbers.end(), IsOdd()) << std::endl;
  std::cout << "Valores impares "
            << count_if(numbers2.begin(), numbers2.end(), IsOdd()) << std::endl;

  return 0;
}
