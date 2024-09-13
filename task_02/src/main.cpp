#include <iostream>

int max_value(int *array, int len) {
  int value = array[0];
  for (int i = 0; i < len; ++i) {
    if (array[i] > value)
      value = array[i];
  }
  return value;
}

int main() {
  int size;
  std ::cout << "Enter array's size: ";
  std ::cin >> size;
  int array[size];
  std ::cout << "Enter array's elements: ";
  for (int i = 0; i < size; ++i)
    std ::cin >> array[i];
  std ::cout << "Max value is: " << max_value(array, size);
  return 0;
}
