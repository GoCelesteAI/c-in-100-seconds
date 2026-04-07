#include <stdio.h>

int main() {
  int age;
  printf("Enter age: ");
  scanf("%d", &age);
  printf("You are %d years old\n", age);

  char name[50];
  printf("Enter name: ");
  scanf("%s", name);
  printf("Hello, %s!\n", name);

  return 0;
}
