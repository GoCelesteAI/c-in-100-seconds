#include <stdio.h>
#include <string.h>

#define SIZE 10

// hash function — sum of chars mod table size
int hash(char *key) {
  int sum = 0;
  while (*key) {
    sum += *key;
    key++;
  }
  return sum % SIZE;
}

// simple table: array of strings
char *table[SIZE] = {NULL};

void insert(char *key) {
  int idx = hash(key);
  printf("  hash(%s) = %d", key, idx);
  if (table[idx] != NULL) {
    printf(" (collision with %s!)", table[idx]);
  }
  table[idx] = key;
  printf("\n");
}

char *lookup(char *key) {
  int idx = hash(key);
  return table[idx];
}

void print_table() {
  printf("\nHash Table:\n");
  for (int i = 0; i < SIZE; i++) {
    if (table[i] != NULL) {
      printf("  [%d] %s\n", i, table[i]);
    } else {
      printf("  [%d] ---\n", i);
    }
  }
}

int main() {
  printf("Inserting:\n");
  insert("Alice");
  insert("Bob");
  insert("Carol");
  insert("Dave");
  insert("Eve");

  print_table();

  printf("\nLookup:\n");
  printf("  Bob -> [%d] %s\n", hash("Bob"), lookup("Bob"));
  printf("  Eve -> [%d] %s\n", hash("Eve"), lookup("Eve"));

  return 0;
}
