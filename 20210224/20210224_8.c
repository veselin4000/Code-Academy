#include <stdio.h>
#define MY_CONCAT(x,y) x##y

int main() {
  MY_CONCAT(print,f)("\nThis is test\n");
  MY_CONCAT(ch,ar) a='s';
  printf("%c",a);
  return 0;
} 