#include <stdio.h>
#include <string.h>

typedef struct {
  char name[20];
  int age;
  float score;
} Student;

int main() {
  // fwrite — write structs to a binary file
  Student students[3] = {
    {"Alice", 20, 95.5},
    {"Bob", 22, 87.3},
    {"Carol", 21, 91.0},
  };

  FILE *f = fopen("/tmp/students.dat", "wb");
  fwrite(students, sizeof(Student), 3, f);
  fclose(f);
  printf("Wrote 3 students to binary file\n");

  // fread — read structs back
  Student loaded[3];
  FILE *f2 = fopen("/tmp/students.dat", "rb");
  int count = fread(loaded, sizeof(Student), 3, f2);
  fclose(f2);

  printf("\nRead %d students:\n", count);
  for (int i = 0; i < count; i++) {
    printf("  %s, age %d, score %.1f\n",
      loaded[i].name, loaded[i].age, loaded[i].score);
  }

  // fwrite single item
  int nums[] = {10, 20, 30, 40, 50};
  FILE *f3 = fopen("/tmp/nums.dat", "wb");
  fwrite(nums, sizeof(int), 5, f3);
  fclose(f3);

  // fread single items back
  int loaded_nums[5];
  FILE *f4 = fopen("/tmp/nums.dat", "rb");
  fread(loaded_nums, sizeof(int), 5, f4);
  fclose(f4);

  printf("\nIntegers: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", loaded_nums[i]);
  }
  printf("\n");

  return 0;
}
