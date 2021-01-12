#include <stdio.h>

int  main(){
  int a = 5;
  int index = 1;
  int temp = 1;

  temp = temp<<index;
  a = a ^ temp;
  printf("%d", a);
  return 0;
}