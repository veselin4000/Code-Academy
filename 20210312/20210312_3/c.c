#include "c.h"

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
void search(int n){
  t_node *p = start;
  int i;
  for(i = 0;i < 14-n;i++){
    p = p->m_pNext;
  }
  printf("%d element is %d\n",n,p->m_nValue);
}

void printList(){
  t_node *ptr = start;
  while(ptr != NULL){
    printf("%d, ",ptr->m_nValue);
    ptr = ptr->m_pNext;
  }
}