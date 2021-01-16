#include <stdio.h>
#include <string.h>

int main(){
  char str[] = "Hello";
  char rts[sizeof(str)] ;
  
  for (int i = 0; i < sizeof(str)-1 ; i++) {
    rts[i] = str[sizeof(str)-i-2];
  }
  printf("%s", rts);
}