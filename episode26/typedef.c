#include <stdio.h>

typedef int Score;
typedef char* String;

typedef struct {
  String name;
  Score grade;
} Student;

typedef int (*MathOp)(int, int);

int add(int a, int b) { return a + b; }
int mul(int a, int b) { return a * b; }

int main() {
  Score s = 95;
  String msg = "Hello";
  printf("Score: %d\n", s);
  printf("String: %s\n", msg);

  Student alice = {"Alice", 88};
  printf("Student: %s, %d\n", alice.name, alice.grade);

  MathOp op = add;
  printf("add(3,4) = %d\n", op(3, 4));
  op = mul;
  printf("mul(3,4) = %d\n", op(3, 4));

  return 0;
}
