#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
  char *arr = (char *)malloc(32);
  gets(arr);
  int sum = 0;
  int flag = 0;
   /* for(int i = (strlen(arr))/2-1; i >=0; i--){  */   //for(int i = (strlen(arr))/2+1,j=i; i >=0, j <strlen(arr); i--,j++){
     /* if((*(arr+i)) != (*(arr+strlen(arr)-1-i))){ */   // if((*(arr+i)) != (*(arr+j))){
        for (int i = 0,j = strlen(arr)-1; i <j; i++,j--)
        {
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