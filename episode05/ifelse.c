#include <stdio.h>

int main() {
  int score = 85;

  if (score >= 90) {
    printf("Grade: A\n");
  } else if (score >= 80) {
    printf("Grade: B\n");
  } else if (score >= 70) {
    printf("Grade: C\n");
  } else {
    printf("Grade: F\n");
  }

  int age = 20;
  printf(age >= 18 ? "Adult\n" : "Minor\n");

  return 0;
}
