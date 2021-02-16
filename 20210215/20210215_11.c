#include <stdio.h>

int main(){
  int a,b;
  int *ptr =&a;
  int *ptr2=&b;
  *ptr = 5;
  *ptr2=5;
  printf("%d\n",(*ptr)*(*ptr2));
  int c = 5;
  char d = 6;
  char *f;
  ptr = &c;
  f = &d;
  printf("%d\n",(*ptr)*(*f));
  return 0;
}