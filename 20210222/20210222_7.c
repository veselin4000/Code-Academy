/*Задача 7.Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана.*/
#include <stdio.h>
#include <string.h>

union un{
  int n;
  float f;
  char c[32];
};

int main(){
  union un a;
  a.n=5;
  printf("%d\n", a.n);
  a.f=3.14;
  printf("%f\n", a.f);
  strcpy(a.c,"Hello");
  printf("%s", a.c);
  printf("\n%d %f %s", a.n, a.f, a.c);
  return 0;
}
