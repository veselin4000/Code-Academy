#include "20210315_2.h"
void insertKey(int x,treeNode_t **T){
    if(*T == NULL){
        *T = (treeNode_t*)malloc(sizeof(treeNode_t));
        (*T)->data = x;
        (*T)->left = NULL;
        (*T)->right = NULL;
    }
    else if(x < (*T)->data){
        insertKey(x,&(*T)->left);
    }else{
        insertKey(x,&(*T)->right);
    }
}
void preorder(treeNode_t *n){
    if(n){
        printf("%d\t", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}