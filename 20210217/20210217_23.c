/*Използване на метода на мехурчето за сортиране на масив от
числа (виж. wiki). */
#include <stdio.h> 
  
void swap(int *xp, int *yp){ 
  int temp = *xp; 
  *xp = *yp; 
  *yp = temp; 
} 
  
void bubbleSort(int arr[], int n){ 
  int i, j; 
  for (i = 0; i < n-1; i++)       
    for (j = 0; j < n-i-1; j++)  
      if (arr[j] > arr[j+1]) 
        swap(&arr[j], &arr[j+1]); 
} 
  
void printArray(int arr[], int size){ 
  int i; 
  for (i=0; i < size; i++) 
    printf("%d ", arr[i]); 
  printf("\n"); 
} 
  
int main() { 
  int n;
  printf("Array size:");
  scanf("%d",&n);int arr[n];
  for (int i = 0; i < n; i++){
    printf("Element [%d]: ",i);
    scanf("%d",&arr[i]);
  }
  bubbleSort(arr, n); 
  printf("Sorted array: \n"); 
  printArray(arr, n); 
  return 0; 
} 