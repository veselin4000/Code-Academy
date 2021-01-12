#include <stdio.h>

void vdigniBitNa(int num, int ind){
  int temp = 1;
  temp = temp<<ind;
  printf("%d", num|temp);
}

int main(){
  int a = 5;
  int index = 1;
  vdigniBitNa(a, index);
  return 0;
}