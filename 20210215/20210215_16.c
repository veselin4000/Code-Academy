/*Задача 16.
Направете същото, както в задача 17, но използвайки
готовата функция strcpy. Потърсете онлайн как работи
тази функция и какви аргументи приема.
*/
#include <stdio.h>
#include <string.h>

int main(){
  char *str = "Hello world";
  char *str2;
  strcpy(str2, str);
  printf("%s", str2);
  return 0;
}