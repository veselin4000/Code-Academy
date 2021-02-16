#include <stdio.h>
#include <string.h>

int main(){
  char c[]= "Baba, kaka, mama";
  char *p;
  for (int i = 0; i < strlen(c); i++){
    if (*(c+i)=='a'){
      *(c+i)='o';
    } 
  }
  printf("%s",c);
  return 0;
}