#include <stdio.h>

int main(){
  int a = 8;
  int *ptr = &a;
  *ptr += 5;
  printf("%d", a);
  return 0;
}