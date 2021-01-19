#include <stdio.h>

int main(){
  int x = 10;
  int y = 10;
  int true = 0;
  int false = 0;
  true = x == y;
  false = x!= y;
  printf("%d %d", true, false);
  return 0;
}