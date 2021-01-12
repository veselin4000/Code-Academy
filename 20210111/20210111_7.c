#include <stdio.h>

int evenPos(int num){
  int mask = 0xAAAAAAAA;
  return num&mask;
}

int main(){
  int a = 15;
  printf("%d", evenPos(a));
  return 0;
}