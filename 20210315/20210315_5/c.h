#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode_t treeNode_t;

typedef struct treeNode_t{
  int data;
  treeNode_t *left;
  treeNode_t *right;
}treeNode_t;

extern treeNode_t *root;

treeNode_t *insert(int d);
treeNode_t *search_rec(treeNode_t *t, int n);
void preorder(treeNode_t *n);