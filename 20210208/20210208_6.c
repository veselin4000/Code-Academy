#include <stdio.h>

int biggestNum(int *arr){
  int biggest =0;
for (int i = 0; i < 5; i++)
{
  if (biggest<arr[i])
  {
biggest=arr[i];
  }
  
}return biggest;

}

int main(){
int arr[5]={1,2,11,4,9};
printf("%d",biggestNum(arr));
}