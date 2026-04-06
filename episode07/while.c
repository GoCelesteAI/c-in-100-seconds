#include <stdio.h>

int main() {
  int i = 1;
  while (i <= 5) {
    printf("%d ", i);
    i++;
  }
  printf("\n");

  int j = 10;
  do {
    printf("%d ", j);
    j--;
  } while (j >= 8);
  printf("\n");

  return 0;
}
