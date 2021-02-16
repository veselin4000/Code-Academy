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