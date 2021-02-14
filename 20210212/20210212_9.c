/*Задача 9.
Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int *arr;
  int size;
  int i=0;
  printf("Enter size: ");
  scanf("%d", &size);
  arr = (int *)calloc(size,sizeof(int));
  if (NULL == arr){
    printf("Allocation memory error!\n");
    exit(1);
  }
  for(i;i<size;i++){
    printf("%d ",arr[i]);
  }
  printf("\nResize allocated memory: ");
  scanf("%d", &size);
  arr = realloc(arr, size*sizeof(int));
  if (NULL == arr){
    printf("Reallocation memory error!\n");
    exit(2);
  }
  for(i;i<size;i++){
    arr[i]=1;
  }
  for(i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  free(arr);
  return 0;
}