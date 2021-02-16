#include <stdio.h>
#include <string.h>

void cpy(char *ptrFrom,char *ptrTo,int n){
  for (int i = n; i >=0 ;i--){
    *(ptrTo+i) = *(ptrFrom+i);
  }
}

int main(){
  char *arr="A string to be copied.";
  char *arr1="I am very good in string copying!";
  char arr3[20],arr4[20];
  int arrlen = strlen(arr);
  int arr1len = strlen(arr1);

  cpy(arr,arr3,arrlen);
  printf("%s\n",arr3);
  
  cpy(arr1,arr4,arr1len);
  printf("%s\n",arr4);
  return 0;
}