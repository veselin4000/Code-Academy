#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int size;
  printf("Enter size: ");
  scanf("%d",&size);
  int *buffer;
  int i = 0;
  buffer = (int*)alloca(size);
  if (NULL==buffer){
    printf("Allocation memory error!\n");
    exit(1);
  }
  
  for (int i = 0; i < size; i++){
    printf("Enter element %d: ",i);
    scanf("%d",&buffer[i]);
  }
  printf("Elements: ");
  for (i = 0; i < size; i++){
    printf("%d ",*(buffer+i));
  }
  return 0;
}