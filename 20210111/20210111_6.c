#include <stdio.h>

int  main(){
  int a = 5;
  int pos = 1;
  int temp = 1;

  temp = temp<<pos;
  a = a ^ temp;
  printf("%d", a);
  return 0;
}