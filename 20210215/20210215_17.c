#include <stdio.h>
#include <string.h>

int main(){
  char *str = "Hello world";
  char *str2;
  memset(str2,48,strlen(str));
  printf("%s\n", str2);
  strcpy(str2,str);
  printf("%s\n", str2);
  return 0;
}