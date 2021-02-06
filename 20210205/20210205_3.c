/*Задача 3.Какво е грешното на този код?
void my_strcpy(char *t, char *s){
for(; *t; t++, s++)
*s = *t;
}*/
#include <stdio.h>

void my_strcpy(char *t, char *s){
  for(; *t; *t++, *s++) /*инкрементирането*/
  *s = *t;
}

int main(){
  char s[]="Hello";
  char t[]="hello world";
  my_strcpy(s,t);
  printf("str: %s\n",s);   
  return 0;
}