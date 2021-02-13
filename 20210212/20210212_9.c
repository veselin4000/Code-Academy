#include <stdio.h>
#include <stdlib.h>
int main(){
  int *arr;
  int size;
  printf("Enter size: ");
  scanf("%d", &size);
  arr = (int *)malloc(size*sizeof(int));
  if (NULL == arr){
    printf("Allocation memory error!\n");
    exit(1);
  }
  for(int i=0;i<size;i++){
    arr[i]=i;
    printf("%d\t",arr[i]);
  }
  printf("\nResize : ");
  scanf("%d", &size);
  arr = realloc(arr, size*sizeof(int));
  if (NULL == arr){
    printf("Reallocation memory error!\n");
    exit(2);
  }
  for(int i=0;i<size;i++){
    arr[i]=i;
    printf("%d\t",arr[i]);
  }
  free(arr);
  return 0;
}