#include <stdio.h>

int main() {
  int a = 7, b = 2;
  printf("int / int = %d\n", a / b);
  printf("cast to float = %.2f\n", (float)a / b);

  double pi = 3.14159;
  int truncated = (int)pi;
  printf("pi = %f\n", pi);
  printf("truncated = %d\n", truncated);

  char ch = 'A';
  printf("char %c = int %d\n", ch, ch);

  return 0;
}
