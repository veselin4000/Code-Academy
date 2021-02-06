/*Задача 9. Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s .*/
#include <stdio.h>

void strncpy_f(char *s, char *t, int n){
  int i,j;
  for(i=0, j=0; i<n; i++, j++){
    s[j]=t[i];
  }
}
int main(){
  char s[32];
  char t[]="Hello world!";
  int n;
  printf("Symbols to copy: ");
  scanf("%d",&n);
  strncpy_f(s, t, n);
  printf("%s",s);
  return 0;
}