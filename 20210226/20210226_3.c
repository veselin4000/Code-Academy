/*Задача 3. Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип.*/
#include <stdio.h>
typedef  int t_Int;
typedef int * t_ptrInt;

int main(){
  t_Int a = 6;
  t_ptrInt p=&a;
  printf("%d",*p);
  return 0;
}