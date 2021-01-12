#include <stdio.h>

int posDivByThree(int a){
  int mask =8;
  int num = a|mask;
  return num;
}

int main(){
  int a = 5;
  printf("%d", posDivByThree(a));
}