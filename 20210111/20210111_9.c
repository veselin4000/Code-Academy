#include <stdio.h>

int funk(int num){
  int temp = 124;
  temp=~temp;
  num = num&temp;
  printf("%i",num);
}

int main(){
  int a = 15;
  funk(a);
}