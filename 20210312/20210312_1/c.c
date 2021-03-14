#include "1func.h"

void init(){
    start = NULL;
};

int add(int n){
    t_node *p = start;
    start = (t_node*)malloc(sizeof(t_node));
    if(!start) return -1;
    start->m_nValue = n;
    start->m_pNext = p;

    return 0;
}

int dellFirst(int *n){
    t_node *p = start;
    if(start){
        *n = start->m_nValue;
        start = start->m_pNext;
        free(p);
        return 1;
    }else
        return 0;
}

void printList(){
    t_node *ptr = start;
    while(ptr != NULL){
        printf("%d, ",ptr->m_nValue);
        ptr = ptr->m_pNext;
    }
}