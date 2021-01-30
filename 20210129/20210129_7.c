#include <stdio.h>

double triangleArea(int a, int b);
double rectangleArea(int a, int b);

int main(){
  int a, b;
  printf("a = ");
  scanf("%d",&a);
  printf("b = ");
  scanf("%d",&b);
  printf("Triangle area is %lf",triangleArea(a,b));
  printf("Rectangle area is %lf",rectangleArea(a,b));
}
double triangleArea(int a, int b){
  return (a*b)/2;
} 

double rectangleArea(int a, int b){
  return triangleArea(a,b)*2;
}