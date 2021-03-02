/*Задача 4 Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност.*/
#include <stdio.h>

typedef int * t_pInt;

int sum(t_pInt a, t_pInt b){
  return *a+*b;
}

typedef int (*t_fSum)(t_pInt,t_pInt);

int main(){
  int a=1;
  int b=2;
  t_pInt p=&a;
  t_pInt q=&b;
  
  t_fSum ptr=&sum;
  printf("%d",ptr(p,q));
  return 0;
}