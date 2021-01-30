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
    printf("C = ");
    scanf("%f",&c);
    printf("Absolute value of %f is %f\n", c, abss(c));
    printf("D = ");
    scanf("%f",&d);
    printf("Square root of %lf is %lf\n", d, sqrtT(d));
    return 0;
}