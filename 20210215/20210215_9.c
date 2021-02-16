#include <stdio.h>

int main(){
  char a = 'a';
  char *p = &a;
  char **pp = &p;
  **pp=15;

  printf("%u\n",&a);
  printf("%u\n",p);
  printf("%u\n",pp);
  printf("%d\n",a);
}