/*Задача 5. Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i:
int sum_array(const int a[], int n){
int i, sum = 0;
for(i = 0; i < n; i++){
sum += a[ i ];
return sum;
}*/
#include <stdio.h>

int sum_array(const int a[], int n){
  int i, sum = 0;
  while(*a){
    sum += *(a++);
  }
  return sum;
}

int main(){
  int a[] = {1, 2, 3, 9, 5};
  int n = 5;
  printf("Sum is %d", sum_array(a, n));
  return 0;
}