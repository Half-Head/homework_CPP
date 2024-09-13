#include <iostream>

void Reverse(int *array, size_t len) {
  int new_array[len];
  int j = 0;
  for (int i = len - 1; i != 0; --i) {
    new_array[j] = array[i];
    ++j;
  }
}

int main() {
  int size;
  std ::cout << "Enter array's size: ";
  std ::cin >> size;
  int array[size];
  std ::cout << "Enter array's elements: ";
  for (int i = 0; i < size; ++i)
    std ::cin >> array[i];
  Reverse(array, size);
  return 0;
}
