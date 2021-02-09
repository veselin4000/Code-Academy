#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  char arr[10][10];
  char letter = 'A';
  int n=0;
  int a=rand()%4;
  srand(time(NULL));

  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
      arr[i][j]='.';
    }
  }

  arr[0][0]=letter++;
  int i=0,j=0;
  int alphabet=0;

  while(alphabet<25){
    if(a==0 && (i>0&&i<=9) && (j>=0&&j<=9) && arr[i-1][j]=='.'){
      arr[i-1][j]=letter++;
      n=0;
      i=i-1;
      alphabet++;
    }else if (a==1 && (i>=0&&i<=9) && (j>=0&&j<9) && arr[i][j+1]=='.'){
      arr[i][j+1]=letter++;
      n=0;
      j=j+1;
      alphabet++;
    }else if (a==2 && (i>=0&&i<9) && (j>=0&&j<=9) && arr[i+1][j]=='.'){
      arr[i+1][j]=letter++;
      i=i+1;
      alphabet++;
      n=0;
    }else if (a==3 && (i>=0&&i<=9) && (j>0&&j<=9) && arr[i][j-1]=='.'){
      arr[i][j-1]=letter++;
      n=0;
      j=j-1;
      alphabet++;
    }else{
      n++;
      if(n>20){
        break;
      }
    }
    a=rand()%4;
  }
 
  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
      printf("%c",arr[i][j]);
    }
    printf("\n");
  }
}