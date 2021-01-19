#include <stdio.h>
int main(){
  int nX = 0;
  int nY = 0;
  printf("Enter value for nX\n");
  scanf("%d", &nX);
  printf("Enter value for nY\n");
  scanf("%d", &nY);
  if (nX == nY){
    printf("%d and %d are equal\n", nX, nY);
  }else{
    printf("%d and %d are not equal\n", nX, nY);
  }
  if (nX > nY){ 
    printf("%d is greater than %d\n", nX, nY);
  }
  if (nX < nY){ 
    printf("%d is less than %d\n", nX, nY);
  }
  if (nX != nY){ 
    printf("%d is not equal to %d\n", nX, nY);
  }
  if (nX >= nY){ 
    printf("%d is greater or equal to %d\n", nX, nY);
  }
  if (nX <= nY){ 
    printf("%d is less or equal to %d\n", nX, nY);
  }
  return 0;
} 