/*Задача 13. Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length());*/
#include <stdio.h>

int main(){
  char arr[]="Hello world";
  char *p = &arr[0];
  int count = 0;
  while (*(p++)){
    count++;
  }
  printf("%d",count);
  return 0;
}