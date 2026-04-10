#include <stdio.h>
#include <stdlib.h>

int *stack_danger() {
  int x = 42;
  return &x;  // dangling pointer!
}

int *heap_safe() {
  int *p = malloc(sizeof(int));
  *p = 42;
  return p;  // caller owns it
}

int main() {
  // Stack: automatic, fast, limited
  int a = 10;
  int arr[5] = {1, 2, 3, 4, 5};
  printf("Stack a: %d\n", a);
  printf("Stack arr[0]: %d\n", arr[0]);

  // Heap: manual, flexible, you free it
  int *h = malloc(sizeof(int));
  *h = 99;
  printf("\nHeap *h: %d\n", *h);
  free(h);

  // Safe return from heap
  int *safe = heap_safe();
  printf("Heap return: %d\n", *safe);
  free(safe);

  return 0;
}
