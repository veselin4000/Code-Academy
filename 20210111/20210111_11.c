#include <stdio.h>

int sumNums(int a){
  int temp,count;
  while (a>0){
    temp=a%2;
    printf("%d * 2 ^ %d + ",temp, count);
    a = a>>1;
    count++;
  }
}

int main(){
  int a = 5;
  sumNums(a);
}