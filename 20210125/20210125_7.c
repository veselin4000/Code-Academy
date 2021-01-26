#include <stdio.h>

void deletearray(char arr[]){
  for (int i = 0; i < 1024; i++){
    arr[i]=0;
  }
}

int main(){
  char c;
  int count = 0;
  char arr[1024];

  while ((c=getchar())!=EOF){
    arr[count]=c;count++;
    if (count>80&&c=='\n'){
      count = 0;
      printf("%s",arr);
      deletearray(arr);
    }else if (count<80&&c=='\n'){
      deletearray(arr);
      count = 0;
    } 
  }
  return 0;
}