#include <stdio.h>

int main() {
  // fprintf — write formatted text to a file
  FILE *f = fopen("/tmp/output.txt", "w");
  if (f == NULL) {
    printf("Could not open file\n");
    return 1;
  }
  fprintf(f, "Name: %s\n", "Alice");
  fprintf(f, "Age: %d\n", 30);
  fprintf(f, "Score: %.1f\n", 95.5);
  fclose(f);
  printf("Wrote output.txt\n");

  // fputs — write a plain string
  FILE *f2 = fopen("/tmp/notes.txt", "w");
  fputs("First line\n", f2);
  fputs("Second line\n", f2);
  fclose(f2);
  printf("Wrote notes.txt\n");

  // append mode — add to existing file
  FILE *f3 = fopen("/tmp/notes.txt", "a");
  fputs("Appended line\n", f3);
  fclose(f3);
  printf("Appended to notes.txt\n");

  // read back and display
  printf("\n--- output.txt ---\n");
  FILE *r1 = fopen("/tmp/output.txt", "r");
  char line[256];
  while (fgets(line, sizeof(line), r1) != NULL) {
    printf("%s", line);
  }
  fclose(r1);

  printf("\n--- notes.txt ---\n");
  FILE *r2 = fopen("/tmp/notes.txt", "r");
  while (fgets(line, sizeof(line), r2) != NULL) {
    printf("%s", line);
  }
  fclose(r2);

  return 0;
}
