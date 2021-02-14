#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;int i=0;
  printf("Enter number of array elements: ");
  scanf("%d",&n);
  int *arr = (int*)malloc(n*sizeof(int));
  for (; i < n; i++){
    printf("Enter value for element %d : ",i);
    scanf("%d", arr+i);
  }
  printf("Enter new size of the  array : ");
  scanf("%d",&n);
  arr = (int*)realloc(arr, n*sizeof(int));
  for (; i < n; i++){
    printf("Enter value for element %d : ",i);
    scanf("%d", arr+i);
  }
  for (int i = 0; i < n; i++){
    printf("%d ", *(arr+i));
  }
  free(arr);
  return 0;
}