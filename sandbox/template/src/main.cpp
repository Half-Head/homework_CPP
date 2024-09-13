#include <algorithm>
#include <iostream>
#include <vector>

int mediana(int first_number, int second_number, int third_number) {
  std ::vector<int> array = {first_number, second_number, third_number};
  std::sort(array.begin(), array.end());
  return array[1];
}

int main() {
  std :: cout << "Hello, nah";
  int first, second, third;
  std ::cin >> first >> second >> third;
  std ::cout << mediana(first, second, third) << std ::endl;
  return 0;
}