#include <stdio.h>

int iterSol(){
  int n = 1;
  int i = 1;
  for (; i <= 30; i++){
    n*=i;
  }
  return n;
}

int main(){
  printf("%d", iterSol());
}