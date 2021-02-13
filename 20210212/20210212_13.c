#include <stdio.h>
int main(){
  int x, y;
  int res = 1;
  printf("Enter value for x: ");
  scanf("%d", &x);
  printf("Enter value for y: ");
  scanf("%d", &y);
  for (;y>0;y--){
    res *= x;
  }
  printf("result = %ld", res);
  return 0;
}