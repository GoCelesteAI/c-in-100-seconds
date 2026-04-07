#include <stdio.h>

int add(int a, int b) {
  return a + b;
}

void greet(char name[]) {
  printf("Hello, %s!\n", name);
}

int main() {
  int result = add(10, 25);
  printf("10 + 25 = %d\n", result);

  greet("Alice");
  greet("Bob");

  return 0;
}
