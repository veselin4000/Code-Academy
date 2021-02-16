#include <stdio.h>

int main(){
  int a = 6;
  int *iptr = &a;
  float b = 5.5;
  float *fptr = &b;
  char c = 'z';
  char *cptr = &c;

  printf("Pointer to a value is %d\n", *iptr);
  printf("Pointer to b value is %f\n", *fptr);
  printf("Pointer to c value is %c\n", *cptr);
  return 0;
}