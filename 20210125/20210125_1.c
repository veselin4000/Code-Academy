#include <stdio.h>

int main(){
  char c;
  int count = 0;
  c = getchar();
  while (c!=EOF){
    count++;
    c = getchar();
  }
  printf("%d\n", count);
  return 0;
}