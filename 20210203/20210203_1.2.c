/*Задача 1.2 принтирайте последния елемент от
декларираните по горе масиви:
Първият от тип char
Вторият от тип int
Третият от тип double*/
#include <stdio.h>

int main(){
  char charArr[3] = {'a', 's', 'c'};
  int intArr[6] = {1, 3, 5, 6, 8, 11};
  double doubleArr[2] = {1.1, 2.2,};
  printf("Last element in charArr is: %c\n", charArr[sizeof(charArr)/sizeof(charArr[0])-1]);
  printf("Last element in intArr is: %d\n", intArr[sizeof(intArr)/sizeof(intArr[0])-1]);
  printf("Last element in doubleArr is: %lf\n", doubleArr[sizeof(doubleArr)/sizeof(doubleArr[0])-1]);
  return 0;
}