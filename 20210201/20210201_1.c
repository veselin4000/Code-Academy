#include <stdio.h>

void printstr(char *s){
  int i;
  for (i = 0; s[i] !='\0' ; i++){
    printf("%c ", s[i]);
  }
}

int main(){
  char str[] = "123";
  printstr(str);
}