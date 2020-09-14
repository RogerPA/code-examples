// Copyright
#include <cstdlib>
#include <iostream>

// a y b apuntan a enteros, cmp retorna -1 si es menor que b;
// 0 si es que son iguales y 1 si es que a es mayor que b.
inline int cmp(const void *a, const void *b) {
  int aa = *reinterpret_cast<const int *>(a);
  int bb = *reinterpret_cast<const int *>(b);
  return (aa < bb) ? -1 : (aa > bb) ? 1 : 0;
}

// Se leen un conjunto de enteros de la entrada estandar.
// se ordenan y se imprime la lista
int main() {
  const int kSize = 10;
  int array[kSize];
  int n = 0;
  // que valor tiene n al final
  while (std::cin >> array[n++] && n < kSize) {
  }

  qsort(array, n, sizeof(int), cmp);

  for (int i = 0; i < n; i++) std::cout << array[i] << "\n";

  return 0;
}
