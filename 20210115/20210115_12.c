#include <stdio.h>
#include <string.h>

int main(){
  char str[] = "Hello";
  
  for (int i = 0; i < sizeof(str)-1 ; i++) {
    if (str[i]=='l'){
      str[i] ='x';
    }
  }
  printf("%s", str);
}