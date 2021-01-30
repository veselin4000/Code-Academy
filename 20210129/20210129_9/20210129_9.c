#include <stdio.h>
#include "9.h"

int add(int a, int b){
  return a+b;
}

int multiply(int a, int b){
  return add(a, b)* b;
}

double divide(int a, int b){
  return multiply(add(a, b) ,b)/ b;
}

int main(){
  int a, b;
  printf("a = ");
  scanf("%d",&a);
  printf("b = ");
  scanf("%d",&b);
  printf("Sum of %d and %d is %d\n", a, b, add(a, b));
  printf("Multiply of (%d + %d) * %d is %d\n", a, b, b, multiply(a, b));
  printf("Division of %d / %d is %lf\n",multiply(a, b),b,  divide(a, b));
}