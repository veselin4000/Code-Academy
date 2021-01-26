#include <stdio.h>

int main(){
  char c ;

  while ((c= getchar())!='?'){
    if ((c >= 65&&c <= 90)||(c >= 97&&c <= 122)){ 
      putchar(c);
    }
  }
  return 0;
}