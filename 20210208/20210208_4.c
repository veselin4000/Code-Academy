#include <stdio.h>

double average(int *arr,int n){
  int i;
  int sum = 0;
  for (i = 0; i < n; i++)
  {
    sum+=arr[i];
  }
  return (double)sum/n;
}

int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {scanf("%d",&arr[i]);}
  printf("%lf", average(arr, n));

}