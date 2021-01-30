#include <stdio.h>
#include <math.h>
#include <windef.h>
#include "prot.h"

int nok(int a, int b){
  for (long long i = max(a, b); i <= (long long)a * b; i++) {
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
int sqrtT(float b){
  if (b<0)
  {
    return sqrt(abss(b));
  }else
  {
    return sqrt(b);
  }
  
  

}