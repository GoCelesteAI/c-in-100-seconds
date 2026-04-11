#include <stdio.h>

#define MAX 10

typedef struct {
  int items[MAX];
  int top;
} Stack;

void init(Stack *s) {
  s->top = -1;
}

int is_empty(Stack *s) {
  return s->top == -1;
}

int is_full(Stack *s) {
  return s->top == MAX - 1;
}

void push(Stack *s, int value) {
  if (is_full(s)) {
    printf("Stack overflow!\n");
    return;
  }
  s->items[++s->top] = value;
}

int pop(Stack *s) {
  if (is_empty(s)) {
    printf("Stack underflow!\n");
    return -1;
  }
  return s->items[s->top--];
}

int peek(Stack *s) {
  if (is_empty(s)) return -1;
  return s->items[s->top];
}

void print_stack(Stack *s) {
  printf("Stack: ");
  for (int i = 0; i <= s->top; i++) {
    printf("%d ", s->items[i]);
  }
  printf("(top = %d)\n", s->top);
}

int main() {
  Stack s;
  init(&s);

  push(&s, 10);
  push(&s, 20);
  push(&s, 30);
  print_stack(&s);

  printf("Peek: %d\n", peek(&s));

  printf("Pop: %d\n", pop(&s));
  printf("Pop: %d\n", pop(&s));
  print_stack(&s);

  printf("Empty: %d\n", is_empty(&s));
  pop(&s);
  printf("Empty: %d\n", is_empty(&s));

  return 0;
}
