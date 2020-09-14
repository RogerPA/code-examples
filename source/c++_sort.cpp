// Copyright
#include <algorithm>
#include <cstdlib>
#include <iostream>

// functor
template <class ElementType>
struct comp {
  bool operator()(const ElementType& left, const ElementType& right) {
    return left < right;
  }
};

int main() {
  const int kSize = 10;
  int array[kSize];
  int n = 0;

  while (std::cin >> array[n++] && n < kSize) {
  }
  // comp<int>() crea un objeto del tipo comp para enteros es como int a =
  // int(0);
  std::sort(array, array + kSize, comp<int>());

  for (int i = 0; i < n; i++) std::cout << array[i] << std::endl;

  return 0;
}
