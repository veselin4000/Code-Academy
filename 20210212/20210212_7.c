#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int size;
  printf("Enter number of array elements: ");
  scanf("%d",&size);
  int *buffer = (int*)calloc(size,sizeof(int));

  for (int  i = 0; i < size; i++){
    printf("%d ",buffer[i]);
  } 
  free(buffer);
  return 0;
}