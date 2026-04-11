#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *prev;
  struct Node *next;
} Node;

Node *create_node(int value) {
  Node *n = malloc(sizeof(Node));
  n->data = value;
  n->prev = NULL;
  n->next = NULL;
  return n;
}

void print_forward(Node *head) {
  Node *c = head;
  printf("Forward:  ");
  while (c != NULL) {
    printf("%d <-> ", c->data);
    c = c->next;
  }
  printf("NULL\n");
}

void print_backward(Node *tail) {
  Node *c = tail;
  printf("Backward: ");
  while (c != NULL) {
    printf("%d <-> ", c->data);
    c = c->prev;
  }
  printf("NULL\n");
}

Node *insert_head(Node *head, int value) {
  Node *n = create_node(value);
  n->next = head;
  if (head != NULL) head->prev = n;
  return n;
}

Node *get_tail(Node *head) {
  Node *c = head;
  while (c->next != NULL) c = c->next;
  return c;
}

Node *delete_node(Node *head, int value) {
  Node *c = head;
  while (c != NULL && c->data != value) c = c->next;
  if (c == NULL) return head;
  if (c->prev != NULL) c->prev->next = c->next;
  else head = c->next;
  if (c->next != NULL) c->next->prev = c->prev;
  free(c);
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
  Node *head = create_node(20);
  head = insert_head(head, 10);
  Node *tail = get_tail(head);

  // append 30
  Node *n30 = create_node(30);
  tail->next = n30;
  n30->prev = tail;

  print_forward(head);
  print_backward(get_tail(head));

  head = delete_node(head, 20);
  printf("\nAfter delete 20:\n");
  print_forward(head);
  print_backward(get_tail(head));

  free_list(head);
  printf("\nList freed\n");

  return 0;
}
