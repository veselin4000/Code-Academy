#include <stdio.h>

typedef int a[5];

int main(){
  a arr;
for (int i = 0; i < 5; i++)
{
  arr[i]=i;
}
for (int i = 0; i < 5; i++)
{
  printf("%d ",arr[i]);
}



}