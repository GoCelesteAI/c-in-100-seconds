#include <stdio.h>

int main() {
  char *colors[] = {"red", "green", "blue"};
  int len = sizeof(colors) / sizeof(colors[0]);

  for (int i = 0; i < len; i++) {
    printf("colors[%d] = %s\n", i, colors[i]);
  }

  int a = 10, b = 20, c = 30;
  int *nums[] = {&a, &b, &c};

  for (int i = 0; i < 3; i++) {
    printf("*nums[%d] = %d\n", i, *nums[i]);
  }

  return 0;
}
