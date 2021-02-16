/*Задача 8.
Дефинирайте и инициализирайте променлива и пойнтер
към нея. Отпечатайте адреса на пойнтера с %p с printf.*/
#include <stdio.h>

int main(){
  int a =5;
  int *ptr = &a;
  printf("%p",ptr);
  return 0;
}
