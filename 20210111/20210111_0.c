#include <stdio.h>

int addDigit(int a, int b);

int main(){
  int a = 5;
  int b = 6;
  printf("%d", addDigit(a, b));
  return 0;
}

int addDigit(int a, int b){
  return a+b;
}