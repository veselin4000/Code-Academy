#include <stdio.h>
void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}

int main(){
char z = -10;
bin(z);
//printf("%d\n", z);

unsigned char a = 0;
bin(a);
//printf("%d\n", a);


z = z + a;
printf("%d\n", z);

return 0;

}