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
  Node *c = head;
  while (c != NULL) {
    printf("%d -> ", c->data);
    c = c->next;
  }
  printf("NULL\n");
}

// Insert at head
Node *insert_head(Node *head, int value) {
  Node *n = create_node(value);
  n->next = head;
  return n;
}

// Insert at tail
void insert_tail(Node *head, int value) {
  Node *n = create_node(value);
  Node *c = head;
  while (c->next != NULL) {
    c = c->next;
  }
  c->next = n;
}

// Delete by value
Node *delete_node(Node *head, int value) {
  if (head == NULL) return NULL;
  if (head->data == value) {
    Node *next = head->next;
    free(head);
    return next;
  }
  Node *c = head;
  while (c->next != NULL && c->next->data != value) {
    c = c->next;
  }
  if (c->next != NULL) {
    Node *temp = c->next;
    c->next = temp->next;
    free(temp);
  }
  return head;
}

void free_list(Node *head) {
  while (head != NULL) {
    Node *temp = head;
    head = head->next;
    free(temp);
  }
}

int main() {
  Node *list = create_node(20);
  insert_tail(list, 30);
  insert_tail(list, 40);
  list = insert_head(list, 10);

  printf("After inserts:\n");
  print_list(list);

  list = delete_node(list, 30);
  printf("\nAfter delete 30:\n");
  print_list(list);

  list = delete_node(list, 10);
  printf("\nAfter delete 10 (head):\n");
  print_list(list);

  free_list(list);
  printf("\nList freed\n");

  return 0;
}
