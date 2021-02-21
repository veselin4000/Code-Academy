#include <stdio.h>
struct point{
  int x;
  int y;
};

int main(){
  char arr[15][15];
  for (int i = 0; i < 15; i++){
    for (int j = 0; j < 15; j++){
      arr[i][j]='-';
    }
  }
  struct point p,pp;
  p.x=3;
  p.y=4;
  arr[p.x][p.y]='@';
  pp.x=7;
  pp.y=10;
  arr[pp.x][pp.y]='@';
    for (int i = p.x; i <= pp.x; i++){
      for (int j = p.y; j <= pp.y; j++){
        arr[i][j]='@';
      }
    }
    
  for (int i = 0; i < 15; i++){
    for (int j = 0; j < 15; j++){
      printf("%c",arr[i][j]);
    } 
    printf("\n");
  }
}