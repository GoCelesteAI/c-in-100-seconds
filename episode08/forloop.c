#include <stdio.h>

int main() {
  for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
  }
  printf("\n");

  for (int row = 1; row <= 3; row++) {
    for (int col = 1; col <= 3; col++) {
      printf("(%d,%d) ", row, col);
    }
    printf("\n");
  }

  return 0;
}
