/*Задача 10. Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s.*/
#include <stdio.h>
#include <string.h>

void strncat_f(char *s, char *t, int n){
  for(int i=0, j=strlen(s);i<n; i++, j++){
    s[j]=t[i];
  }
}

int main(){
  char s[100]="Hello ";
  char t[]="world ";
  int n;
  printf("Symbols to add: ");
  scanf("%d",&n);
  strncat_f(s, t, n);
  printf("%s",s);
  return 0;
}