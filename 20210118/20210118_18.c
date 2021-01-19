#include <stdio.h>
#include <unistd.h>


void bin(unsigned n) { 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 ) 
		(n & i)? printf("*"): printf("."); 
	printf("\n");
}
int main(){
  int a=1;
  for (int i = 0; i < 8; i++){
    int c= a<<i;
    bin(c);
    sleep(2);
  }
}