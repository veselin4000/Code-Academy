/*Задача 6.
Дефинирайте променлива „а“, дeфинирайте пойнтер към
нея, присвоете му адреса на променливата. През пойнтера
задайте нова стойност = 5 на променливата „а“. Каква е
стойността на “а”?*/
#include <stdio.h>

int main(){
  int a;
  int *ptr = &a;
  *ptr = 5;
  printf("%d", a);
  return 0;
}