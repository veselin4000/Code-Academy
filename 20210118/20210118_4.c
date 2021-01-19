#include <stdio.h>

int main(){
  int x = 10;
  int y = 10;

  int true = x&&y&x<<1; // с един и същи приоритет са. от дясно на ляво
  printf("%d\n", true);

  true = x&&y^x<<1;  
  printf("%d\n", true);
  return 0;
}