#include <stdio.h>

int main(){
  int x = 10;
  int y = 10;
  int true = 0;
  int false = 0;
  true = ++x + x||y;
  printf("%d\n", true);
  return 0;
}