#pragma once

#include <cstddef>

void Reverse(int *array, size_t len) {
  int new_array[len];
  int j = 0;
  for (int i = len - 1; i != 0; --i) {
    new_array[j] = array[i];
    ++j;
  }
};
