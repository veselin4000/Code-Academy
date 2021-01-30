#include <stdio.h>

void decToBin(int num){
  int arr[10];
  int count = 0;
  for (int i = 0; num != 0; i++){
    if (num%2==0){
      arr[i]=0;
    }else{
      arr[i]=1;
    }
  num=num/2;
  count++;
}
  for (int i = count-1; i >=0; i--){
    while ( count<4){
      printf("0 ");count++;
    }
    printf("%d ",arr[i]);
  }
}

int main(){
  int a;
  printf("A = ");
  scanf("%d",&a);
  decToBin(a);
}