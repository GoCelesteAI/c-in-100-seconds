#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[50];
  int age;
} Person;

void birthday(Person *p) {
  p->age++;
}

int main() {
  Person alice = {"Alice", 25};
  Person *ptr = &alice;

  printf("Name: %s\n", ptr->name);
  printf("Age:  %d\n", ptr->age);

  birthday(&alice);
  printf("After birthday: %d\n", alice.age);

  Person *bob = malloc(sizeof(Person));
  strcpy(bob->name, "Bob");
  bob->age = 30;
  printf("\nHeap: %s, %d\n", bob->name, bob->age);
  free(bob);

  return 0;
}
