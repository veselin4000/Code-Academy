#include <stdio.h>
#include <string.h>

int main(){
  char input[10];
  char *p=input;
  char c;
  int i=0;
  printf("Enter a message: ");
  while ((c = getchar()) != '\n'){
    *(p+i) = c;
    i++;
  }//printf("%d",i);
  for (int j = i-1; j >= 0; j--){
    printf("%c", *(input+j));
  }
//printf("%s",input);
}