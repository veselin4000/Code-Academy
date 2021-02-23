/*Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат (
https://en.wikipedia.org/wiki/Comma-separated_values ). Пример:
prog1 > structs20.cvs*/
#include <stdio.h>
#include <string.h>

struct st{
  int n;
  char c[10];
  double d;
  enum {true,false}e;
};

int main(){
  struct st s[20];
  for(int i=0;i<20;i++){
    s[i].n=i;
    strcpy (s[i].c, "Hello");
    s[i].d=(double)i/5;
    s[i].e=1;
  }

  for(int i=0;i<20;i++){
    printf("%d,%s,%lf,%d\n", s[i].n, s[i].c, s[i].d, s[i].e);
  }
  return 0;
}