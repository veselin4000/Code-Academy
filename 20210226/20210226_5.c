/*Задача 5 Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата.*/
#include <stdio.h>

typedef int arr[5];

int main(){
  arr a;
  for (int i = 0; i < 5; i++){
    a[i]=i;
  }
  for (int i = 0; i < 5; i++){
    printf("E:[%d]: %d ", i, a[i]);
  }
}