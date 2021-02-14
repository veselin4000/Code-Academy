#include <stdio.h>
#include <stdlib.h>
int main(){
  int *arr;
  int arrSize;
  int i=0;
  printf("Enter size: ");
  scanf("%d", &arrSize);
  arr = (int *)calloc(arrSize,sizeof(int));
  if (NULL == arr){
    printf("Allocation memory error!\n");
    exit(1);
  }
  printf("Address of allocated memory: %u\n",arr);
  for(i;i<arrSize;i++){
    printf("%d ",arr[i]);
  }
  printf("\nEnter the new size: ");
  scanf("%d", &arrSize);
  arr = realloc(arr, arrSize);
  if (NULL == arr){
    printf("Reallocation memory error!\n");
    exit(2);
  }
  
  for(i;i<arrSize;i++){
    arr[i]=i;
    printf("%d ",arr[i]);
  }

  printf("\nAddress of allocated memory: %u\n",arr);
  for(i=0;i<arrSize;i++){
    printf("%d ",arr[i]);
  }

  free(arr);
  return 0;
}