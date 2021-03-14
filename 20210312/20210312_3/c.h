#include <stdio.h>
#include <stdlib.h>

typedef struct t_node {
    int m_nValue;
    struct t_node *m_pNext;
}t_node; 

t_node *start;

void init();
int add(int);
void search(int n);
void printList();