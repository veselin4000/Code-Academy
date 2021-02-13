#include <stdio.h>
#include <stdlib.h>
int main(){
  int *arr;
  int arrSize;
  
  printf("Enter size: ");
  scanf("%d", &arrSize);
  arr = (int *)malloc(arrSize);
  if (NULL == arr){
    printf("Allocation memory error!\n");
    exit(1);
  }
  for(int i=0;i<arrSize;i++){
    arr[i]=i;
    printf("%d\t",arr[i]);
  }
  printf("\nEnter the new size: ");
  scanf("%d", &arrSize);
  arr = realloc(arr, arrSize);
  if (NULL == arr){
    printf("Reallocation memory error!\n");
    exit(2);
  }
  for(int i=0;i<arrSize;i++){
    arr[i]=i;
    printf("%d\t",arr[i]);
  }
  free(arr);
  return 0;
}