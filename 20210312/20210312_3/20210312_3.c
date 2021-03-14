/*Задача 3.
Направете едносвързан списък, съдържащ числата 1-14 и
принтирайте петия елемент от края му.*/
#include "c.h"

extern t_node *start;

int main(){
  int i;
  init();
  for(i=1; i<15; ++i)
    add(i);
  printf("\n");
  search(5);
  printList();
  return 0;
}