/*Задача 9.
Напишете по 2 тройни цикъла (един и същи код) за масивите.
Хайде да го изнесем във функция.*/
#include <stdio.h>
int arr[5][5][5];
void input( int a[][5][5]){
  int b=0;
   
  for(int i=0; i<5; i++){
    for(int j=0;j<5;j++){
      for(int k=0;k<5;k++){
        a[i][j][k]=b++;
      }
    }
  }
}

void printArray(int a[][5][5]){
  for(int i=0; i<5; i++){
    for(int j=0;j<5;j++){
      for(int k=0;k<5;k++){
        printf("%d\n",a[i][j][k]);
      }
    }
  }
}
int main(){
    int arr[5][5][5];
    input(arr);
    printArray(arr);
    return 0;
}