#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *left;
  struct Node *right;
} Node;

Node *create_node(int value) {
  Node *n = malloc(sizeof(Node));
  n->data = value;
  n->left = NULL;
  n->right = NULL;
  return n;
}

Node *insert(Node *root, int value) {
  if (root == NULL) return create_node(value);
  if (value < root->data)
    root->left = insert(root->left, value);
  else
    root->right = insert(root->right, value);
  return root;
}

// Left, Root, Right — sorted order
void inorder(Node *root) {
  if (root == NULL) return;
  inorder(root->left);
  printf("%d ", root->data);
  inorder(root->right);
}

// Root, Left, Right — copy/serialize
void preorder(Node *root) {
  if (root == NULL) return;
  printf("%d ", root->data);
  preorder(root->left);
  preorder(root->right);
}

// Left, Right, Root — delete/free
void postorder(Node *root) {
  if (root == NULL) return;
  postorder(root->left);
  postorder(root->right);
  printf("%d ", root->data);
}

void free_tree(Node *root) {
  if (root == NULL) return;
  free_tree(root->left);
  free_tree(root->right);
  free(root);
}

int main() {
  Node *root = NULL;
  root = insert(root, 50);
  insert(root, 30);
  insert(root, 70);
  insert(root, 20);
  insert(root, 40);
  insert(root, 60);

  printf("Inorder:   ");
  inorder(root);
  printf("\n");

  printf("Preorder:  ");
  preorder(root);
  printf("\n");

  printf("Postorder: ");
  postorder(root);
  printf("\n");

  free_tree(root);
  return 0;
}
