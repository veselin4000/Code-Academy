/*Задача 1. Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте.
*/
#include <stdio.h>

typedef struct{
  int a;
  int b;
}t_Str;

int main(){
  t_Str str={2,6};
  printf("%d\n%d\n",str.a,str.b);
  return 0;
}