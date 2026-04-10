#include <stdio.h>
#include <stdlib.h>

int main() {
  int *nums = calloc(5, sizeof(int));

  printf("calloc zeros everything:\n");
  for (int i = 0; i < 5; i++) {
    printf("  nums[%d] = %d\n", i, nums[i]);
  }

  nums = realloc(nums, 8 * sizeof(int));
  nums[5] = 50;
  nums[6] = 60;
  nums[7] = 70;

  printf("\nAfter realloc to 8:\n");
  for (int i = 0; i < 8; i++) {
    printf("  nums[%d] = %d\n", i, nums[i]);
  }

  free(nums);
  return 0;
}
