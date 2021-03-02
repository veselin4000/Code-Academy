/*Задача 6. Напишете структура с потребителски тип key_t, която
съдържа символен низ и число.*/
#include <stdio.h>

typedef struct a{
  char c[10];
  int i;
}key;

int main(){
  key a={"code",10};
  printf("%d %s", a.i, a.c);
  return 0;
}