#include <stdio.h>

int iz4istiBitna(int num, int index){
  int temp = 1;
  temp = ~(temp<<index);
  num = num&temp;
  return num;
}

int main(){
  int num = 15;
  int index = 2;
  printf("%d", iz4istiBitna(num, index));
  return 0;
}