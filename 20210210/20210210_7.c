/*Задача 6. Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи.*/
#include <stdio.h>

int linear_search(const int a[], int n, int key){
  int i;
  while (*a++){
    if (*a == key){
      return *a;
    }
  }
  return -1;
}

int main(){
  int arr[] = { 2, 3, 4, 10, 40 };
  int x = 10;
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("%d", linear_search(arr, n, x));
  return 0;
}