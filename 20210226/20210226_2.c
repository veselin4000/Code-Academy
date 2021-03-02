/*Задача 2 Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера.*/
#include <stdio.h>

typedef long long int  t_LLInt;

int main(){
  t_LLInt a=5;
  printf("%lld\n", a);
  printf("%lld",sizeof(t_LLInt));
  return 0;
}