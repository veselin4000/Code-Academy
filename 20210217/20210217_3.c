/*Задача.3. Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от
горните функции иска да използва – събиране, изваждане,
умножение и деление. След това попитайте за числата, които
да участват в тази операция, и извикайте функцията, която да
извърши желаната операция.*/
#include <stdio.h>

void add(int a,int b){printf("res:%d",a+b);}
void minus(int a,int b){printf("res:%d",a-b);}
void multipy(int a,int b){printf("res:%d",a*b);}
void div(int a,int b){printf("res:%d",a/b);}

void(*funk_ptr[4])(int a,int b)={add, minus, multipy, div};

int main(){
  int n,a,b,x;
  char c[4]={'+','-','*','/'};
  printf("Enter 1for(+),2for(-),3 for(*),4 for(/)\n");
  scanf("%c",&n);
  printf("Enter first number: \n");
  scanf("%d",&a);
  printf("Enter second number: \n");
  scanf("%d",&b);
  for (int i = 0; i < 4; i++){
    if(n==c[i]){
      x=i;
    }
  }
  (*funk_ptr[x])(a,b);
  return 0;
}