#include <stdio.h>
#include <string.h>

int main(){
  int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
  int *p=&arr[1];
  int sum = 0;
  for (int i = 0; i < 10; i+=2){
    sum += *(p + i);
  }
  printf("Sum of numbers on even positions: %d", sum);
}