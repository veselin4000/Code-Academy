#include <stdio.h>

int main(){
  char c;
  while ((c=getchar())!=EOF){
    if (c >= 65&&c <= 90){
      c=c+32;  
    }
    putchar(c); 
  }
  return 0;
}