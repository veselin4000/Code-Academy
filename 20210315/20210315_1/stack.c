#include "stack.h"

int push(int n){
    node_t *p = start;
    start = (node_t *)malloc(sizeof(node_t));
    if (!start)
        return 1;
    start->data = n;
    start->next = p;
    return 0;
}

int pop(int *n){
    if (start){
        *n = start->data;
        node_t *p = start;
        start = start->next;
        free(p);
        return 1;
    }else{
        return 0;
    }
}