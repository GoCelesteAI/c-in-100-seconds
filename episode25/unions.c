#include <stdio.h>

union Value {
  int i;
  float f;
  char c;
};

int main() {
  union Value v;

  v.i = 42;
  printf("int:   %d\n", v.i);

  v.f = 3.14;
  printf("float: %.2f\n", v.f);
  printf("int after float: %d (garbage)\n", v.i);

  printf("\nsizeof union: %lu\n", sizeof(union Value));
  printf("sizeof int:   %lu\n", sizeof(int));
  printf("sizeof float: %lu\n", sizeof(float));

  return 0;
}
