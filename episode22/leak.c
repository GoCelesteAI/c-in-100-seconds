#include <stdio.h>
#include <stdlib.h>

void leaky() {
  int *data = malloc(100 * sizeof(int));
  data[0] = 42;
  printf("Used: %d\n", data[0]);
  // forgot to free!
}

void clean() {
  int *data = malloc(100 * sizeof(int));
  data[0] = 42;
  printf("Used: %d\n", data[0]);
  free(data);
}

int main() {
  printf("Leaky function:\n");
  leaky();

  printf("\nClean function:\n");
  clean();

  return 0;
}
