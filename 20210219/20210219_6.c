
#include <stdio.h>
struct pointt
{
  int a;
  int b;
};

int main(){
  char arr[15][15];
  int row=0;
  for (int i = 0; i < 15; i++){
    for (int j = 0; j < 15; j++){
      arr[i][j]='-';
    } //printf("\n"); 
  }
  struct pointt p,pp;//ppp;
  p.a=3;
  p.b=4;
  //ppp.a=7;ppp.b=4;
  pp.a=7;pp.b=9;
  arr[p.a][p.b]='@';
  arr[pp.a][pp.b]='@';
  //arr[ppp.a][ppp.b]='@';

      for (int i = p.a; i <= pp.a; i++){row++;
      for (int j = p.b; j <p.b+ row; j++){
        arr[i][j]='@';
      } 
    }


  for (int i = 0; i < 15; i++){
    for (int j = 0; j < 15; j++){
      printf("%c",arr[i][j]);
    } printf("\n");
  }
}