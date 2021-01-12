#include <stdio.h>

void vzemiBitna(int num,int index){
  int mask = 1;
  num = num>>index;
  printf("%d",num & mask);
}

int main(){
  int num = 10;
  int index = 1;
  vzemiBitna(num, index);
  return 0;
}