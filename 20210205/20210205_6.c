#include <stdio.h>
void our_strcat(char *s, char *t){
  while(*s != '\0'){
  *s++;
  }
  while( *t!='\0' ){
  *s++ = *t++;
  }
}

int main(){
  char s[]="Hello ";
  char t[]="world!";
  our_strcat(s,t);
  printf("%s",s);
  return 0;
}