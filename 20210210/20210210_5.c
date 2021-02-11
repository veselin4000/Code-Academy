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
}