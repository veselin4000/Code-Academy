/*Задача 1. Дефиниране и инициализация на обединение */
#include <stdio.h>

union data{
  int nValue;
  float mValue;
  char text[32];
};

int main(){
  union data d = {13};
  printf("Memory size: sizeof(data): %d\n", sizeof(d));
  printf("\nValue: %d,fValue: %f, Text: %s\n",d.nValue,d.mValue,d.text);
  return 0;
}