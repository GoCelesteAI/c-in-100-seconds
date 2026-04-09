#include <stdio.h>

void no_swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int x = 10, y = 20;

  printf("Before no_swap: x=%d y=%d\n", x, y);
  no_swap(x, y);
  printf("After no_swap:  x=%d y=%d\n", x, y);

  printf("\nBefore swap: x=%d y=%d\n", x, y);
  swap(&x, &y);
  printf("After swap:  x=%d y=%d\n", x, y);

  return 0;
}
