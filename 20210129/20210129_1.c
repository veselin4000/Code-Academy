#include <stdio.h>
extern const double PI;

double circleArea(double r){
  return PI * r * r;
}

int main(){
  double r;
  printf("r = ");
  scanf("%lf",&r);
  printf("%lf", circleArea(r));
}
const double PI = 3.14;