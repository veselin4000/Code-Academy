#include <stdio.h>
#include <stdlib.h>
#include "c.h"
int main(){
  char c;
  int line=0;
  FILE *file=fopen("IN2.txt","r");
  
  if (file == NULL) { 
    printf("Could not open file"); 
    return 0; 
  } 

 // int arr[10]={0};
  int *arr=calloc(5,sizeof(int));
  while ((c = getc(file)) != EOF){ 

    if (c=='\n'){
      line++;
    }
    if ((line%2)==0 && line!=0 && c=='\n'){
      writeToFile(arr);
      for (int i = 0; i < 5; i++){
        *(arr+i)=0;
      }
    }
    switch (c){
      case '/':
        *arr+=1;
        break;
      case 'n':
        *(arr+1)+=1;
        break;
      case '9':
        *(arr+2)+=1;
        break;
      case '8':
        *(arr+3)+=1;
        break;
      case 'r':
        *(arr+4)+=1;
        break;
      
      default:
        break;
    }
  }
  fclose(file);
}