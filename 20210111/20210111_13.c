#include <stdio.h>

int countDiffBits(int a, int b){
  int temp = a&b;
  int count=0;int n = 1;
  for(int i = 0; i<4; i++){
    n=n<<i;
    if((a&n)!=(b&n)){
      count++;  
    } 
    n=1;
  }return count;
}

int main(){
  int a = 0;
  int b = 10;
  printf("%d", countDiffBits(a, b));
}