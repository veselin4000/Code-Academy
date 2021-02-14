/*Задача 1. Напишете програма, която сумира всички елементи на масив
намиращи се на четна позиция:
int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
Декларирайте пойнтер към първата нечетна позиция, инкрементирайте
пойнтера по подходящ начин, за да извършите сумирането.*/
#include <stdio.h>
#include <string.h>

int main(){
     long *plvalue=NULL;
     *(int)plvalue=13;
  printf("Sum of numbers on even positions: %d", *plvalue);
  return 0;
}