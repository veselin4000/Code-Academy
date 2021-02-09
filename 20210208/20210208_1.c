#include <stdio.h>

int main(){
  int arr[5];
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
  {
    scanf("%d",&arr[i]);
  }
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
  {printf("%d",arr[i]);}
  return 0;
}