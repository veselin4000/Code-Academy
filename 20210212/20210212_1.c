#include <stdio.h>
#include <stdlib.h>

int main(){
  unsigned uIdx = 0;
  unsigned uNumOfElem = 0;
  int *piValues = NULL;
  int iSum = 0;

  printf("Enter number of elements: ");
  scanf("%d", &uNumOfElem);
  piValues = (int*)malloc(uNumOfElem);
  if (NULL==piValues){
    printf("Allocation memory error!\n");
    exit(1);
  }
  for (int i = 0; i<uNumOfElem; i++){
    printf("Enter element %d: ",i);
    scanf("%d", (piValues+i));
    iSum+=piValues[i];
  } 
  printf("\nSum: %d ", iSum);
  free(piValues);
  return 0;
}