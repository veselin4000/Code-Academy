
#include <stdio.h>
struct point {
   int a;
   int b;
};

struct point makepoint(int x, int y){
	struct point p;
	p.a=x;
	p.b=y;
	return p;
}


int main( ) {
	int a,b,c,d;
	printf("enter value for x for p1: ");
	scanf("%d",&a);
	
	printf("enter value for y for p1: ");
	scanf("%d",&b);
	
	printf("enter value for x for p2: ");
	scanf("%d",&c);
	
	printf("enter value for y for p2: ");
	scanf("%d",&d);
	
	struct point p1=makepoint(a,b);
	struct point p2=makepoint(c,d);
	
	printf("%d %d",p1.a,p1.b);
	printf("%d %d",p2.a,p2.b);

}