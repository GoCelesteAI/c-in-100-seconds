#include <stdio.h>

int main() {
  int nums[] = {10, 20, 30, 40, 50};
  int len = sizeof(nums) / sizeof(nums[0]);

  for (int i = 0; i < len; i++) {
    printf("nums[%d] = %d\n", i, nums[i]);
  }

  nums[2] = 99;
  printf("\nAfter change: nums[2] = %d\n", nums[2]);

  return 0;
}
