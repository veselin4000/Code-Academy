#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  printf("Enter number of array elements: ");
  scanf("%d",&n);
  int *arr = (int*)malloc(n*sizeof(int));
  for (int i = 0; i < n; i++){
    scanf("%d", arr+i);
  }
  arr = (int*)realloc(arr, 2*n*sizeof(int));
  for (int i = n; i < 2*n; i++){
    scanf("%d", arr+i);
  }
  for (int i = 0; i < 2*n; i++){
    printf("%d ", *(arr+i));
  }
  free(arr);

}