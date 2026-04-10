#include <stdio.h>
#include <stdlib.h>

void allocate(int **ptr, int value) {
  *ptr = malloc(sizeof(int));
  **ptr = value;
}

int main() {
  int x = 42;
  int *p = &x;
  int **pp = &p;

  printf("x   = %d\n", x);
  printf("*p  = %d\n", *p);
  printf("**pp = %d\n", **pp);

  int *data = NULL;
  allocate(&data, 99);
  printf("\nallocated: %d\n", *data);
  free(data);

  return 0;
}
