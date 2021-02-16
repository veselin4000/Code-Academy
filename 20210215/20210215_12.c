#include <stdio.h>
#include <time.h>
#include <stdlib.h>

static int sum = 0;
static int count = 0;

void funk(int **arr,int c){
  int *f = (int*)&arr[c];
  int a = 5;
  for (int i = 0; i < 10; i++){
    *(f+i)=a;
    sum+=a;
    a = rand()%10;
    count++;
    printf("%d ",f[i]);
  }
  printf("\n");
  if((++c)<10){
    return funk(arr,c);
  }else{
    return;
  }
}

int main(){
  int c =0;
  int **arr;
  srand(time(0));
  funk(arr,c);
  printf("Number of elements: %d\n", count);
  printf("Sum of elements: %d\n", sum);
  printf("Average value of the elements: %lf\n", (double)sum/count);
}