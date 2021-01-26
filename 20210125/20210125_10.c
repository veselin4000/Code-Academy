#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void reverse(char a[]){
  char temp[ strlen(a)];
  for (int i = 0; i < strlen(a); i++){
    temp[i]=a[strlen(a)-i-1];
  }
  printf("%s", temp);
}

int main(){

  while (1){
    char s[1024];
    scanf("%s",s);
    reverse(s);
    for (int i = 0; i < strlen(s); i++){
      s[i] = 0;
    }
    printf("\n");
  }
  return 0;
}