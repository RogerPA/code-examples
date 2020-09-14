// Copyright
#include <algorithm>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
  // srand((unsigned int)time(NULL));
  const int kSize = 10;
  std::vector<int> array(kSize);
  generate(array.begin(), array.end(),
           rand);  // generamos 10 numeros aleatorios
  sort(array.begin(), array.end(), std::greater<int>());  // de mayor a menor
  copy(array.begin(), array.end(), std::ostream_iterator<int>(std::cout, "\n"));
  return 0;
}
