/*Задача 1 декларирайте три масива с три елемента:
Първият от тип char
Вторият от тип int
Третият от тип double
Отпечатайте размерите на масивите използвайки
оператора sizeof(arr);*/
#include <stdio.h>

int main(){
  char charArr[5];
  int intArr[6];
  double doubleArr[7];
  printf("Size of charArr: %d\n", sizeof(charArr)/sizeof(charArr[0]));
  printf("Size of intArr: %d\n", sizeof(intArr)/sizeof(intArr[0]));
  printf("Size of doubleArr: %d\n", sizeof(doubleArr)/sizeof(doubleArr[0]));
  return 0;
}