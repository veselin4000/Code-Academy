/*Задача 7.
Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int size;
  printf("Enter number of array elements: ");
  scanf("%d",&size);
  int *buffer = (int*)calloc(size,sizeof(int));
  if (NULL==buffer){
      printf("Allocation memory error!\n");
      exit(1);
    }
  for (int  i = 0; i < size; i++){
    printf("%d ",buffer[i]);
  } 
  free(buffer);
  return 0;
}