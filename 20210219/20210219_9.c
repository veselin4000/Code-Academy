
#include <stdio.h>
struct point
{
  int x;
  int y;
};
struct point add(struct point a,struct point b,struct point c){
c.x=a.x+b.x;
c.y=a.y+b.y;

return c;
}

int main(){
  struct point a={1,2};
  struct point b={3,4};
  struct point c=add(a, b, c);
  printf("%d %d",c.x,c.y);
}