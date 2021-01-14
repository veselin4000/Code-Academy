#include <stdio.h>
int main(){
double a = 4.9876543;
long double b = 7.123456789012345678890L;
double c = 18398458438583853.28;
long double d = 18398458438583853.39875937284928422L;
printf("%lf\n%Lf\n%lf\n%Lf",a, b, c, d);
}