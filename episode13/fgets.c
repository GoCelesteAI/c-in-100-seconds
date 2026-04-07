#include <stdio.h>
#include <string.h>

int main() {
  char line[20];

  printf("Enter a sentence: ");
  fgets(line, sizeof(line), stdin);

  line[strcspn(line, "\n")] = 0;

  printf("You said: [%s]\n", line);
  printf("Length: %lu\n", strlen(line));

  return 0;
}
