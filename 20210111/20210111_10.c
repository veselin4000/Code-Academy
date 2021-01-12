#include <stdio.h>

 void removeBits(int num, int ind){
   int temp = num;
   num = num>>ind;
   num = num<<ind;
   num = num^temp;
   printf("%d", num);
 }

int main(){
  int a = 15;
  int ind =4;
  removeBits(a, ind-1);
  }