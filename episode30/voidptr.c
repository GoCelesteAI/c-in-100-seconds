#include <stdio.h>

void print_value(void *ptr, char type) {
  if (type == 'i')
    printf("int: %d\n", *(int *)ptr);
  else if (type == 'f')
    printf("float: %.2f\n", *(float *)ptr);
  else if (type == 'c')
    printf("char: %c\n", *(char *)ptr);
}

int main() {
  int x = 42;
  float y = 3.14;
  char z = 'A';

  void *ptr;

  ptr = &x;
  printf("int: %d\n", *(int *)ptr);

  ptr = &y;
  printf("float: %.2f\n", *(float *)ptr);

  ptr = &z;
  printf("char: %c\n", *(char *)ptr);

  printf("\nGeneric function:\n");
  print_value(&x, 'i');
  print_value(&y, 'f');
  print_value(&z, 'c');

  return 0;
}
