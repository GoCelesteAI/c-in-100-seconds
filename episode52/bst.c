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

Node *search(Node *root, int value) {
  if (root == NULL || root->data == value) return root;
  if (value < root->data) return search(root->left, value);
  return search(root->right, value);
}

Node *find_min(Node *root) {
  while (root->left != NULL) root = root->left;
  return root;
}

Node *delete(Node *root, int value) {
  if (root == NULL) return NULL;
  if (value < root->data)
    root->left = delete(root->left, value);
  else if (value > root->data)
    root->right = delete(root->right, value);
  else {
    // found it
    if (root->left == NULL) {
      Node *temp = root->right;
      free(root);
      return temp;
    }
    if (root->right == NULL) {
      Node *temp = root->left;
      free(root);
      return temp;
    }
    Node *min = find_min(root->right);
    root->data = min->data;
    root->right = delete(root->right, min->data);
  }
  return root;
}

void inorder(Node *root) {
  if (root == NULL) return;
  inorder(root->left);
  printf("%d ", root->data);
  inorder(root->right);
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

  printf("Tree: ");
  inorder(root);
  printf("\n");

  Node *found = search(root, 40);
  printf("Search 40: %s\n", found ? "found" : "not found");
  found = search(root, 99);
  printf("Search 99: %s\n", found ? "found" : "not found");

  root = delete(root, 20);
  printf("\nDelete 20 (leaf): ");
  inorder(root);
  printf("\n");

  root = delete(root, 30);
  printf("Delete 30 (one child): ");
  inorder(root);
  printf("\n");

  root = delete(root, 50);
  printf("Delete 50 (two children): ");
  inorder(root);
  printf("\n");

  free_tree(root);
  return 0;
}
