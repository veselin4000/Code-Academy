#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode_t treeNode_t;

typedef struct treeNode_t{
  int data;
  struct treeNode_t *left;
  struct treeNode_t *right;
} treeNode_t;

extern treeNode_t *root;

void preorder(treeNode_t* n);
treeNode_t *insert(int d);