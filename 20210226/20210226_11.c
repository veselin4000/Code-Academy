/*Задача 11. тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по-горе начин.*/
#include <stdio.h>
#include <stdlib.h>
#pragma pack (1)

typedef struct node{
  int a; 
  struct node *node;
}t_node;

//typedef node_t * t_ptrNode;

int main(){
  t_node *n=(t_node*)malloc(sizeof(t_node));
  printf("Size of n: %d",sizeof(n));
  free(n);
  return 0;
}