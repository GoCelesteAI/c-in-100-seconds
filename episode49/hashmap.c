#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

typedef struct Entry {
  char *key;
  int value;
  struct Entry *next;
} Entry;

Entry *table[SIZE] = {NULL};

int hash(char *key) {
  int sum = 0;
  while (*key) sum += *key++;
  return sum % SIZE;
}

void insert(char *key, int value) {
  int idx = hash(key);
  Entry *e = malloc(sizeof(Entry));
  e->key = key;
  e->value = value;
  e->next = table[idx];
  table[idx] = e;
}

int lookup(char *key) {
  int idx = hash(key);
  Entry *e = table[idx];
  while (e != NULL) {
    if (strcmp(e->key, key) == 0) return e->value;
    e = e->next;
  }
  return -1;
}

void delete(char *key) {
  int idx = hash(key);
  Entry *e = table[idx];
  Entry *prev = NULL;
  while (e != NULL) {
    if (strcmp(e->key, key) == 0) {
      if (prev == NULL) table[idx] = e->next;
      else prev->next = e->next;
      free(e);
      return;
    }
    prev = e;
    e = e->next;
  }
}

void print_table() {
  for (int i = 0; i < SIZE; i++) {
    printf("[%d]", i);
    Entry *e = table[i];
    while (e != NULL) {
      printf(" -> %s:%d", e->key, e->value);
      e = e->next;
    }
    printf("\n");
  }
}

int main() {
  insert("Alice", 90);
  insert("Bob", 85);
  insert("Carol", 92);
  insert("Eve", 88);

  printf("After inserts:\n");
  print_table();

  printf("\nLookup Alice: %d\n", lookup("Alice"));
  printf("Lookup Eve: %d\n", lookup("Eve"));
  printf("Lookup Zoe: %d\n", lookup("Zoe"));

  delete("Alice");
  printf("\nAfter delete Alice:\n");
  print_table();

  return 0;
}
