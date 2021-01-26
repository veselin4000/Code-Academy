#include <stdio.h>

int main(){
  char c;
  int count = 0;
  while ((c = getchar())!=EOF){
    while (c == ' '){
      count++;
      c = getchar();
    }
    if (count>=1){
      c = ' ';
    }
    count = 0;
    putchar(c);
  }
  return 0;
}