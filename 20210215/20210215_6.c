#include <stdio.h>

int main(){
int a;
int *ptr = &a;
*ptr = 5;
printf("%d", a);
return 0;
}