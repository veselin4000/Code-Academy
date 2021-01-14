#include <stdio.h>

int main(){
unsigned char a = 255;
char b = 10;
char c = a + b;
printf("%c\n", c); // 9 = tab
printf("%d", c);   // 9   препълва се и започва от 0
return 0;
}