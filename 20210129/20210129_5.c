#include <stdio.h>

void oddOrEven(int num){
  if (num%2==0){
    printf("%d is even.", num);
  }else{
    printf("%d is odd.", num);
  }
}

int main(){
  int x;
  printf("x = ");
  scanf("%d",&x);
  oddOrEven(x);
}