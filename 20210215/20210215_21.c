/*Задача 21. Напишете функция, която сортира лексикографски масив от
символи (char[]) използвайки qsort.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(char*)a - *(char*)b );
}

void arrSort(char *arr){
  qsort(arr,4,sizeof(char),cmpfunc);
  arr[strlen(arr)-3]='\0';
}

int main(){
  char arr[] = {'d','c','b','a','e'};
  arrSort(arr);
  printf("%s",arr);
  return 0;
}