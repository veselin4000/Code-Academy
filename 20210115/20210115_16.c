#include <stdio.h>
const double PI = 3.14159;

void circleArea(double r){
 // int a = PI * a;
  printf("%.2lf\n", PI*r*r);
}

int main(){
  int a=5;
  float b = 1.5;
  int c = 13;
  circleArea(a);
  circleArea(b);
  circleArea(c);
}