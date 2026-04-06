#include <stdio.h>

int main() {
  int n = 42;
  float pi = 3.14159;
  char name[] = "Alice";

  printf("%d\n", n);
  printf("%x\n", n);
  printf("%f\n", pi);
  printf("%.2f\n", pi);
  printf("%s\n", name);
  printf("%p\n", &n);
  printf("[%10d]\n", n);
  printf("[%-10d]\n", n);

  return 0;
}
