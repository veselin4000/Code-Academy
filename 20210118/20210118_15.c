#include <stdio.h>
int main(){
  int nA = 0;
  int nC = 0;
  printf("Enter value for nA\n");
  scanf("%d", &nA);
  printf("Enter value for nC\n");
  scanf("%d", &nC);
  int nB = ( nA == 1 ? 2 : 0 ); 
  printf("A value is %d\n", nA);
  printf("B value is %d\n", nB);
   (nA >= nC ? printf("nA is bigger or equal to nC") : printf("nC is bigger than nA"));
}
