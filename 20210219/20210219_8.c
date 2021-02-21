
#include <stdio.h>
struct point{
  int x;
  int y;
};
struct rect{
  struct point a;
  struct point b;
};

struct point makepoint(int x, int y){
	struct point p;
	p.x=x;
	p.y=y;
	return p;
}

int main(){
  
  struct rect screen={makepoint(0,0), makepoint(15,15) };
char arr[screen.b.x][screen.b.y];
  for (int i = 0; i < screen.b.x; i++){
    printf("\n");
    for (int j = 0; j < screen.b.y;j++){
      arr[i][j]='-';
      printf("%c",arr[i][j]);
    }
  }
}