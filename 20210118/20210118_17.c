#include <stdio.h>

void numGen(){
 static long long int A = 1;
  A ^= A << 13;
  A ^= A >> 17;
  A ^= A << 5;
  printf("%d\n", A);
}

int main(){
  for (int i = 0; i < 5; i++){
    numGen();
  }
  return 0;
}