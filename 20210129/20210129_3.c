#include <stdio.h>

int func(int a, int b){
  return (a+b)*4;
}
int main(){
  int a,b;
  printf("A = ");
  scanf("%d",&a);
  printf("B = ");
  scanf("%d",&b);

  printf("(A+B)*4 = %d", func(a, b));

}