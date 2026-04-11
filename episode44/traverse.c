#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

Node *create_node(int value) {
  Node *n = malloc(sizeof(Node));
  n->data = value;
  n->next = NULL;
  return n;
}

// Print all nodes
void print_list(Node *head) {
  Node *c = head;
  while (c != NULL) {
    printf("%d -> ", c->data);
    c = c->next;
  }
  printf("NULL\n");
}

// Count nodes
int count_nodes(Node *head) {
  int count = 0;
  Node *c = head;
  while (c != NULL) {
    count++;
    c = c->next;
  }
  return count;
}

// Search for a value
int search(Node *head, int value) {
  Node *c = head;
  int index = 0;
  while (c != NULL) {
    if (c->data == value) {
      return index;
    }
    index++;
    c = c->next;
  }
  return -1;
}

// Get node at index
int get_at(Node *head, int index) {
  Node *c = head;
  for (int i = 0; i < index && c != NULL; i++) {
    c = c->next;
  }
  if (c != NULL) return c->data;
  return -1;
}

void free_list(Node *head) {
  while (head != NULL) {
    Node *temp = head;
    head = head->next;
    free(temp);
  }
}

int main() {
  Node *list = create_node(10);
  list->next = create_node(20);
  list->next->next = create_node(30);
  list->next->next->next = create_node(40);

  printf("List: ");
  print_list(list);

  printf("Count: %d\n", count_nodes(list));

  printf("\nSearch 30: index %d\n", search(list, 30));
  printf("Search 99: index %d\n", search(list, 99));

  printf("\nGet index 0: %d\n", get_at(list, 0));
  printf("Get index 2: %d\n", get_at(list, 2));

  free_list(list);
  return 0;
}
