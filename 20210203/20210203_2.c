/*Задача 2. Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край.*/
#include <stdio.h>
void printArr(int a[], int l){
  printf("Elements of the array: "); 
  for (int i = 0; i < l; i++){
    printf("%d ", a[i]);
  }
}

int main(){
  int a[] = {1, 5, 2, 7, 9};
  int len = sizeof(a)/sizeof(a[0]);
  printArr(a, len);
  return 0;
}