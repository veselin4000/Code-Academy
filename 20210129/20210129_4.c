#include <stdio.h>

int func(int a, int b, int c){
return a*2+b*c;
}
int main(){
int a;
int b;
int c;
  printf("A = ");
  scanf("%d",&a);
  printf("B = ");
  scanf("%d",&b);
  printf("C = ");
  scanf("%d",&c);

printf("A*2+B*C = %d", func(a, b, c));

}