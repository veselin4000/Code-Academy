#include <stdio.h>

int posDivByThree(int a){
  int mask =04;
  int num = a|mask;
  return num;
}

int main(){
  int a = 10;
  printf("%d", posDivByThree(a));
}