#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  // argc — argument count
  printf("argc: %d\n", argc);

  // argv — argument values
  printf("\nAll arguments:\n");
  for (int i = 0; i < argc; i++) {
    printf("  argv[%d] = %s\n", i, argv[i]);
  }

  // check for flags
  int verbose = 0;
  int count = 1;
  char *name = "World";

  for (int i = 1; i < argc; i++) {
    if (strcmp(argv[i], "-v") == 0) {
      verbose = 1;
    } else if (strcmp(argv[i], "-n") == 0 && i + 1 < argc) {
      count = atoi(argv[++i]);
    } else {
      name = argv[i];
    }
  }

  // use the parsed arguments
  for (int i = 0; i < count; i++) {
    printf("Hello, %s!\n", name);
  }

  if (verbose) {
    printf("(repeated %d times)\n", count);
  }

  return 0;
}
