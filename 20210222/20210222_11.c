#include <stdio.h>
#include <string.h>

union un{
  int a;
  int b;
  char c;
};

int main(){
union un x;

x.a=-7;
printf("%d\n", a.a);

x.b=10;
printf("%d\n", x.b);

x.c='c';
printf("%c\n", x.c);

printf("\n%d %d %c", x.a, x.b, x.c);

}