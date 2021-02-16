/* Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл. */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

static int sum = 0;
static int count = 0;

void funk(int **arr,int c){
  int *f = (int*)&arr[c];
  int a = rand()%10;
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
/*
for (i = 0; i < 10*10*10; i++){
        *(arr+i) = rand() % 101;
        sum += *(arr+i);
    }
*/
int main(){
  int c =0;
  int **arr;
  srand(time(0));
  funk(arr,c);
  printf("Number of elements: %d\n", count);
  printf("Sum of elements: %d\n", sum);
  printf("Average value of the elements: %lf\n", (double)sum/count);
}