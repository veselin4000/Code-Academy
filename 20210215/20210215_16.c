#include <stdio.h>
#include <string.h>

int main(){
  char *str = "Hello world";
  char *str2;
  strcpy(str2, str);
  printf("%s", str2);
  return 0;
}