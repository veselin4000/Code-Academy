#include <stdio.h>

void copy(char *to, char *from){
  for (int i = 0; from[i] != '\0'; i++){
    to[i] = from[i];
  }
  printf("%s",to);
  }

int main(){
  char *from = "abcdef";
  char to[16];
  copy(to, from);
  return 0;
}