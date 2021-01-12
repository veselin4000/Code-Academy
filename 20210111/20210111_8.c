#include <stdio.h>

int findBiggestPos(int a){
  int count = 0;
  while (a!=0)
  {
    count++;
    a = a>>1;
  }
return count;
}

int main(){
  int a = 15;
  printf("%d", findBiggestPos(a));
}