#include <stdio.h>
#include "g.h"
extern const double PI;

double area(){
  double r;
  printf("Enter a radius\n");
  scanf("%lf", &r);
  return circleArea(r);
}

double circleArea(double r){
  return PI * r * r;
}

int main(){
  printf("%lf", area());
}
const double PI = 3.14;