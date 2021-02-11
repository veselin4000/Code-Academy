/*Задача 3. Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
  char *arr = (char *)malloc(32);
  gets(arr);
  int sum = 0;
  int flag = 0;
    for (int i = 0,j = strlen(arr)-1; i <j; i++,j--){
      if((*(arr+i)) == (*(arr+j))){ 
        flag = 1;
      }
    }
    if(!flag){
      printf("%s is not palindrome",arr);
    }
    else{ 
      printf("%s is palindrome",arr);
    }
  printf("%d", strlen(arr));
  free(arr);
  return 0;
}