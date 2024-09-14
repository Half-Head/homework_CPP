
int max_value(int *array, int len) {
  int value{array[0]};
  for (int i{0}; i < len; ++i) {
    if (array[i] > value)
      value = array[i];
  }
  return value;
}