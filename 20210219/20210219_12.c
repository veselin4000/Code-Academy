
#include <stdio.h>
#include <math.h>
struct TPoint{
  int x;
  int y;
};

double dist (struct TPoint a, struct TPoint b){
  return sqrt(((b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y)));
}
int main(){
  struct TPoint a={5,9};
  struct TPoint b={4,6};
    
  printf("The distance between a and b is %lf", dist(a, b));
  return 0;
}