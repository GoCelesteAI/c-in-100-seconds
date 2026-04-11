#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main() {
  // perror — print error with context
  FILE *f = fopen("/tmp/no_such_file.txt", "r");
  if (f == NULL) {
    perror("fopen failed");
  }

  // errno + strerror — get error details
  errno = 0;
  FILE *f2 = fopen("/etc/master.passwd", "r");
  if (f2 == NULL) {
    printf("errno: %d\n", errno);
    printf("error: %s\n", strerror(errno));
  }

  // stderr — error output stream
  printf("\n--- Division ---\n");
  fflush(stdout);
  int a = 10, b = 0;
  if (b == 0) {
    fprintf(stderr, "Error: division by zero\n");
  } else {
    printf("%d / %d = %d\n", a, b, a / b);
  }

  // return codes — early exit on failure
  printf("\n--- File Write ---\n");
  FILE *f3 = fopen("/tmp/test_error.txt", "w");
  if (f3 == NULL) {
    perror("fopen");
    return 1;
  }
  fprintf(f3, "This worked!\n");
  fclose(f3);
  printf("Written successfully\n");

  // read back
  FILE *f4 = fopen("/tmp/test_error.txt", "r");
  char line[100];
  fgets(line, sizeof(line), f4);
  printf("Contents: %s", line);
  fclose(f4);

  return 0;
}
