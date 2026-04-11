#include <stdio.h>
#include <stdlib.h>

int main() {
  // fopen — open a file for reading
  FILE *f = fopen("/tmp/sample.txt", "r");
  if (f == NULL) {
    printf("Could not open file\n");
    return 1;
  }

  // fgets — read line by line
  char line[256];
  int count = 0;
  printf("--- File contents ---\n");
  while (fgets(line, sizeof(line), f) != NULL) {
    count++;
    printf("%d: %s", count, line);
  }

  // fclose — always close when done
  fclose(f);
  printf("\n%d lines read\n", count);

  // fgetc — read character by character
  FILE *f2 = fopen("/tmp/sample.txt", "r");
  int ch;
  int chars = 0;
  while ((ch = fgetc(f2)) != EOF) {
    chars++;
  }
  fclose(f2);
  printf("%d characters total\n", chars);

  return 0;
}
