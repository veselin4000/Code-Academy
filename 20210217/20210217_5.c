/*Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int arr[5][5];
  int *ptr=(int*)&arr;
  srand(time(NULL));
  for (int i = 0; i < 25; i++){
    *(ptr+i)=rand()%10;
    if(*(ptr+i)<=5){
      printf("%d ",*(ptr+i));
    }
  }
  printf("\n\n");
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      printf("%d ",arr[i][j]);
    }  
    printf("\n");
  } 
  return 0;
}