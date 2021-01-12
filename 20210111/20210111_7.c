#include <stdio.h>

int evenPos(int num ,int ind){
  int mask = 0xAAAAAAAA;
  return num&mask;
}

int main(){
  int a = 15;
  int b = 85;
  printf("%d", evenPos(a, b));
  return 0;
}