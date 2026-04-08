#include <stdio.h>

int main() {
  int nums[] = {10, 20, 30, 40, 50};
  int *ptr = nums;

  printf("ptr points to: %d\n", *ptr);
  printf("ptr + 1: %d\n", *(ptr + 1));
  printf("ptr + 3: %d\n", *(ptr + 3));

  printf("\nWalking the array:\n");
  for (int i = 0; i < 5; i++) {
    printf("  *(ptr + %d) = %d\n", i, *(ptr + i));
  }

  return 0;
}
