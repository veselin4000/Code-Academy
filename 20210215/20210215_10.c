#include <stdio.h>

int main(){
  int a = 5;
  int *ptr;
  printf("%p\n",a);
  *ptr = 4;
  printf("%p\n",*ptr);
  printf("%d\n",a); 
  printf("%d\n",*ptr);
}