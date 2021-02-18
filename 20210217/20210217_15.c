#include <stdio.h>

int main(){
  int x;
  int br,base;
  printf("Za 6/49 natisnete 1, za 6/42-2, za 5/35-3.");
  scanf("%d",&x);
  switch (x){
  case 1:br=6;base=49;break;
  case 2:br=6;base=42;break;
  case 3:br=5;base=35;break;
  default:break;
  }
  int arr[base];
  int flag=0;
  int n;
  for (int i = 0; i < br; i++){
    n=(rand()%base)+1;
    for (int k = 0; k < base; k++){
      if (arr[k]==n){
        printf("%d--%d ",arr[k],n);
        flag=1;
      }
    }
    if (flag==1){
      i--;
      flag=0;
    }else{
      arr[i]=n;
    }
  }
  for (int m = 0; m < br;m++){
    printf("%d ",arr[m]);
  }
}