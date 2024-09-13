#include <iostream>

void move(int* array, size_t len, int k) {
     
}

int main() {
  int size, move_counter;
  std ::cout << "Enter array's size: ";
  std ::cin >> size;
  int array[size];
  std ::cout << "Enter array's elements: ";
  for (int i = 0; i < size; ++i)
    std ::cin >> array[i];
  std ::cout << "Enter move counter: ";
  move(array, size, move_counter);
  return 0;
}
