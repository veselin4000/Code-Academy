/*Задача 7. Разгледайте и имплементирайте quicksort алгоритъма.*/
#include <stdio.h>

int partition (int arr[], int low, int high){
  int pivot,i,temp;
  pivot = arr[high];  
  i = (low - 1);
  for (int j = low; j <= high- 1; j++){
    if (arr[j] < pivot){
      i++;   
      temp =arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
  }
  temp =arr[i+1];
  arr[i+1]=arr[high];
  arr[high]=temp;
  return (i + 1);
}

void quickSort(int arr[], int low, int high){
  if (low < high){
    int pi;
    pi = partition(arr, low, high);

    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

int main(){
  int i, count=5; 
  int number[5]={6,7,3,4,5};

  quickSort(number,0,count-1);

  printf("Order of Sorted elements:");
  for(i=0;i<count;i++)
    printf(" %d",number[i]);

  return 0;
}