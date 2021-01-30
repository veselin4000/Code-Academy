#include <stdio.h>
#include <math.h>

int nok(int a, int b){
  int n = 0;
  if (a>b){
    n=a;
  }else{
     n=b;
  }
  
  for (int i = n; i <= a * b; i++) {
    if (i % a == 0 && i % b == 0) {
      return i;
    }
  }
}

float abss(float a){
  if (a<0){
    return -a;
  }
  return a;
}
float sqrtT(float b){
  if (b<0){
    return sqrt(abss(b));
  }else{
    return sqrt(b);
  }
}