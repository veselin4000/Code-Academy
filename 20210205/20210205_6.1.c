#include <stdio.h>
#include <string.h>
void strcpy_f(char *s, char *t){
  int i, j;
  for(i=0, j=0; i<strlen(t); i++, j++){
    s[j]=t[i];
  }
  s[j]='\0';
}
int main(){
  char str[]="Hello";
  char str2[]="world";
  strcpy_f(str,str2);
  printf("str: %s\n",str);
  printf("str2: %s\n",str2);
  return 0;
}