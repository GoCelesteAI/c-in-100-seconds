#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }

void apply(int (*op)(int, int), int x, int y) {
  printf("Result: %d\n", op(x, y));
}

int main() {
  int (*fp)(int, int);

  fp = add;
  printf("add: %d\n", fp(10, 3));

  fp = sub;
  printf("sub: %d\n", fp(10, 3));

  apply(mul, 10, 3);
  apply(add, 5, 7);

  return 0;
}
