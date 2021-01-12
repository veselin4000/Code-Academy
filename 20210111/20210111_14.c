#include <stdio.h>

void oddNumbers(int a){
  int s=a;
  int counter = 0;
  int mask = 1;
  while (s>0){
    if (counter%2==0){
      mask = mask<<counter;
      a = a^mask;
    }
    counter++;
    s = s>>1;
  }printf("%d", a);
}

int main(){
  int a = 5;
  oddNumbers(a);
}