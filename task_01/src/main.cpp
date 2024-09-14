#include <algorithm>
#include <iostream>
#include <vector>

int mediana(int first_number, int second_number, int third_number) {
  std ::vector<int> nums = {first_number, second_number, third_number};
  sort(nums.begin(), nums.end());
  return (nums[1]);
}

int main() {

  int first, second, third;
  std ::cin >> first >> second >> third;
  std ::cout << mediana(first, second, third) << std ::endl;
  return 0;
}
