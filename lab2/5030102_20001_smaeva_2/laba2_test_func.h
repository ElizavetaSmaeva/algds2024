#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int key;
    struct Node *left;
    struct Node *right;
} Node;

Node* search(Node *root, int key) ;
Node* insert(Node* root, int key) ;
Node* minValueNode(Node *node) ;
Node* deleteNode(Node *root, int key) ;
int inOrderTraversal(Node *root);
