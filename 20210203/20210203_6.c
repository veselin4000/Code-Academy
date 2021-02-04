/*Задача 6. Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b). */
#include <stdio.h>

void my_swap(int *a,int  *b);

int main(){
  int x=2;
  int y=3;
  int *a;
  int *b;
  a=&x;
  b=&y;
  printf("x = %d, y = %d \n",x,y);
  my_swap(a,b);
  printf("x = %d, y = %d",x,y);
  return 0;
}
void my_swap(int *a, int *b){
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}