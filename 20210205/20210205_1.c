#include <stdio.h>
#include <string.h>
void printStr(char *s){
  for (int i = 0; s[i] !='\0'; i++){
    printf("%c", s[i]);
  }
}

int main(){
  char str[]="hello";
  printStr(str);
  return 0;
}