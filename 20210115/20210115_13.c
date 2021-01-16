#include <stdio.h>
#include <string.h>

int main(){
  char str[] = "HELLO";
  
  for (int i = 0; i < sizeof(str)-1 ; i++) {
    str[i] = str[i]+32;
  }
  printf("%s", str);
}