#include <stdio.h>
int main(){
  int arr[5][5];
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    for (int j = 0; j < sizeof(arr)/sizeof(arr[0]); j++){
      scanf("%d",&arr[i][j]);
    }
  }
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    for (int j = 0; j < sizeof(arr)/sizeof(arr[0]); j++){
      printf("%d",arr[i][j]);
    }
  }
}