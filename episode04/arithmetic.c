#include <stdio.h>

int main() {
  int a = 17, b = 5;

  printf("%d + %d = %d\n", a, b, a + b);
  printf("%d - %d = %d\n", a, b, a - b);
  printf("%d * %d = %d\n", a, b, a * b);
  printf("%d / %d = %d\n", a, b, a / b);
  printf("%d %% %d = %d\n", a, b, a % b);

  printf("\n17 / 5 = %d (integer division truncates)\n", 17 / 5);
  printf("17.0 / 5 = %.1f (use float for decimals)\n", 17.0 / 5);

  return 0;
}
