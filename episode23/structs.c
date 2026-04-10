#include <stdio.h>

typedef struct {
  char name[50];
  int age;
  float gpa;
} Student;

int main() {
  Student s = {"Alice", 20, 3.85};

  printf("Name: %s\n", s.name);
  printf("Age:  %d\n", s.age);
  printf("GPA:  %.2f\n", s.gpa);

  s.age = 21;
  printf("\nUpdated age: %d\n", s.age);

  return 0;
}
