#include <stdio.h>
const double PI =3.14159;

void ellipseArea(double a, double b){
 // int a = PI * a;
  printf("%.2lf", PI*a*b);
}

int main(){
  int a=5,b=3;
  circleArea(a,b);
}