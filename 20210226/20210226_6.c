#include <stdio.h>

//typedef ;
typedef struct a{
char c[10];
int i;

}key;

int main(){
key a={"code",10};
//a.c=
//a.i=5;
printf("%d %s",a.i,a.c);
}