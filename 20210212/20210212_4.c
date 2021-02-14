/*Задача 4.
Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  printf("Enter number of array elements: ");
  scanf("%d",&n);
  
  int *arr = (int*)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++){
    scanf("%d", arr+i);
  }
  for (int i = 0; i < n; i++){
    printf("%d ", *(arr+i));
  }
  free(arr);
  return 0;
}