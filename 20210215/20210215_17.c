/*Задача 17. Направете същото, както в задача 18., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема*/
#include <stdio.h>
#include <string.h>

int main(){
  char *str = "Hello world";
  char *str2;
  memset(str2,48,strlen(str));
  printf("%s\n", str2);
  strcpy(str2,str);
  printf("%s\n", str2);
  return 0;
}