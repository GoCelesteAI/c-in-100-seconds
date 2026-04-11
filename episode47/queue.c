#include <stdio.h>

#define MAX 5

typedef struct {
  int items[MAX];
  int front;
  int rear;
  int count;
} Queue;

void init(Queue *q) {
  q->front = 0;
  q->rear = -1;
  q->count = 0;
}

int is_empty(Queue *q) {
  return q->count == 0;
}

int is_full(Queue *q) {
  return q->count == MAX;
}

void enqueue(Queue *q, int value) {
  if (is_full(q)) {
    printf("Queue full!\n");
    return;
  }
  q->rear = (q->rear + 1) % MAX;
  q->items[q->rear] = value;
  q->count++;
}

int dequeue(Queue *q) {
  if (is_empty(q)) {
    printf("Queue empty!\n");
    return -1;
  }
  int value = q->items[q->front];
  q->front = (q->front + 1) % MAX;
  q->count--;
  return value;
}

int peek(Queue *q) {
  if (is_empty(q)) return -1;
  return q->items[q->front];
}

void print_queue(Queue *q) {
  printf("Queue: ");
  for (int i = 0; i < q->count; i++) {
    int idx = (q->front + i) % MAX;
    printf("%d ", q->items[idx]);
  }
  printf("(count = %d)\n", q->count);
}

int main() {
  Queue q;
  init(&q);

  enqueue(&q, 10);
  enqueue(&q, 20);
  enqueue(&q, 30);
  print_queue(&q);

  printf("Peek: %d\n", peek(&q));

  printf("Dequeue: %d\n", dequeue(&q));
  printf("Dequeue: %d\n", dequeue(&q));
  print_queue(&q);

  // circular: add more after removing
  enqueue(&q, 40);
  enqueue(&q, 50);
  print_queue(&q);

  return 0;
}
