#include <stdio.h>

int countBits(int a){
  int temp;
  int mainCounter = 0;
  int countZeros = 0;
  int countOnes = 0;
  while (a!=0){
    if (a%2==0){
      countZeros++;
      countOnes = 0;
      if(countZeros>1&&countZeros<3){
        mainCounter++;
      }
    }else{
      countOnes++;
      countZeros = 0;
      if(countOnes>1&&countOnes<3){
        mainCounter++;
      }
    }
    a= a>>1;
  }
  return mainCounter;
}

int main(){
  int a = 58153;
  printf("%d", countBits(a));
}