#include <stdio.h>
#include "math_utils.h"

int main() {
  int sum = add(10, 20);
  int product = multiply(5, 6);

  printf("add(10, 20) = %d\n", sum);
  printf("multiply(5, 6) = %d\n", product);

  return 0;
}
