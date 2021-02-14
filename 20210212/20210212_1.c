/*Задача 1. Да се направи програма, която заделя динамичен масив с брой елементи
зададени от потребителя. За всеки елемент от масива се очаква потребителят да въведе
цяло и число и след това се изчислява сумата на всички елементи от масива.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  unsigned num = 0;
  int *piValues;
  int iSum = 0;

  printf("Enter number of elements: ");
  scanf("%d", &num);
  piValues = (int*)malloc(num*sizeof(int));
  if (NULL==piValues){
    printf("Allocation memory error!\n");
    exit(1);
  }
  for (int i = 0; i<num; i++){
    printf("Enter element %d: ",i);
    scanf("%d", (piValues+i));
    iSum += piValues[i];
  } 
  printf("\nSum: %d ", iSum);
  free(piValues);
  return 0;
}