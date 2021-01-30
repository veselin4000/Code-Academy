#include <stdio.h>
#include "f.h"

int main(){
  int a, b, c;
  printf("a = ");
  scanf("%d",&a);
  printf("b = ");
  scanf("%d",&b);
  printf("c = ");
  scanf("%d",&c);
  printf("Sum of %d and %d is %d", a, b, add(a,b));
  printf("Increment value of %d is %d", c, incr(c));
}