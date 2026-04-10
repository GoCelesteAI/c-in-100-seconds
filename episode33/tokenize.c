#include <stdio.h>
#include <string.h>

int main() {
  // strtok — split by spaces
  char sentence[] = "The quick brown fox";
  char *word = strtok(sentence, " ");
  while (word != NULL) {
    printf("%s\n", word);
    word = strtok(NULL, " ");
  }

  // strtok — parse CSV
  printf("\n--- CSV ---\n");
  char csv[] = "Alice,30,Engineer";
  char *field = strtok(csv, ",");
  while (field != NULL) {
    printf("Field: %s\n", field);
    field = strtok(NULL, ",");
  }

  // strtok — multiple delimiters
  printf("\n--- Multi ---\n");
  char data[] = "red;green,blue:yellow";
  char *color = strtok(data, ";,:");
  while (color != NULL) {
    printf("Color: %s\n", color);
    color = strtok(NULL, ";,:");
  }

  return 0;
}
