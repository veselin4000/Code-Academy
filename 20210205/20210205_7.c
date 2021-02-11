/*Задача 7. Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено.*/
#include <stdio.h>
#include <string.h>

int strend(char *s, char *t){
  int x = 0;
    for(int j=strlen(t),i=strlen(s); j>=0; i--,j--){
      if(t[j]==s[i]){
        x = 1;
      }
      x = 0;
    } 
    return x; 
}

int main(){
  char s[]="Hello world";
  char t[]="sss";
  printf("%d",strend(s,t));
  return 0;
}