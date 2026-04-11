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

void print_list(Node *head) {
  Node *current = head;
  while (current != NULL) {
    printf("%d -> ", current->data);
    current = current->next;
  }
  printf("NULL\n");
}

void free_list(Node *head) {
  Node *current = head;
  while (current != NULL) {
    Node *temp = current;
    current = current->next;
    free(temp);
  }
}

int main() {
  Node *head = create_node(10);
  head->next = create_node(20);
  head->next->next = create_node(30);

  printf("Linked list:\n");
  print_list(head);

  // add a node at the front
  Node *new_head = create_node(5);
  new_head->next = head;
  head = new_head;

  printf("\nAfter prepend 5:\n");
  print_list(head);

  free_list(head);
  printf("\nList freed\n");

  return 0;
}
