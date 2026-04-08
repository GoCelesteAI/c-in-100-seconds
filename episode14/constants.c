#include <stdio.h>

#define PI 3.14159
#define MAX 100

enum Color { RED, GREEN, BLUE };

int main() {
  const int year = 2026;

  printf("PI = %f\n", PI);
  printf("MAX = %d\n", MAX);
  printf("Year = %d\n", year);

  enum Color c = GREEN;
  printf("Color = %d\n", c);

  return 0;
}
