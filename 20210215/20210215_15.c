#include <stdio.h>

void cpy(char *ptrFrom,char *ptrTo){
  while(*(ptrFrom)){
    *(ptrTo++) = *(ptrFrom);
    ptrFrom++;
  }
}

int main(){
  char *arr="A string to be copied.";
  char *arr1="I am very good in string copying!";
  char arr3[32],arr4[32];
  cpy(arr,arr3);
  printf("%s\n", arr3);
  cpy(arr1,arr4);
  printf("%s", arr4);
  return 0;
}