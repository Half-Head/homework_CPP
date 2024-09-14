#include <gtest/gtest.h>
#include <max_value.hpp>

TEST(Test, Simple) {
  int arr1[3]{1, 2, 3};
  int arr2[10]{7, 16, 48, 2, 3, 13, 1, 9, 12, 2};
  int arr3[1]{17};
  int arr4[5]{-8, 6, -65, 10, 2};
  ASSERT_EQ(max_value(arr1, 3), 3);
  ASSERT_EQ(max_value(arr2, 10), 48);
  ASSERT_EQ(max_value(arr3, 1), 17);
  ASSERT_EQ(max_value(arr4, 5), 10);
}