#include <stdio.h>
#include <string.h>

int main() {
  char name[] = "Alice";
  printf("Name: %s\n", name);
  printf("Length: %lu\n", strlen(name));

  char copy[20];
  strcpy(copy, name);
  printf("Copy: %s\n", copy);

  printf("Equal? %d\n", strcmp(name, copy) == 0);
  printf("Compare: %d\n", strcmp("apple", "banana"));

  return 0;
}
