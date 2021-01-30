#include <stdio.h>
#include "prot.h"
int main(){
     int a,b;
    float c,d;
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    printf("nok = %d\n",nok(a,b));
    printf("Absolute value of C = ");
    scanf("%f",&c);
    printf("%f\n",abss(c));
    printf("Square root of D = ");
    scanf("%f",&d);
    printf("%lf\n",sqrtT(d));
    return 0;
}