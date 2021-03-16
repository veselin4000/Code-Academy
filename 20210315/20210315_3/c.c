#include "c.h"

treeNode_t *insert(int d){
  treeNode_t *tmp = (treeNode_t*)malloc(sizeof(treeNode_t));
  treeNode_t *current= NULL;
  treeNode_t *parent = NULL;
  tmp->data = d;
  tmp->right = tmp->left = NULL;
  if(NULL == root){
    root = tmp;
  }
  else{
    current = root;
    while(1){
      parent = current;
      if(d < parent->data){
        current = current->left;
        if(current == NULL){
          parent->left = tmp;
          return tmp;
        }
      }else{
        current = current->right;
        if(current == NULL){
          parent->right = tmp;
          return tmp;
        }
      }
    }
  }
}

void preorder(treeNode_t *n){
    if(n){
        printf("%d  ", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}