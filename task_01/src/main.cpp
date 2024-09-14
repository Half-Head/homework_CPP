#include "mediana.hpp"
#include <algorithm>
#include <iostream>
#include <vector>

int main() {

  int first, second, third;
  std ::cin >> first >> second >> third;
  std ::cout << mediana(first, second, third) << std ::endl;
  return 0;
}
