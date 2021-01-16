#include <stdio.h>

int main(){
  char s[] = "Hi";
  int i = 0;
  
  while (i<sizeof(s)-1){
    printf("%c",s[i]);
    i++;
  }   
  printf("\n%d", i);
}