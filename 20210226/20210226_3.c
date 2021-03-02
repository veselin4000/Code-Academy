#include <stdio.h>
typedef int * t_ptrInt;
int main(){
  int a = 6;
  t_ptrInt p=&a;
  printf("%d",*p);
}