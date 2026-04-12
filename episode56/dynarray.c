#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int *data;
  int size;
  int capacity;
} DynArray;

DynArray create(int cap) {
  DynArray a;
  a.data = malloc(cap * sizeof(int));
  a.size = 0;
  a.capacity = cap;
  return a;
}

void push(DynArray *a, int val) {
  if (a->size == a->capacity) {
    a->capacity *= 2;
    a->data = realloc(a->data, a->capacity * sizeof(int));
    printf("  (grew to %d)\n", a->capacity);
  }
  a->data[a->size++] = val;
}

void print_arr(DynArray *a) {
  for (int i = 0; i < a->size; i++)
    printf("%d ", a->data[i]);
  printf("\n");
}

int main() {
  DynArray arr = create(2);
  printf("capacity: %d\n", arr.capacity);

  push(&arr, 10);
  push(&arr, 20);
  push(&arr, 30);
  push(&arr, 40);
  push(&arr, 50);

  printf("size: %d, capacity: %d\n", arr.size, arr.capacity);
  print_arr(&arr);

  free(arr.data);
  return 0;
}
