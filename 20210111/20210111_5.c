#include <stdio.h>

void obarniBitNa(int num, int ind){
  int temp = 1;
  temp = temp<<ind;
  num = num ^ temp;
  printf("%d", num);
}

int main(){
  int a = 5;
  int index = 1;
  obarniBitNa(a, index);
  return 0;
}