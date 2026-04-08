#include <stdio.h>

int main() {
  int x = 42;
  int *ptr = &x;

  printf("Value of x: %d\n", x);
  printf("Address of x: %p\n", &x);
  printf("ptr holds: %p\n", ptr);
  printf("Value at ptr: %d\n", *ptr);

  *ptr = 99;
  printf("x is now: %d\n", x);

  return 0;
}
