#include <stdio.h>
#define N 100
int main(){
  int i, j, a[N];
  for (i=2; i<N; i++){
    a[i]=1;
  }
  for (i=2; i<N; i++){
    if (a[i]){
      for (j=i; i*j<N; j++){
        a[i*j]=0;
      }
    }
  }
  printf("1 ");
  for (i=2; i<N; i++){
    if (a[i]){
      printf("%d ",i);
    }
  }
  return 0;
}