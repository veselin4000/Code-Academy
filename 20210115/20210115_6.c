#include <stdio.h>

int main(){
  float a = 0xAAf;
  int b = 0xAA;
  unsigned int c = 0xAAu;

  printf("a = %f,b = %d,c = %u\n",a, b, c);
  return 0;
}