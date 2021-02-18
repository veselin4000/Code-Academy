/*Дадена е шахматна дъска 8 х 8 с една фигура кон, в някой от
четирите ъгъла. Напишете програма, която движи коня по
стандартния начин: 2 полета в една посока и едно
перпендикулярно на избраната посока с 2-те полета. Програмата
извежда всеки ход на коня във вида A1, C2, ... и завършва, когато
всички полета на дъската са обходени.*/
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(){
  int i=0,j=0;
  int chessBoard[8][8];
  int *p=(int*)chessBoard;
  srand(time(NULL));
  p=calloc(64,sizeof(int));
  int direction=rand()%7;
  int row=0,col=0,totalEl=0;
  printf("%c%d  ",'A',8);
  while (1){
    if (*(p+8*row+col)==1){
      col++;totalEl++;
      if (col==8){
        col=0;row++;
      }
      if (totalEl==64){
        break;   
      }
      continue;
    }
    *(p)=1;             /*1 = visited, 0 = not visited*/
    switch (direction){   
      case 0:
      if((i+2<8&&j-1>=0)){
        if(*(p+8*(i+2)+(j-1))!=1){
          *(p+8*(i+2)+(j-1))=1;
          printf("%c%d  ", j-1+65, 8-(i+2));
        }
        i=i+2;
        j=j-1;
        direction=rand()%7;
        break;
      }

      case 1:
      if((i+2<8&&j+1<8)){
        if(*(p+8*(i+2)+(j+1))!=1){
          *(p+8*(i+2)+(j+1))=1;
          printf("%c%d  ", j+1+65, 8-(i+2));
        }
        i=i+2;
        j=j+1;
        direction=rand()%7;
        break;
      }

      case 2:
      if((i-2>=0&&j-1>=0)){
        if(*(p+8*(i-2)+(j-1))!=1){
        *(p+8*(i-2)+(j-1))=1;
          printf("%c%d  ", j-1+65, 8-(i-2));
        }
        i=i-2;
        j=j-1;
        direction=rand()%7;
        break;
      }

      case 3:
      if((i-2>=0&&j+1<8)){
        if(*(p+8*(i-2)+(j+1))!=1){
          *(p+8*(i-2)+(j+1))=1;
          printf("%c%d  ", j+1+65, 8-(i-2));
        } 
        i=i-2;
        j=j+1;
        direction=rand()%7;
        break;
      }

      case 4:
      if((i-1>=0&&j-2>=0)){
        if(*(p+8*(i-1)+(j-2))!=1){
          *(p+8*(i-1)+(j-2))=1;
          printf("%c%d  ", j-2+65, 8-(i-1));
        }
        i=i-1;
        j=j-2;
        direction=rand()%7;
        break;
      }

      case 5:
      if((i-1>=0&&j+2<8)){
        if(*(p+8*(i-1)+(j+2))!=1){
          *(p+8*(i-1)+(j+2))=1;
          printf("%c%d  ", j+2+65, 8-(i-1));
        } 
        i=i-1;
        j=j+2;
        direction=rand()%7;
        break;
      }

      case 6:
      if((i+1<8&&j-2>=0)){
        if(*(p+8*(i+1)+(j-2))!=1){
          *(p+8*(i+1)+(j-2))=1;
          printf("%c%d  ", j-2+65, 8-(i+1));
        }
        i=i+1;
        j=j-2;
        direction=rand()%7;
        break;
      }

      case 7:
      if((i+1<8&&j+2<8)){
        if(*(p+8*(i+1)+(j+2))!=1){
          *(p+8*(i+1)+(j+2))=1;
          printf("%c%d  ", j+2+65, 8-(i+1));
        } 
        i=i+1;
        j=j+2;
        direction=rand()%7;
        break;
      }

      default:
      direction=0;
      break;
    }
  }

  printf("\n");
  int q=8;
  for (int j = 0; j < 8; j++){
    printf("%c ",'A'+j);
  }

  printf("\n | | | | | | | | \n");
  for (int i = 0; i < 64; i++){
    printf("%d ", *(p+i));
    if((i+1)%8 == 0 && i != 0){
      printf("|%d ", q--);
      printf("\n");
    }
  }
}
