#include <stdio.h>

void isLetter(char c){
  if (c>=65&&c<=90||c>=97&&c<=122){
    printf("%c is a letter",c);
  }else{
    printf("%c is not a letter.",c);
  }
}

int main(){
  char x = 0;
  x = getchar();
  isLetter(x);
}