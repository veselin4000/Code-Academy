#include <stdio.h>
#define GENERIC_MAX(t,x,y)(x > y ? x : y)

int main(){
  printf("%c\n",(GENERIC_MAX(char, 'a', 'x')));
  printf("%d\n",(GENERIC_MAX(int, 5, 12)));
  printf("%f\n",(GENERIC_MAX(float, 3.14, 1.50)));
  return 0;
}