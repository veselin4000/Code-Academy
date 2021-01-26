#include <stdio.h>
#include <string.h>

void reverse(char a[]){
  //char s[strlen(a)];
  char temp =0;
  int i = 0;
  int j = 0;
  for(i = 0, j = strlen(a)-1; i  <j ; i++, j--){ //for (int i = 0; i < strlen(a); i++)
    temp=a[j];
    a[j]=a[i];  //  temp[i]=a[strlen(a)-i-1];
    a[i]=temp;
  }
  printf("%s", a);
}

int main(){
  char s[]="Hello World";
  reverse(s);
  return 0;
}